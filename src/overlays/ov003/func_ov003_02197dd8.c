#include "ctx.h"

extern u32 data_0215942c;

extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, u32 v);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020365c8(u8 *p, u8 *q);
extern void func_ov003_0219a368(u8 *p);
extern s32 func_01ffdb08(s32 a);
extern void func_020362ec(u8 *p, s32 a);
extern void func_0204eb80(u8 *p);

u32 func_ov003_02197dd8(u8 *param_1)
{
    u8 *iVar4;
    s32 bVar2;
    u8 *V;
    s32 sVar1;

    iVar4 = func_020364cc(param_1);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    V = *(u8 **)&data_0215942c;
    if (*(u16 *)V == 0x8003) {
        bVar2 = 0;
        goto DONE;
    }
    if (*(s16 *)(param_1 + 250) == 0x23) {
        bVar2 = 0;
        goto DONE;
    }
    if (iVar4 == 0) {
        goto LOW;
    }
    if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
        bVar2 = 1;
    } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && func_020c1f34(iVar4) == 0) {
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
    if (!bVar2) {
        goto P26;
    }
LOW:
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar2 = 1;
    goto DONE;
P26:
    if (func_02026c40(param_1, iVar4) != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
DONE:
    if (bVar2) {
        return 1;
    }
    if (func_ov003_02198298(param_1) != 0) {
        return 1;
    }
    if (iVar4 != 0 && func_020365c8(param_1, iVar4) != 2) {
        func_ov003_0219a368(param_1);
        return 1;
    }
    sVar1 = *(s16 *)(iVar4 + 0x98);
    if ((s32)*(s8 *)(param_1 + 0x88) == (s32)sVar1) {
        goto RET0;
    }
    if (func_01ffdb08(sVar1) == 0) {
        goto CALLX;
    }
    func_020362ec(param_1, (s16)sVar1);
    func_0204eb80(param_1);
    return 1;
CALLX:
    func_ov003_0219a368(param_1);
    return 1;
RET0:
    return 0;
}
