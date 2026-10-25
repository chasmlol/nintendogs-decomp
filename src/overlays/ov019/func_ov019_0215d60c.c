#pragma avoid_byte strb
#include "ctx.h"

extern int func_ov019_0215ccd8(int a);
extern void func_ov019_0215d66c(int a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov019_0215d60c(int param_1)
{
    int iVar1;

    iVar1 = func_ov019_0215ccd8(param_1);
    if (iVar1 != 0) {
        *(u32 *)(iVar1 + 0x24) = 0x40;
        *(u32 *)(iVar1 + 0x28) = 0x1000;
        *(u32 *)(iVar1 + 0x2c) = 0x40;
    }
    iVar1 = func_ov019_0215ccd8(param_1);
    if (iVar1 != 0) {
        ((u16 *)iVar1)[16] = ((u16 *)iVar1)[16] & ~1;
        SwapByte(((u8 *)iVar1)[1] & ~1, (vu8 *)((u8 *)iVar1 + 1));
    }
    func_ov019_0215d66c(param_1);
}
