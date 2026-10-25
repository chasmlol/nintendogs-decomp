#include "ctx.h"

s32 func_02036578(u8 *p);
void func_02027668(s32 a, s32 *b);
void func_02067e34(s32 *a, s32 *b, s32 *c);
void func_02027654(s32 a, u32 *b);
void func_0203942c(u8 *p);
void func_02037450(u8 *p, s32 a);
void func_02035be8(u8 *p);
s32 func_020289d0(u8 *p, s32 a, s32 b);
s32 func_0203592c(u8 *p, s32 a);
s32 func_020357c8(u8 *p, s32 a);
void func_020362f8(u8 *p);
void func_0202fcc0(u8 *p);

void func_0204a3b8(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 bVar1;
    s32 aiStack_18[3];

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02027668(iVar2, aiStack_18);
        func_02067e34((s32 *)(param_1 + 0x2a0), aiStack_18, (s32 *)(param_1 + 0x26c));
        func_02027654(iVar2, (u32 *)(param_1 + 0x3b4));
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    bVar1 = func_0203592c(param_1, 0);
    if (bVar1 != 0) {
        return;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 != 0) {
        s32 xs = *(s16 *)((u8 *)iVar2 + 0xea);
        if (xs < 0x28f) {
            goto ZERO;
        }
        if (xs <= 656) {
            bVar1 = 1;
            goto TEST;
        }
ZERO:
        bVar1 = 0;
TEST:
        if (bVar1 != 0) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
