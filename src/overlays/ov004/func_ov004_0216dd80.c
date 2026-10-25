#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0202675c(int);
extern void func_02025bb0(int);
extern int func_020f523c(void);
extern int func_02028124(int);

void func_ov004_0216dd80(int param_1)
{
    u32 x1, x2;
    s16 t1, t2;
    s64 l1, l2;
    int iVar1;

    *(u16 *)(param_1 + 0x152) = 18;
    func_0202675c(param_1);
    func_02025bb0(param_1);
    iVar1 = func_020f523c();
    if (iVar1 != 0) {
        *(u32 *)(param_1 + 0x26c) = 0;
        *(u32 *)(param_1 + 0x270) = 0;
        iVar1 = func_02028124(param_1);
        *(int *)(param_1 + 0x274) = iVar1 * -3;
        return;
    }
    x1 = *data_0214f464 * 0x10dcd + 1;
    t1 = (s16)((u16)(x1 & 0xfff));
    l1 = (s64)t1 * 0xa000 + 0x800;
    *data_0214f464 = x1;
    *(u32 *)(param_1 + 0x26c) = ((u32)(l1 >> 12)) - 0x5000;
    *(u32 *)(param_1 + 0x270) = 0;
    x2 = *data_0214f464 * 0x10dcd + 1;
    t2 = (s16)((u16)(x2 & 0xfff));
    l2 = (s64)t2 * 0xa000 + 0x800;
    *data_0214f464 = x2;
    *(u32 *)(param_1 + 0x274) = ((u32)(l2 >> 12)) - 0x5000;
}
