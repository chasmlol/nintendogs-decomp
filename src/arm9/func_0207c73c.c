#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Trio;
extern Trio data_02155c50;

void func_0207c73c(void)
{
    data_02155c50.a = 0;
    data_02155c50.b = data_02155c50.c;
}
