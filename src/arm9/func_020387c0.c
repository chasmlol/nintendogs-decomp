#include "ctx.h"

extern u8 data_02136a14[];

/* the first parameter (r0) is reused as the loop counter, so the counter takes r0 */
void func_020387c0(u32 p1, s32 p2)
{
    s32 v = *(s32 *)(*(u32 *)(p1 + 0x9e8) + 12);
    u8 *b;
    s16 cls;
    if (v < 0xccd) {
        cls = 0;
    } else {
        if (v <= 0x119a) {
            cls = 1;
        } else {
            cls = 2;
        }
    }
    b = data_02136a14 + cls * 12;
    p1 = 5;
    do {
        s16 e = *(s16 *)(b + p1 * 2 + 108);
        if (e >= 0 && e <= p2) {
            return;
        }
        p1 = (s16)(p1 - 1);
    } while ((s32)p1 > 0);
}
