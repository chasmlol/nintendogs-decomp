#include "ctx.h"

typedef struct { u32 w[3]; } Triple;

void func_020275dc(void *p, Triple *d)
{
    *d = *(Triple *)((u8 *)p + 0x354);
}
