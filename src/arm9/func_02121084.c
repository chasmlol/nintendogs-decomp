#include "ctx.h"

s32 func_02121084(void *p)
{
    return *(s32 *)((u8 *)p + 0x5c) - *(s32 *)((u8 *)p + 0x40) * *(s32 *)((u8 *)p + 0x48);
}
