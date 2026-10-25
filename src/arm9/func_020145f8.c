#include "ctx.h"

extern u32 data_0213b40c;
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 v);

void func_020145f8(u8 *p)
{
    s32 iVar2;
    s8 c;

    func_0201d1f0(p);
    c = *(s8 *)(p + 0x93);
    if (c != 0 && c != 1 && c != 23 && c != 24) {
        *(u16 *)(p + 0x12e) = 0xe000;
    }
    iVar2 = 1;
    if (*(u8 *)(p + 0x93) <= 0x18 && ((1u << *(u8 *)(p + 0x93)) & 0x01800003) != 0) {
        iVar2 = 0;
    }
    func_02035c98(p, iVar2);
    ((void (**)(u8 *, s32))&data_0213b40c)[*(s8 *)(p + 0x8c)](p, 11);
}
