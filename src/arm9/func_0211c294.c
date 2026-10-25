#include "ctx.h"

u8 *func_02094608(s16 v);

s32 func_0211c294(u8 *param_1, s32 param_2)
{
    s32 i;
    s32 found;
    s32 x;
    s32 m;
    s16 *ps;

    switch (param_2) {
    case 2:
        x = *(s32 *)(param_1 + 0x1c);
        break;
    case 1:
        m = *(s32 *)(param_1 + 0x18) * *(s16 *)(param_1 + 0x16);
        x = m / 100;
        break;
    case 3:
        found = 0;
        i = 0;
        do {
            ps = (s16 *)func_02094608((s16)i);
            if (*(s16 *)param_1 == *(s8 *)((u8 *)ps + 2) && *(s16 *)(param_1 + 2) == ps[0] &&
                *(s8 *)((u8 *)ps + 3) > 1) {
                found = 1;
                break;
            }
            i = i + 1;
        } while (i < 200);
        if (found != 0) {
            x = 0;
        } else {
            x = *(s32 *)(param_1 + 0x18);
        }
        break;
    default:
        x = *(s32 *)(param_1 + 0x18);
        break;
    }
    return (x / 10) * 10;
}
