#include "ctx.h"

extern int *data_0214f464;
extern u32 func_02028124(int);
extern void func_0202508c(int, int, int, int);
extern void func_02024d40(int, int, int, int);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern int func_0203567c(int);
extern void func_0209f59c(int);
extern void func_0203e908(int, int);

void func_ov004_02166334(int param_1)
{
    u32 uVar1;
    int iVar2;
    int iVar3;
    u16 s;

    uVar1 = func_02028124(param_1);
    func_0202508c(param_1, 1, 0x17,
                  (u32)(((s64)(s32)uVar1 * 186 + 0x800) >> 12));
    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 3, 0x18,
                  (u32)(((s64)(s32)uVar1 * 58 + 0x800) >> 12));
    *(u32 *)(param_1 + 0x484) = 0;
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    iVar2 = func_020f5220();
    if (iVar2 != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0209f59c(1);
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    iVar2 = iVar3 * 0x10000;
    *data_0214f464 = iVar3;
    s = (u16)(((u32)iVar2) >> 31);
    switch (s) {
    case 0:
        func_0203e908(param_1, 0x48d);
        return;
    case 1:
        func_0203e908(param_1, 0x48e);
        return;
    }
    return;
}
