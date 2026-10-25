#include "ctx.h"

void func_020393d8(u8 *p, u32 n);
void func_02022b7c(u8 *p);
s32 func_0202c87c(u8 *p, u32 n);
void func_0203e908(u8 *p, s16 v);

void func_ov003_021858f4(u8 *param_1)
{
    s32 iVar1;

    func_020393d8(param_1, 0x178);
    func_02022b7c(param_1);
    iVar1 = func_0202c87c(param_1, 1);
    if (iVar1 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        func_0203e908(param_1, (s16)0x230);
        return;
    }
}
