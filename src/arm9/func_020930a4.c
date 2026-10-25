#include "ctx.h"
extern u8 *data_02159034;
s32 func_020930a4(void)
{
    s32 cnt = 0;
    s16 i = 0;
    u8 *p = data_02159034;
    u8 *e;
    do {
        e = *(u8 **)(p + 0x1000 + 0x4f4);
        p = p + 24;
        if (*(u16 *)(e + 4) != 0xffff) {
            cnt = (s16)(cnt + 1);
        }
        i = i + 1;
    } while (i < 5);
    return cnt;
}
