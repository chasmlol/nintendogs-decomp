#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern void func_02022b7c(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0203579c(u8 *p, s32 a);
extern s32 func_02027f78(u8 *p, s32 a);
extern s32 func_02009408(u8 *p, s32 a, s32 b, void *c, s32 d);
extern u32 func_02028130(u8 *p);
extern void func_0200926c(u8 *p, s32 a, s32 b);

void func_02013bf8(u8 *param_1)
{
    BOOL bVar1;
    BOOL bA;
    s32 iVar2;
    s32 idx;
    u8 *q;
    u32 uVar3;
    u8 *obj;

    func_02022b7c(param_1);
    bA = (param_1[0xa4] != 0);
    if (bA) {
        iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), param_1[0xa6]);
        bA = (iVar2 != 0);
    }
    q = func_0203541c(param_1);
    if (q != NULL) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(q + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar2 = func_ov003_02198298(param_1);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        iVar2 = 1;
        goto join;
    }
    iVar2 = func_020289d0(param_1, 0, 0);
    if (iVar2 != 0) {
        iVar2 = 1;
        goto join;
    }
    if (bA) {
        goto zero;
    }
    iVar2 = func_0202cd10(param_1, 0);
    if (iVar2 != 0) {
        iVar2 = 1;
        goto join;
    }
zero:
    iVar2 = 0;
join:
    if (iVar2 != 0) {
        bVar1 = TRUE;
    } else {
        iVar2 = func_0203567c(param_1);
        if (iVar2 == 0) {
            bVar1 = FALSE;
        } else {
            func_0203e908(param_1, 0);
            bVar1 = TRUE;
        }
    }
    if (*(s16 *)(param_1 + 0x152) == 0x113 &&
        (iVar2 = func_0203579c(param_1, 0x13), iVar2 != 0) &&
        ((iVar2 = func_02027f78(param_1, 7), (iVar2 >> 9) < 5) &&
         (idx = func_02009408(param_1, 0x3e, 2, (void *)0, 0), idx != -1))) {
        uVar3 = func_02028130(param_1);
        obj = *(u8 **)(param_1 + idx * 4 + 0x8fc);
        *(s32 *)(obj + 0x44) = FX_Mul((s32)uVar3, 0xe66);
    }
    if (!bVar1 && func_0203579c(param_1, 0x45) == 0) {
        return;
    }
    func_0200926c(param_1, 0x3e, 2);
    return;
}
