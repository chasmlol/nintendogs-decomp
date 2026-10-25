#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern s32 func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_02022e14(u8 *p, u32 a);
extern s32 func_02022dd0(u8 *p);
extern s16 func_0203bc40(u8 *p);
extern s32 func_0202dc50(u8 *p, u32 a, u32 b, s32 c, u32 d, u32 e);
extern void func_02029504(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(u32 a);
extern void func_020bbc3c(void);
extern void func_0203e908(u8 *p, u32 a);

void func_ov004_02166ca4(u8 *param_1)
{
    s32 bVar1;
    s32 iVar3;
    s32 sVar2;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(0x3fc + param_1) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar1 = func_020f5220();
    if (bVar1 != 0) {
        func_020f3bdc(*(u32 *)(0x484 + param_1));
    }
    *(u32 *)(param_1 + 0x26c) = 0x64000;
    *(u32 *)(param_1 + 0x270) = 0;
    *(u32 *)(param_1 + 0x274) = 0;
    func_0203942c(param_1);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
    func_02037450(param_1, 0x300);
    bVar1 = func_02022e14(param_1, 0x47);
    if (bVar1 != 0) {
        goto check;
    }
    bVar1 = func_02022e14(param_1, 0x48);
    if (bVar1 != 0) {
        goto check;
    }
    iVar3 = *(u16 *)(param_1 + 0x112);
    if (iVar3 != 0) {
        iVar3 = 0;
        goto check2;
    }
    if (*(s16 *)(param_1 + 0xf0) == 0) {
        goto callp;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0x6f:
        iVar3 = 0;
        goto check2;
    default:
        goto callp;
    }
callp:
    if (func_02022dd0(param_1) == 0) {
        goto elsep;
    }
    sVar2 = func_0203bc40(param_1);
    iVar3 = func_0202dc50(param_1, 0, 0, sVar2, *(u8 *)(param_1 + 0xa5), 1);
    goto check2;
elsep:
    func_02029504(param_1);
    iVar3 = 0;
check2:
    if (iVar3 != 0) {
        return;
    }
check:
    iVar3 = func_0203567c(param_1);
    if (iVar3 != 0) {
        if (func_ov004_0216ea3c() != 0) {
            func_ov004_0216e554(0);
        }
        func_020bbc3c();
        func_0203e908(param_1, 0x4ca);
    }
}
