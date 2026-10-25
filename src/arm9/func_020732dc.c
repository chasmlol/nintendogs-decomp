#include "ctx.h"

extern u32 data_02152748;
extern u32 data_021522a0;
extern void func_0207ffc8(u8 *p);
extern void func_0207ff58(u8 *p);
extern void func_02070e28(u8 *p);
extern void func_02087eb0(u8 *p);
extern void func_0207326c(u8 *p);

void func_020732dc(u8 *param_1)
{
    u32 iVar1;
    func_0207ffc8((u8 *)&data_02152748);
    iVar1 = data_021522a0;
    if (iVar1 != 0) {
        func_0207ffc8((u8 *)iVar1 + 0x498);
    }
    if (((s32)(*(u32 *)(param_1 + 0x10c) << 30) >> 31) != 0) {
        func_02070e28(param_1);
    }
    if (((s32)(*(u32 *)(param_1 + 0x10c) << 31) >> 31) != 0) {
        func_02087eb0(param_1 + 0x5c);
    }
    func_0207326c(param_1);
    func_0207ff58((u8 *)&data_02152748);
    iVar1 = data_021522a0;
    if (iVar1 != 0) {
        func_0207ff58((u8 *)iVar1 + 0x498);
    }
}
