#include "ctx.h"

extern u8 *data_02159468;

u32 func_020bd7d4(u32 a);

u32 func_020bc990(void)
{
    s32 i = 0;
    u32 v;
    u8 *obj;

loop:
    if (i < 0) {
        goto zero;
    }
    obj = data_02159468;
    if (*(s16 *)(obj + 0x20) > i) {
        goto entry;
    }
zero:
    v = 0;
    goto check;
entry:
    v = *(u32 *)(obj + i * 4 + 4);
check:
    if (v != 0) {
        if (func_020bd7d4(v) == 0) {
            return 1;
        }
    }
    i = (s16)(i + 1);
    if (i < 7) {
        goto loop;
    }
    return 0;
}
