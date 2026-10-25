#include "ctx.h"

extern s32 func_01ffdb08(s32 a);
extern void func_020be7b8(u8 *p);
extern void func_020be588(u8 *p, u32 a, u32 b, u32 c);
extern void func_020be664(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_020341e4(s32 a);
extern u32 func_020341d8(s32 a);
extern u32 func_020c5ef8(u8 *p);
extern u32 func_020c5fbc(u8 *p);

void func_020c87ec(u8 *param_1, void (*param_2)(u8 *), u32 *param_3)
{
    s32 iVar2;
    u32 uVar3;

    iVar2 = func_01ffdb08(*(s16 *)(param_1 + 0x98));
    func_020be7b8(param_1);
    param_2(param_1);
    if ((*(u32 *)(param_1 + 0x16c) & 7) != 0) {
        func_020be588(param_1, param_3[3], param_3[4], param_3[5]);
        if (*(s32 *)(param_1 + 0xb0) > 0x99a) {
            *(s32 *)(param_1 + 0xb0) = 0x99a;
        }
        if (*(s32 *)(param_1 + 0xb4) > 0x99a) {
            *(s32 *)(param_1 + 0xb4) = 0x99a;
        }
        if (*(s32 *)(param_1 + 0xb8) > 0x99a) {
            *(s32 *)(param_1 + 0xb8) = 0x99a;
        }
        if (*(s32 *)(param_1 + 0xb0) < -0x99a) {
            *(s32 *)(param_1 + 0xb0) = -0x99a;
        }
        if (*(s32 *)(0xb4 + param_1) < -0x99a) {
            *(s32 *)(param_1 + 0xb4) = -0x99a;
        }
        if (*(s32 *)(param_1 + 0xb8) < -0x99a) {
            *(s32 *)(param_1 + 0xb8) = -0x99a;
        }
        return;
    }
    uVar3 = func_020341e4(iVar2);
    if (uVar3 != 0) {
        return;
    }
    uVar3 = func_020341d8(iVar2);
    if (uVar3 == 0) {
        goto f8;
    }
    func_020c5ef8(param_1);
    return;
f8:
    func_020be664(param_1, param_3[0], param_3[1], param_3[2]);
    if (*(s32 *)(param_1 + 0xb0) > 0x99a) {
        *(s32 *)(param_1 + 0xb0) = 0x99a;
    }
    if (*(s32 *)(0xb4 + param_1) > 0x99a) {
        *(s32 *)(param_1 + 0xb4) = 0x99a;
    }
    if (*(s32 *)(param_1 + 0xb8) > 0x99a) {
        *(s32 *)(param_1 + 0xb8) = 0x99a;
    }
    if (*(s32 *)(param_1 + 0xb0) < -0x99a) {
        *(s32 *)(param_1 + 0xb0) = -0x99a;
    }
    if (*(s32 *)(param_1 + 0xb4) < -0x99a) {
        *(s32 *)(0xb4 + param_1) = -0x99a;
    }
    if (*(s32 *)(param_1 + 0xb8) < -0x99a) {
        *(s32 *)(param_1 + 0xb8) = -0x99a;
    }
    func_020c5fbc(param_1);
}
