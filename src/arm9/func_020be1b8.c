#include "ctx.h"

typedef struct { u32 a, b, c; } Tri;
extern u32 data_0215946c;

void func_020be1b8(Tri *param_1)
{
    *param_1 = *(Tri *)(*(u32 *)&data_0215946c + 12);
}
