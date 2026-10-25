#include "ctx.h"

typedef struct { u32 w[3]; } T3;

void func_020cf9a0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x50) = 60;
    *(T3 *)(param_1 + 0x54) = *(T3 *)(param_1 + 0xc);
}
