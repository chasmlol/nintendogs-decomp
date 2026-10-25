#include "ctx.h"
typedef struct { u32 a; u32 b; } Pair;
void func_02095304(u8 *param_1)
{
    Pair *s = (Pair *)(param_1 + 0x640);
    s->a = 0xffff;
    s->b = 0xffff;
}
