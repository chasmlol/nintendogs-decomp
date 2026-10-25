#include "ctx.h"

extern u32 data_0214f460;
extern void func_020ab02c(u32 a, u32 *b, u8 *c);
extern void func_02067e34(u32 *a, u8 *b, u32 *c);
extern void func_ov003_0218ab10(u8 *p, s32 a, s32 b, u8 *c, s32 d, s32 e);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);

void func_ov003_02189ad0(u8 *param_1)
{
    u32 aiStack_18[4];

    func_020ab02c(data_0214f460, aiStack_18, param_1 + 0x2c4);
    func_02067e34(aiStack_18, param_1 + 0x2c4, aiStack_18);
    func_ov003_0218ab10(param_1, 7, 0x7f, param_1 + 0x348, 0x14d2, 2);
    if (*(u16 *)(param_1 + 0x11e) > 0x1e) {
        func_0203e8cc(param_1, 0, 0x18f);
        return;
    }
    if (*(s16 *)(param_1 + 0xee) == 0x105) {
        func_0203e8cc(param_1, 0, 0x18d);
    }
}
