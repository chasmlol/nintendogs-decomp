#include "ctx.h"

extern s16 data_02126868[];
extern void func_020663f4(s32 *a, s32 b, s32 c);
extern void func_02066410(s32 *a, s32 b, s32 c);
extern void func_0206642c(s32 *a, s32 b, s32 c);
extern void func_02066444(s32 *a, s32 *b, u32 *c);

void func_020857d0(u16 *param_1, s32 param_2)
{
    s32 aiStack_30[10];
    s32 i;

    switch (param_1[1]) {
    case 0:
        i = (s32)(u32)param_1[0] >> 4;
        func_020663f4(aiStack_30, data_02126868[i * 2], data_02126868[i * 2 + 1]);
        break;
    case 1:
        i = (s32)(u32)param_1[0] >> 4;
        func_02066410(aiStack_30, data_02126868[i * 2], data_02126868[i * 2 + 1]);
        break;
    case 2:
        i = (s32)(u32)param_1[0] >> 4;
        func_0206642c(aiStack_30, data_02126868[i * 2], data_02126868[i * 2 + 1]);
        break;
    }
    func_02066444((s32 *)(param_2 + 0x14), aiStack_30, (u32 *)(param_2 + 0x14));
}
