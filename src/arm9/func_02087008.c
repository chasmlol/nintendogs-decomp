#include "ctx.h"

typedef struct FSArchive FSArchive;
typedef int (*FS_ARCHIVE_READ_FUNC)(FSArchive *p, void *dst, u32 pos, u32 size);

struct FSArchive {
    u32 name;
    FSArchive *next;
    FSArchive *prev;
    u16 sync_q;
    u16 stat_q;
    u32 flag;
    u8 pad14[0x44 - 0x14];
    FS_ARCHIVE_READ_FUNC read_func;
};

typedef struct {
    FSArchive *arc;
    u32 pos;
} FSiSyncReadParam;

extern u32 func_02080b08(void);
extern u32 func_02080b1c(u32 enabled);
extern void func_0207f554(void *queue);

static inline BOOL FSi_IsArchiveSync(volatile const FSArchive *p_arc)
{
    return (p_arc->flag & 0x200) ? TRUE : FALSE;
}

void func_02087008(FSiSyncReadParam *p, void *dst, u32 len)
{
    FSArchive *const arc = p->arc;

    arc->flag |= 0x200;

    switch ((*arc->read_func)(arc, dst, p->pos, len)) {
    case 0:
    case 1:
        arc->flag &= ~0x200;
        break;
    case 6:
        {
            u32 bak_psr = func_02080b08();
            while (FSi_IsArchiveSync(arc)) {
                func_0207f554(&arc->sync_q);
            }
            (void)func_02080b1c(bak_psr);
        }
        break;
    }
    p->pos += len;
}
