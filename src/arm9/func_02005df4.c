#include "ctx.h"

extern void func_0206833c(u32 a, s32 b);

void func_02005df4(u8 *p, s32 i)
{
    if (i > 191) {
        i = 191;
    }
    func_0206833c(0x0400006c, *(s8 *)(p + i + 26));
}
