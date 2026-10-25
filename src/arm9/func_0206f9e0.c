#include "ctx.h"

extern void func_0206fc6c(void *p);

void func_0206f9e0(u16 param_1, u32 param_2)
{
    struct {
        u32 a;
        u32 b;
        u16 c;
        u16 d;
        u32 pad;
        u32 e;
        u8 rest[136];
    } blk;
    blk.a = 2;
    blk.c = param_1;
    blk.e = param_2;
    func_0206fc6c(&blk);
}
