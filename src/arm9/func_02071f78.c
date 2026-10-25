#include "ctx.h"
extern u32 func_0207dd14(u32 a, u32 b, u32 c);
extern u8 *func_0207ce9c(u32 a, u32 b);
extern void func_0207d018(u8 *a, u8 *b);
u8 *func_02071f78(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u8 *iVar1;
    u8 *piVar2;
    iVar1 = (u8 *)func_0207dd14(param_1[0], ((param_2 + 0x1f) & 0xffffffe0) + 0x20, 0x20);
    if (iVar1 != NULL) {
        piVar2 = func_0207ce9c((u32)(param_1 + 1), 0);
        *(u32 *)(iVar1 + 8) = param_2;
        *(u32 *)(iVar1 + 0xc) = param_3;
        *(u32 *)(iVar1 + 0x10) = param_4;
        *(u32 *)(iVar1 + 0x14) = param_5;
        func_0207d018(piVar2, iVar1);
        return iVar1 + 0x20;
    }
    return NULL;
}
