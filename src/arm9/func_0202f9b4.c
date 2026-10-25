#include "ctx.h"

extern u8 *data_02159444;
extern void func_02037450(u8 *p, u32 v);

typedef struct { u32 w[3]; } T3;

void func_0202f9b4(u8 *p)
{
    u8 *q;
    *(T3 *)(p + 0x26c) = *(T3 *)(p + 0x2a0);
    q = *(u8 **)(data_02159444 + 0x1c);
    *(T3 *)(p + 0x278) = *(T3 *)(q + 48);
    func_02037450(p, 768);
}
