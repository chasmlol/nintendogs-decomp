#include "ctx.h"

/* NitroSystem gfd: frame texture VRAM manager, NNS_GfdAllocFrmTexVram */

typedef struct Region {
    u32 head;
    u32 tail;
    BOOL bActive;
    u32 unk0c;
    u16 index;
    u16 pad;
    u32 base;
} Region;

extern Region data_0213e7cc;
extern Region data_0213e7b4;
extern Region *data_0213e780[2];
extern Region *data_0213e788[5];

static inline BOOL IsAllocatable_(const Region *p, u32 sz)
{
    return p->bActive && p->tail - p->head >= sz;
}

u32 func_0207c42c(u32 szByte, BOOL is4x4comp)
{
    u32 addr;
    u32 size;
    BOOL result;
    s32 i;
    Region *pRgn;
    Region *pIdx;

    if (szByte == 0) size = 16;
    else size = (szByte + 15) & ~15;
    if (size >= 0x7fff0) return 0;

    if (is4x4comp) {
        for (i = 0; i < 2; i++) {
            pRgn = data_0213e780[i];
            if (IsAllocatable_(pRgn, size)) {
                switch (pRgn->index) {
                case 0: pIdx = &data_0213e7b4; break;
                case 3: pIdx = &data_0213e7cc; break;
                default: pIdx = NULL; break;
                }
                if (IsAllocatable_(pIdx, size / 2)) {
                    u32 head = pRgn->head;
                    pRgn->head = head + size;
                    pIdx->head += size / 2;
                    addr = head + pRgn->base;
                    result = TRUE;
                    goto end;
                }
            }
        }
        result = FALSE;
    } else {
        for (i = 0; i < 5; i++) {
            pRgn = data_0213e788[i];
            if (IsAllocatable_(pRgn, size)) {
                pRgn->tail -= size;
                addr = pRgn->tail + pRgn->base;
                result = TRUE;
                goto end;
            }
        }
        result = FALSE;
    }
end:
    if (result) {
        return ((addr >> 3) & 0xffff) | ((size >> 4) << 16) | ((u32)is4x4comp << 31);
    }
    return 0;
}
