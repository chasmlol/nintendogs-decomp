/* y2: y1 with the same single read for the final block's second store and return.
   y1: a08 with the second store's base read once and returned (no reload after the store). */
#include "ctx.h"

extern u32 data_021594d0;
extern u16 func_020d5e60(void);
extern s32 func_020d5e70(u32 a, u32 b, u16 *c);
extern void func_020d5e10(u16 a, u32 b);
extern u32 func_020d6ccc(void);
extern u16 func_020d5f68(void);
extern s32 func_020d6024(u32 a, u16 *b);
extern void func_020d48c4(void);

#define GP (*(u8 **)&data_021594d0)

u32 *func_020d4910(u16 *param_1)
{
    u16 sVar1;
    u16 uVar2;
    u16 uVar4;
    u32 uVar11;
    u32 code;
    s32 piVar5;
    s32 v;
    u32 iVar6;
    u16 uVar7;
    u16 local_10;
    u8 *gp;
    u16 asStack_e[3];

    sVar1 = param_1[1];
    if (sVar1 != 0) {
        uVar2 = param_1[0];
        v = *(s32 *)(GP + 0x2c);
        if (v == 1) {
            return (u32 *)v;
        }
        *(s32 *)(GP + 0x2c) = 1;
        *(u16 *)(GP + 0x28) = sVar1;
        gp = GP;
        *(u16 *)(gp + 0x2a) = uVar2;
        return (u32 *)gp;
    }
    uVar2 = param_1[5];
    sVar1 = param_1[4];
    if (*(u16 *)(GP + 0x3e) > uVar2) {
        *(u16 *)(GP + 0x3e) = uVar2;
        *(u16 *)(GP + 0x3c) = sVar1;
    }
    uVar11 = (u16)(sVar1 + 1);
    uVar4 = func_020d5e60();
    piVar5 = uVar4;
    if (uVar4 == 0x8000) {
        code = 3;
        goto L_f4;
    }
    if (uVar4 == 0) {
        code = 21;
        goto L_f4;
    }
    if (((1 << (uVar11 - 1)) & uVar4) != 0) {
        goto found;
    }
    for (;;) {
        uVar11 = (u16)(uVar11 + 1);
        if (uVar11 > 16) {
            code = 22;
            goto L_f4;
        }
        if (((1 << (uVar11 - 1)) & uVar4) != 0) {
            goto found;
        }
    }
found:
    piVar5 = func_020d5e70((u32)func_020d4910, uVar11, &local_10);
    code = local_10;
L_f4:
    if (code != 22) {
        goto L14c;
    }
    func_020d5e10(*(u16 *)(GP + 0x3c), *(u32 *)GP);
    if (*(s32 *)(GP + 0x40) == 1) {
        iVar6 = func_020d6ccc();
        uVar7 = func_020d5f68();
        *(s16 *)(iVar6 + 0x18) = (s16)uVar7;
    }
    return (u32 *)func_020d6024((u32)func_020d48c4, asStack_e);
L14c:
    if (code == 2) {
        return (u32 *)piVar5;
    }
    if (*(s32 *)(GP + 0x2c) == 1) {
        return (u32 *)&data_021594d0;
    }
    *(s32 *)(GP + 0x2c) = 1;
    *(u16 *)(GP + 0x28) = (u16)code;
    gp = GP;
    *(u16 *)(gp + 0x2a) = 30;
    return (u32 *)gp;
}
