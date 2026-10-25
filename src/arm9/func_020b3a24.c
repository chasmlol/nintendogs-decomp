#include "ctx.h"

extern u32 data_0215942c;
extern u32 data_02159444;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027f78(s32 a, s32 b);

void func_020b3a24(u8 *p)
{
    s32 r;

    if (*(s32 *)(p + 0x20) < 0) {
        r = func_01ffdb08(*(s16 *)(*(u8 **)&data_0215942c + 14));
        r = func_02027f78(r, 7);
        *(s32 *)(p + 0x20) = r;
    }
    if (*(s16 *)(*(u8 **)&data_02159444 + 256) == 7) {
        r = func_01ffdb08(*(s16 *)(*(u8 **)&data_0215942c + 14));
        if (*(u8 **)(p + 0x1c) != 0) {
            r = func_02027f78(r, 7);
            if ((s16)(r - *(s32 *)(p + 0x20)) > 0) {
                *(s16 *)(*(u8 **)(p + 0x1c) + 4) = (s16)r;
            } else {
                *(s16 *)(*(u8 **)(p + 0x1c) + 4) = 0;
            }
        }
        *(s16 *)(p + 4) = 1;
        *(s32 *)(p + 0xc) = 1;
        *(s32 *)(p + 0x18) = 9;
    }
}
