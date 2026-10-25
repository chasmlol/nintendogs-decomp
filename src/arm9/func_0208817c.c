#include "ctx.h"

typedef struct {
    u8 pad0[0xc];
    u32 stat;
    u8 pad10[0x24 - 0x10];
    u32 bottom;
    u32 pos;
    void *dst;
    u32 len_org;
    u32 len;
} FSFile;

extern BOOL func_02087854(FSFile *p_file, int command);
extern BOOL func_02087efc(FSFile *p_file);

s32 func_0208817c(FSFile *p_file, void *dst, s32 len, BOOL async)
{
    const s32 pos = (s32)p_file->pos;
    const s32 rest = (s32)(p_file->bottom - pos);
    const u32 org = (u32)len;

    if (len > rest) {
        len = rest;
    }
    if (len < 0) {
        len = 0;
    }
    p_file->dst = dst;
    p_file->len_org = org;
    p_file->len = (u32)len;
    if (!async) {
        p_file->stat |= 4;
    }
    (void)func_02087854(p_file, 0);
    if (!async) {
        if (func_02087efc(p_file)) {
            len = (s32)(p_file->pos - pos);
        } else {
            len = -1;
        }
    }
    return len;
}
