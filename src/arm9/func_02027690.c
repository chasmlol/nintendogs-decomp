#include "ctx.h"

typedef struct { u32 w[3]; } Triple;

void func_02027690(void *p, Triple *d)
{
    *d = *(Triple *)((u8 *)p + 0x1a4);
}
