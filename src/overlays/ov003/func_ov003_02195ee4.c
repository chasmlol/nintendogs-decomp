#include "ctx.h"

extern u32 data_0215942c;

typedef struct {
    u32 w[3];
} T12;

extern u8 *func_020364cc(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, u32 v);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02195ee4(u8 *param_1)
{
    u8 *iVar3;
    s32 bVar2;
    u8 *V;
    iVar3 = func_020364cc(param_1);
    if (iVar3 != 0) {
        *(T12 *)(param_1 + 948) = *(T12 *)(iVar3 + 188);
    }
    if (func_020289d0(param_1, 4, 1) != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 252) <= 100) {
        return;
    }
    if (func_0203592c(param_1, iVar3) != 0) {
        return;
    }
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
    if (iVar3 == 0) {
        goto LOW;
    }
    if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
        bVar2 = 1;
    } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
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
    if (func_02026c40(param_1, iVar3) != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
DONE:
    if (!bVar2) {
        func_ov003_0219a368(param_1);
    }
}
