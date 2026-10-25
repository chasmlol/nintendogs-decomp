#include "ctx.h"

typedef struct { u32 a, b, c; } Tri;

void func_02027494(int param_1, Tri *param_2)
{
    *(Tri *)(param_1 + 0x490) = *param_2;
}
