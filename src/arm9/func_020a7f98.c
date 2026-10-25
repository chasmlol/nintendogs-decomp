#include "ctx.h"

typedef struct {
    u32 magic;
    u32 zero;
    s16 a;
    s16 b;
} S20;

void func_020a7f98(u32 *p)
{
    S20 *s = (S20 *)p;
    s->magic = 0x4e455457;
    s->zero = 0;
    s->a = -1;
    s->b = -1;
}
