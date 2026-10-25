#include "ctx.h"

typedef struct { u32 a, b, c; } Tri;

void func_02027618(int param_1, Tri *param_2)
{
    *param_2 = *(Tri *)(param_1 + 0x2c4);
}
