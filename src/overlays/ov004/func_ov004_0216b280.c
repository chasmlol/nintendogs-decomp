#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0203e8cc(int, int, int);
extern int func_02035164(int);
extern void func_02026478(int);
extern void func_02025e54(int);

void func_ov004_0216b280(int param_1)
{
    u32 uVar2;
    u32 uVar1;

    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    switch ((u16)(((u32)uVar2 << 16) >> 29)) {
    case 0:
        func_0203e8cc(param_1, 0, 0x111);
        uVar1 = func_02035164(param_1);
        func_0203e8cc(param_1, 3, uVar1);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 1;
        return;
    case 1:
        func_0203e8cc(param_1, 0, 0x180);
        func_0203e8cc(param_1, 3, 0);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 2;
        return;
    case 2:
    case 3:
    case 4:
        break;
    case 5:
        func_0203e8cc(param_1, 0, 0x165);
        func_0203e8cc(param_1, 3, 0);
        func_02025e54(param_1);
        *(u32 *)(param_1 + 0x46c) = 6;
        return;
    case 6:
        func_0203e8cc(param_1, 0, 0x168);
        func_0203e8cc(param_1, 3, 0);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 7;
        return;
    case 7:
        func_0203e8cc(param_1, 0, 0x169);
        func_0203e8cc(param_1, 3, 0);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 8;
        return;
    }
}
