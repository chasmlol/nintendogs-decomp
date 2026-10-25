#include "ctx.h"

extern u32 data_0214f464;
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern void func_02026478(u8 *p);
extern void func_02025e54(u8 *p);

void func_0204d72c(u8 *param_1)
{
    u32 *P;
    u32 v;

    P = *(u32 **)&data_0214f464;
    v = *P * 0x10dcd + 1;
    *P = v;
    switch ((u16)((((u32)v) << 16) >> 29)) {
    case 0:
        func_0203e8cc(param_1, 0, 0x17f);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 1;
        return;
    case 1:
        func_0203e8cc(param_1, 0, 384);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 2;
        return;
    case 2:
        func_0203e8cc(param_1, 0, 0x182);
        func_02025e54(param_1);
        *(u32 *)(param_1 + 0x46c) = 3;
        return;
    case 3:
        func_0203e8cc(param_1, 0, 0x183);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 4;
        return;
    case 4:
        func_0203e8cc(param_1, 0, 388);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 5;
        return;
    case 5:
        func_0203e8cc(param_1, 0, 0x165);
        func_02025e54(param_1);
        *(u32 *)(param_1 + 0x46c) = 6;
        return;
    case 6:
        func_0203e8cc(param_1, 0, 360);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 7;
        return;
    case 7:
        func_0203e8cc(param_1, 0, 0x169);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 8;
        return;
    case 8:
        func_0203e8cc(param_1, 0, 0x181);
        func_02026478(param_1);
        *(u32 *)(param_1 + 0x46c) = 9;
        return;
    default:
        return;
    }
}
