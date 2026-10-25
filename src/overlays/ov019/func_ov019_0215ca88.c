#include "ctx.h"

typedef struct { u32 a, b, c; } Triple;

void func_ov019_0215ca88(u8 *p, Triple *out)
{
    if (p != 0) {
        *out = *(Triple *)(p + 0x5c);
    }
}
