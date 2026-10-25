#include "ctx.h"

typedef struct { u16 a; u8 pad[0x16]; u16 b; } Obj;

extern Obj data_02150e30;
extern void func_020699dc(u32 x);

void func_02068c9c(u32 param_1)
{
    u32 *reg;
    u8 *snd;
    u16 old;
    old = data_02150e30.b;
    data_02150e30.a = ~param_1 & (data_02150e30.a | old);
    data_02150e30.b = param_1;
    if (param_1 == 0) {
        goto zero;
    }
    if (param_1 != 0x100) {
        goto done;
    }
    reg = (u32 *)0x04001000;
    *reg = *reg | 0x80000000;
    snd = (u8 *)0x04000249;
    *snd = 131;
    goto done;
zero:
    reg = (u32 *)0x04001000;
    *reg = *reg & 0x7fffffff;
done:
    func_020699dc(data_02150e30.a);
}
