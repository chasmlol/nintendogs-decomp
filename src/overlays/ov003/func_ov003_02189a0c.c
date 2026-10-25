#include "ctx.h"

extern u32 data_0214f460;
extern s32 func_020ab02c(u32 a, s32 *b, s32 *c);
extern s32 func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_ov003_0218ab10(u8 *p, u32 a, u32 b, s32 *c, u32 d, u32 e);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);

void func_ov003_02189a0c(u8 *param_1)
{
    s32 aiStack_18[4];

    func_020ab02c(data_0214f460, aiStack_18, (s32 *)(param_1 + 0x2c4));
    func_02067e34(aiStack_18, (s32 *)(param_1 + 0x2c4), aiStack_18);
    func_ov003_0218ab10(param_1, 8, 0x7f, (s32 *)(param_1 + 0x348), 0x14d2, 2);
    if (*(u16 *)(param_1 + 0x11e) > 0x1e) {
        func_0203e8cc(param_1, 0, 400);
        return;
    }
    if (*(s16 *)(param_1 + 0xee) == 0x106) {
        func_0203e8cc(param_1, 0, 0x18e);
        return;
    }
}
