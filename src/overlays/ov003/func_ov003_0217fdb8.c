#include "ctx.h"
extern u8 data_02152cd8[];
extern void func_02044acc(u32 *a);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_ov003_0217fe80(u8 *p, u32 a, u32 b);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
void func_ov003_0217fdb8(u8 *param_1)
{
    s32 iVar1;
    u32 local_18[3];
    u32 aiStack_14[3];
    local_18[0] = *(u32 *)(data_02152cd8 + 0x4c);
    local_18[1] = *(u32 *)(data_02152cd8 + 0x58);
    local_18[2] = *(u32 *)(data_02152cd8 + 0x64);
    func_02044acc(aiStack_14);
    func_01ff832c(-0x6000, local_18, (u32 *)(param_1 + 0x2a0), (u32 *)(param_1 + 0x278));
    func_01ff832c(0x3000, aiStack_14, (u32 *)(param_1 + 0x278), (u32 *)(param_1 + 0x278));
    func_02039448(param_1);
    func_02037450(param_1, 0x200);
    iVar1 = func_ov003_0217fe80(param_1, 7, 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x20d);
        return;
    }
}
