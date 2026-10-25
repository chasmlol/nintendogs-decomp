#include "ctx.h"
extern s32 func_02067898(s32 a, s32 b);
void func_ov021_0215c31c(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4)
{
    s32 i;
    s32 cnt;
    s32 *q;
    s32 dx;
    s32 dy;
    s64 a2;
    s64 b2;
    cnt = 0;
    param_1[0] = 0;
    i = 0;
    param_1[1] = 0;
    if (param_4 > 0) {
        do {
            if (i > 0) {
                q = (s32 *)((u8 *)param_3 + (u32)i * 8);
                dx = q[-2] - *(s32 *)((u32)param_3 + ((u32)i << 3));
                dy = q[-1] - q[1];
            } else {
                dx = param_2[0] - param_3[0];
                dy = param_2[1] - param_3[1];
            }
            a2 = (s64)dx * dx + 0x800;
            b2 = (s64)dy * dy + 0x800;
            if ((s32)((u32)(a2 >> 12) + (u32)(b2 >> 12)) > 0x1000) {
                cnt++;
                param_1[0] += dx;
                param_1[1] += dy;
            }
            i++;
        } while (i < param_4);
    }
    if (cnt > 1) {
        param_1[0] = func_02067898(param_1[0], cnt << 12);
        param_1[1] = func_02067898(param_1[1], cnt << 12);
    }
}
