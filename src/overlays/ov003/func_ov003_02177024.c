#include "ctx.h"

extern void func_020393d8(u8 *p, s32 a);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_02177024(u8 *param_1)
{
    s32 iVar1;
    func_020393d8(param_1, 0xfdc4);
    iVar1 = func_02035770(param_1, 30);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x3a7);
        return;
    }
}
