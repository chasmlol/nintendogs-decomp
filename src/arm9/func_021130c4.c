#include "ctx.h"

extern u32 data_0215be48;
typedef struct { u32 f[4]; } E16;
typedef struct { E16 e[128]; } Blk;
extern u16 func_02112a8c(u8 *o);

void func_021130c4(s32 param_1, u32 param_2)
{
    u8 *puVar3;
    u32 uVar4;

    puVar3 = (u8 *)data_0215be48 + 0x1dec + param_1 * 660;
    if (param_2 == 0) {
        *(u32 *)(puVar3 + 8) = 0;
        *(u32 *)puVar3 = 0;
        *(u16 *)(puVar3 + 32) = 0;
        *(u16 *)(puVar3 + 34) = 0;
        return;
    }
    *(u32 *)(puVar3 + 8) = param_2;
    *(u32 *)puVar3 = 1;
    *(u16 *)(puVar3 + 32) = *(u16 *)(*(u32 *)(puVar3 + 8) + 6);
    *(u16 *)(puVar3 + 34) = func_02112a8c(puVar3);
    for (uVar4 = 0; uVar4 < *(u16 *)(puVar3 + 32); uVar4 = (u16)(uVar4 + 1)) {
        ((Blk *)((u8 *)data_0215be48 + 0x283c))[param_1].e[uVar4].f[0] = 1;
    }
}
