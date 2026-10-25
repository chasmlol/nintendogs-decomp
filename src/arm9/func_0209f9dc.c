#include "ctx.h"
extern u8 data_02159198[];
extern void func_02070ac8(u8 *p, u32 a, u32 b);
u32 func_0209f9dc(u32 param_1)
{
    u8 *piVar2;
    u32 iVar3;
    u16 uVar1;
    u16 uVar2;
    piVar2 = data_02159198;
    iVar3 = 0x1e;
    if (*(u32 *)piVar2 != 0) {
        *(u16 *)(piVar2 + 12) = (u16)param_1;
        if (*(u32 *)(piVar2 + 0x1c) != 0) {
            uVar2 = *(u16 *)(piVar2 + 0x1a);
            uVar1 = *(u16 *)(piVar2 + 0x18);
            *(u16 *)(piVar2 + 0x18) = 0;
            *(u32 *)(piVar2 + 0x1c) = 0;
            iVar3 = (u32)uVar2 - (u32)uVar1;
        }
        func_02070ac8(piVar2, param_1, iVar3);
        return 1;
    }
    return 0;
}
