#include "ctx.h"
extern u8 *data_ov005_02167f04;
u32 func_ov005_021648dc(void)
{
    s16 i = 0;
    do {
        u8 *p = data_ov005_02167f04 + i * 2;
        if (*(s16 *)(p + 48) < *(s16 *)(p + 60)) {
            return 0;
        }
        i = i + 1;
    } while (i < 6);
    return 1;
}
