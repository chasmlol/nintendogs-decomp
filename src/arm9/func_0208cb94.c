#include "ctx.h"
extern u32 func_020781d4(u32 *p);
extern void func_02074178(u32 a);
extern void func_0207407c(u32 a);
extern void func_02074164(u32 a, u32 b, u32 c);
extern void func_02074074(u32 a, u32 b);
extern void func_02074088(u32 a, u32 b);
extern void func_02074008(u32 a, u32 b);
extern u32 func_02078214(u32 a);
extern void func_02073c6c(u32 a, u32 b);
void func_0208cb94(u8 *param_1)
{
    u32 *piVar3;
    u32 iVar1;
    int iVar2;
    if ((*(u16 *)(2 + param_1) & 1) == 0) {
        return;
    }
    *(u16 *)(param_1 + 2) = *(u16 *)(2 + (u32)param_1) & ~1;
    piVar3 = *(u32 **)(0xa0 + param_1);
    iVar1 = func_020781d4(piVar3);
    if (iVar1 != 0) {
        func_02074178((u32)iVar1);
        func_0207407c(iVar1);
        func_02074164(iVar1, 0, *(u32 *)(0xb0 + param_1));
        func_02074074((s32)iVar1, *(u32 *)(param_1 + 0xb8));
        func_02074088((int)iVar1, 1);
        func_02074008(iVar1, 1);
    }
    iVar2 = func_02078214((u32)piVar3);
    if (iVar1 != 0) {
        func_02073c6c(iVar2, iVar1);
        return;
    }
}
