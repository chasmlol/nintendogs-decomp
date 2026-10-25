#include "ctx.h"
typedef struct { u32 a; u32 b; } S2;
extern u8 *data_0215be48;
void func_02108e24(u32 param_1)
{
    u8 *p = data_0215be48;
    S2 *s2 = (S2 *)(p + 0x5028);
    if (s2->a != 0) {
        s2->b = param_1;
    }
}
