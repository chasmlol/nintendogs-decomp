#include "ctx.h"

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

extern int data_0214f460;
extern int func_020aaf38(int a, int *b, int c);

static inline s32 SqFX(int p)
{
    s32 v = *(s32 *)(*(s32 *)(p + 0x9e8) + 8);
    return (s32)((((s64)v * v) + 0x800) >> 12);
}

u32 func_02026e68(int param_1)
{
    int iVar3;

    iVar3 = func_020aaf38(data_0214f460, (int *)(param_1 + 0x378), FX_MUL(SqFX(param_1), 0x1004));
    if (iVar3 != 0) {
        return 1;
    }
    iVar3 = func_020aaf38(data_0214f460, (int *)(param_1 + 900), FX_MUL(SqFX(param_1), 0x14d2));
    if (iVar3 != 0) {
        return 2;
    }
    iVar3 = func_020aaf38(data_0214f460, (int *)(param_1 + 0x348), FX_MUL(SqFX(param_1), 0x14d2));
    if (iVar3 != 0) {
        return 3;
    }
    return 0;
}
