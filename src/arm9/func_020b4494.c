#include "ctx.h"
typedef struct { u32 a; u32 b; } Pair;
extern void func_020b42c0(u8 *p, s16 v, u16 *q);
void func_020b4494(u8 *param_1, s16 param_2)
{
    u16 local[2];
    u8 *q;
    Pair *s;
    local[0] = 0;
    local[1] = 0x5a;
    func_020b42c0(param_1, param_2, local);
    q = param_1 + 4;
    s = (Pair *)(q + 0x640);
    s->a = 0xbeef;
    s->b = 0xbeef;
    *(u16 *)(q + 1536 + 76) = 0x13a;
    if (0xea5f < *(u16 *)(q + 1536 + 76)) {
        *(u16 *)(q + 1536 + 76) = 0xea5f;
    }
    s = (Pair *)(param_1 + 0x2614);
    s->a = 0xbeef;
    s->b = 0xbeef;
    *(u16 *)(param_1 + 0x74f0) = 2;
}
