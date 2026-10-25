#include "ctx.h"
extern void func_0207811c(u8 *p, u32 i, u32 v);
void func_02077f24(u8 *p, u32 v)
{
    u32 i;
    for (i = 0; i < p[0x18]; i++) {
        func_0207811c(p, i, v);
    }
}
