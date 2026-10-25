#include "ctx.h"

extern u32 data_0213e4dc;
extern void func_0206c258(u32 x, u32 y, u32 z, u32 w);
extern void func_0206c7d4(u32 x, u32 y, u32 z);

void func_0206b8a8(u32 a, u32 b, u32 c)
{
    b = b + 0x05000000;
    if (data_0213e4dc != 0xffffffff && c > 28) {
        func_0206c258(data_0213e4dc, a, b, c);
    } else {
        func_0206c7d4(a, b, c);
    }
}
