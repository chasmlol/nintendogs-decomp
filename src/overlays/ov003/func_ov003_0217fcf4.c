#include "ctx.h"

extern u32 data_02152cd8;
extern void func_02044acc(u32 *p);
extern void func_01ff832c(u32 a, u32 *b, u8 *c, u8 *d);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, u32 v);
extern s32 func_ov003_0217fe80(u8 *p, u32 a, u32 b);
extern u32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_0217fcf4(u8 *param_1)
{
    u32 loc[6];
    s32 iVar1;
    loc[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    loc[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    loc[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    func_02044acc(loc + 3);
    func_01ff832c(0x6000, loc, param_1 + 0x2a0, param_1 + 0x278);
    func_01ff832c(0x3000, loc + 3, param_1 + 0x278, param_1 + 0x278);
    func_02039448(param_1);
    func_02037450(param_1, 0x200);
    iVar1 = func_ov003_0217fe80(param_1, 8, 0);
    if (iVar1 != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 0x20e);
    }
}
