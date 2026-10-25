#include "ctx.h"

s32 func_02036578(u8 *p);
void func_02039448(u8 *p);
void func_02027654(s32 a, u8 *b);
void func_02037450(u8 *p, u32 a);
u32 func_02028124(u8 *p);
void func_0202508c(u8 *p, u32 a, u32 b, s32 c);
s32 func_0203567c(u8 *p);
void func_0203e8cc(u8 *p, u32 a, u32 b);
void func_02026bac(u8 *p);
void func_02026c24(u8 *p);
void func_02035be8(u8 *p);
s32 func_020289d0(u8 *p, u32 a, u32 b);
s32 func_0203592c(u8 *p, u32 a);
s32 func_020357c8(u8 *p, u32 a);
void func_020362f8(u8 *p);
void func_0202fcc0(u8 *p);

void func_02045734(u8 *param_1)
{
    s32 iVar2;
    s32 iVar4;
    u32 uVar3;
    u32 uVar5;
    s64 t;
    s32 bVar1;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02039448(param_1);
        func_02027654(iVar2, param_1 + 0x278);
        func_02037450(param_1, 0x302);
    }
    if (*(s16 *)(param_1 + 0x152) == 0x167) goto LAB_5c;
    if (*(s16 *)(param_1 + 0x152) != 0x17e) goto LAB_f4;
    goto LAB_cc;
    goto LAB_f4;
LAB_5c:
    uVar3 = func_02028124(param_1);
    t = (s64)(s32)uVar3 * (s64)(-630) + 0x800;
    uVar5 = (u32)((u64)t >> 12);
    func_0202508c(param_1, 9, 0x11, uVar5);
    iVar4 = func_0203567c(param_1);
    if (iVar4 != 0) {
        func_0203e8cc(param_1, 0, 0x17e);
        func_02026bac(param_1);
    }
    goto LAB_f4;
LAB_cc:
    iVar4 = func_0203567c(param_1);
    if (iVar4 != 0) {
        func_0203e8cc(param_1, 0, 0x17f);
        func_02026c24(param_1);
    }
LAB_f4:
    func_02035be8(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    bVar1 = func_0203592c(param_1, 0);
    if (bVar1 != 0) {
        return;
    }
    iVar4 = func_020357c8(param_1, 0);
    if (iVar4 != 0) {
        return;
    }
    if (iVar2 != 0 && *(s16 *)(iVar2 + 0xea) == 0x2fd) {
        return;
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
