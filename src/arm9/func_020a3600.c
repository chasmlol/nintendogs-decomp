#include "ctx.h"

typedef struct {
    u32 a;
    u16 h4;
    u16 pad6;
    u32 x8;
    u32 c[5];
    u32 d[5];
    u32 x34;
    u32 x38;
    u16 h3c;
    u16 pad3e;
    u32 x40;
} S;

extern S data_021593c0;
extern u8 data_021593c8[];
extern void func_02070b48(void *);

void func_020a3600(void)
{
    S *s = &data_021593c0;
    s16 i;

    s->h4 = 0;
    s->x34 = 0;
    s->x38 = 0;
    func_02070b48(data_021593c8);
    s->a = 0;
    s->h3c = 0;
    s->x40 = 0;
    for (i = 0; i < 5; i++) {
        s->c[i] = 40;
        s->d[i] = 0;
    }
}
