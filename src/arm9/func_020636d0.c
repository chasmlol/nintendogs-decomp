#pragma avoid_byte all
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_loop_invariants off

extern u64 func_0205e074(u32 lo, u32 hi, u32 a, u32 b);
extern u64 func_0205e068(u32 lo, u32 hi, u32 a, u32 b);

void func_020636d0(u8 *param_1, u64 param_v)
{
    u32 uVar5;
    u32 zero;
    u8 *puVar4;
    u32 ten;
    u64 uVar7;
    u64 n;
    u8 *puVar3;

    zero = 0;
    *param_1 = 0;
    puVar4 = param_1 + 4;
    *puVar4 = (u8)zero;
    n = param_v;
    if (n != 0) {
        ten = 10;
        do {
            uVar5 = *(u8 *)(param_1 + 4);
            *puVar4 = *puVar4 + 1;
            uVar7 = func_0205e074((u32)n, (u32)(n >> 32), ten, zero);
            puVar3 = (u8 *)((u32)param_1 + uVar5 + 5);
            *puVar3 = (u8)uVar7;
            n = func_0205e068((u32)n, (u32)(n >> 32), ten, zero);
        } while (n != 0);
    }
    puVar4 = param_1 + 5;
    puVar3 = puVar4 + (*(u8 *)(param_1 + 4)) - 1;
    if (puVar4 < puVar3) {
        do {
            uVar5 = *puVar4;
            *puVar4 = *puVar3;
            *puVar3 = (u8)uVar5;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 - 1;
        } while (puVar3 > puVar4);
    }
    *(u16 *)(param_1 + 2) = (u16)(*(u8 *)(param_1 + 4) - 1);
}
