#include "ctx.h"

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))

extern u32 *data_0215942c;
extern u32 func_02028124(u8 *);
extern void func_02025264(u8 *, s32, s32);
extern u8 *func_020364cc(u8 *);
extern s32 func_020c1f34(u8 *);
extern void func_02039448(u8 *);
extern void func_02037450(u8 *, s32);
extern s32 func_0203567c(u8 *);
extern u8 func_0203592c(u8 *, u8 *);
extern void func_0203e908(u8 *, s32);
extern void func_020362f8(u8 *);
extern u8 func_02026c40(u8 *, u8 *);
extern void func_0202fd7c(u8 *);
extern void func_ov003_0219a368(u8 *);

typedef struct {
    u32 w[3];
} T3;

void func_ov003_02193324(u8 *param_1)
{
    u32 uVar3;
    u8 *iVar4;
    s32 iVar5;
    u8 bVar2;

    uVar3 = func_02028124(param_1);
    func_02025264(param_1, 9, FXM(uVar3, 0x200));
    iVar4 = func_020364cc(param_1);
    if (iVar4 != 0) {
        if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && (iVar5 = func_020c1f34(iVar4), iVar5 == 0)) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (!bVar2) {
            func_02039448(param_1);
            *(T3 *)(param_1 + 0x278) = *(T3 *)(iVar4 + 0xbc);
            func_02037450(param_1, 0x300);
        }
    }
    iVar5 = func_0203567c(param_1);
    if (iVar5 == 0) {
        return;
    }
    bVar2 = func_0203592c(param_1, iVar4);
    if (bVar2) {
        return;
    }
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
    } else {
        if (iVar4 == 0) {
            goto L5d;
        }
        if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && (iVar5 = func_020c1f34(iVar4), iVar5 == 0)) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (!bVar2) {
            goto c26;
        }
L5d:
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar2 = 1;
        goto done;
c26:
        bVar2 = func_02026c40(param_1, iVar4);
        if (bVar2) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
    }
done:
    if (!bVar2) {
        func_ov003_0219a368(param_1);
        return;
    }
}
