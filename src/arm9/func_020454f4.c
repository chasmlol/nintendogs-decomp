#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02036510(u8 *p);
extern void func_02027654(s32 a, void *b);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern void func_0202fcc0(u8 *p);

void func_020454f4(u8 *p)
{
    s32 iVar2;
    iVar2 = func_02036510(p);
    if (iVar2 != 0) {
        func_02027654(iVar2, p + 948);
    }
    if (func_020289d0(p, 0, 1) != 0) {
        *(s8 *)(p + 138) = -1;
        return;
    }
    if (iVar2 == 0) {
        *(s8 *)(p + 138) = -1;
        func_0202fcc0(p);
        return;
    }
    if (*(u16 *)(p + 252) > 120) {
        *(s8 *)(p + 138) = -1;
        func_0202fcc0(p);
    }
}
