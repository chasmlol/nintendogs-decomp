#include "ctx.h"
extern u8 *data_0215be48;
extern void func_020fc594(u32 a, u32 b, u32 c);
void func_020ff914(u8 *p)
{
    u32 flag = 0;
    s32 st = *(s32 *)(data_0215be48 + 0xac);
    if (st == 2) {
        s32 v = *(s32 *)(p + 0x94c);
        if (v == 4) {
            goto set;
        }
        if (v == 5) {
            goto set;
        }
        if (v == 6) {
            goto set;
        }
        goto call;
set:
        flag = 1;
call:
        func_020fc594(2, 8, flag);
    }
}
