#include "ctx.h"

extern u64 func_02073224(int p);
extern void func_02087fcc(int *a, u32 b);
extern void func_020731b0(u32 *a, int b);
extern void func_020733e0(int p);
extern u32 data_0215275c;
extern u32 data_021522a0;

void func_0207326c(int param_1)
{
    s32 t;
    u32 extraout_r1;

    t = (*(int *)(param_1 + 0x10c) << 0x1f) >> 0x1f;
    if (t != 0) {
        extraout_r1 = (u32)(func_02073224(param_1) >> 32);
        func_02087fcc((int *)(param_1 + 0x5c), extraout_r1);
        func_020731b0((u32 *)&data_0215275c, param_1);
        if (data_021522a0 != 0) {
            func_020731b0((u32 *)(data_021522a0 + 0x4ac), param_1);
        }
        func_020733e0(param_1);
        return;
    }
}
