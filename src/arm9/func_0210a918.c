#include "ctx.h"
extern s32 *data_0215bf9c;
extern u32 data_02147fc0[];
extern void func_0206c7bc(u16 a, u8 *b, u32 c);
void func_0210a918(s32 *param_1)
{
    vu16 loc;
    *(s32 **)&data_0215bf9c = param_1;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[3] = (s32)data_02147fc0[param_1[0]];
    param_1[2] = 0;
    loc = 0;
    func_0206c7bc((u16)loc, (u8 *)(param_1 + 4), 0x188);
}
