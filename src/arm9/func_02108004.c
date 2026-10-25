#include "ctx.h"
typedef struct { u32 a; s16 b; } S1;
typedef struct { u32 a; u32 b; } S2;
extern u8 *data_0215be48;
void func_02108004(void)
{
    u8 *p = data_0215be48;
    S1 *s1;
    S2 *s2;
    if (*(s32 *)(p + 0xb8) != 13) {
        return;
    }
    s1 = (S1 *)(p + 0x1d48);
    s1->a = 1;
    s1->b = -1;
    p = data_0215be48;
    s2 = (S2 *)(p + 0x5028);
    if (s2->a != 0) {
        s2->b = 1;
    }
}
