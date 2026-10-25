#include "ctx.h"
extern void func_0206c7d4(u32 a, u32 b, u32 c);

typedef struct { u16 lo:3; u16 rest:13; } BF16;
typedef struct { u8 lo:4; u8 hi:4; } BF8;

void func_02080d08(u8 *param_1)
{
    u8 *g = (u8 *)0x027ffc80;
    param_1[0] = ((BF16 *)(g + 100))->lo;
    param_1[1] = ((BF8 *)(g + 2))->lo;
    param_1[2] = g[3];
    param_1[3] = g[4];
    *(u16 *)(param_1 + 24) = g[0x1a];
    *(u16 *)(param_1 + 78) = g[0x50];
    func_0206c7d4((u32)(g + 6), (u32)(param_1 + 4), 20);
    func_0206c7d4((u32)(g + 28), (u32)(param_1 + 26), 52);
}
