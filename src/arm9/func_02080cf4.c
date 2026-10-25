#include "ctx.h"

typedef volatile u64 vu64_;

u64 func_02080cf4(void)
{
    vu32 *p = (vu32 *)0x027ffc80;
    return *(vu64_ *)(p + 26);
}
