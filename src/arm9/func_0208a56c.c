#include "ctx.h"

extern void func_0208010c(u32, u32);

void func_0208a56c(u32 *param_1)
{
    s32 iVar2;
    s32 iVar4;
    u8 *p;
    param_1[1] = 0;
    *(u16 *)((u8 *)param_1 + 8) = 0;
    *(u16 *)((u8 *)param_1 + 10) = 0;
    *param_1 = 0;
    p = (u8 *)param_1;
    iVar2 = 0;
    do {
        iVar4 = 0;
        ((u32 *)p)[0x10] = 0;
        do {
            ((s16 *)(p + 32))[iVar4] = -1;
            iVar4 = iVar4 + 1;
        } while (iVar4 < 0x10);
        iVar2 = iVar2 + 1;
        p = p + 36;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    do {
        ((s16 *)((u8 *)param_1 + 512 + 96))[iVar2] = -1;
        iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    func_0208010c((u32)param_1, 0x280);
}
