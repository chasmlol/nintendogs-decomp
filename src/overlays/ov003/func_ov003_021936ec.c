#pragma avoid_byte strb
#include "ctx.h"

s32 func_020274d8(u8 *p);
void func_0209bdcc(u8 *p, s32 a, s32 b);
void func_0200926c(u8 *p, s32 a, s32 b);
void func_0203e8cc(u8 *p, s32 a, s32 b);
void func_020142b4(u8 *p, s32 a);
void func_0202fd7c(u8 *p);

void func_ov003_021936ec(u8 *param_1)
{
    u16 uVar1;
    s32 iVar2;

    uVar1 = *(u16 *)(param_1 + 252);
    if (uVar1 == 6 || uVar1 == 18 || uVar1 == 30) {
        iVar2 = func_020274d8(param_1);
        func_0209bdcc(param_1 + 0x95c, iVar2, 0);
        return;
    }
    if (uVar1 == 50) {
        func_0200926c(param_1, 106, 3);
        func_0200926c(param_1, 107, 3);
        func_0203e8cc(param_1, 2, 20);
        param_1[151] = 4;
        func_020142b4(param_1, 0);
        return;
    }
    if (uVar1 <= 90) {
        return;
    }
    func_0202fd7c(param_1);
}
