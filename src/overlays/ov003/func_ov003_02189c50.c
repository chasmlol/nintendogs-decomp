#include "ctx.h"

extern u32 data_0214f460;
extern u32 func_020ab02c(u32 a, u32 *b, u8 *c);
extern void func_02067e34(u32 *a, u8 *b, u32 c);
extern void func_ov003_0218ab10(u8 *p, u32 a, u32 b, u8 *c, u32 d, u32 e);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);

void func_ov003_02189c50(u8 *param_1)
{
    u32 aiStack_18[4];
    func_020ab02c(data_0214f460, aiStack_18, param_1 + 0x2c4);
    func_02067e34(aiStack_18, param_1 + 0x2c4, (u32)aiStack_18);
    func_ov003_0218ab10(param_1, 5, 0x57, param_1 + 0x348, 0x14d2, 2);
    if (*(u16 *)(param_1 + 0x11e) > 40) {
        func_0203e8cc(param_1, 0, 0x74);
        return;
    }
    if (*(s16 *)(param_1 + 0xee) == 0x103) {
        func_0203e8cc(param_1, 0, 0x72);
        return;
    }
}
