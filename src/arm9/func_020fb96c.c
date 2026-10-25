#include "ctx.h"

extern u8 data_021332d0[];
extern u8 data_02133308[];
extern u8 data_021332dc[];
extern void func_02112a50(s32 a, s32 b, s32 c, s32 d);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_020fba9c(s32 *p);

void func_020fb96c(s32 *param_1)
{
    s32 i;

    for (i = 0; i < 3; i++) {
        func_02112a50(2, data_021332d0[i],
                      (s32)(*(s32 *)((u8 *)param_1 + ((u32)i << 3) + 0x10) << 4) >> 16,
                      (s32)(*(s32 *)((u8 *)param_1 + ((u32)i << 3) + 0x14) << 4) >> 16);
    }
    for (i = 0; i < 20; i++) {
        if ((u32)(param_1[0] - 6) <= 2) {
            func_02112798(2, data_02133308[i], 1);
        } else {
            func_02112798(2, data_02133308[i], 0);
        }
    }
    for (i = 0; i < 4; i++) {
        if (((u32)(param_1[0] - 6) <= 2) && (*(s32 *)((u8 *)param_1 + ((u32)i << 2) + 0x8c) != 0)) {
            func_02112798(2, data_021332dc[i], 1);
        } else {
            func_02112798(2, data_021332dc[i], 0);
        }
    }
    func_020fba9c(param_1);
}
