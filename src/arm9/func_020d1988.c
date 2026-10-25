#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_02159444;
extern u32 data_0214efdc;
extern void func_020be1d8(u32 a);
extern u32 func_02062164(void);
extern s16 func_020be190(void);
extern void func_020be1a4(u32 a);
extern u32 func_020be1ec(void);
extern void func_020be17c(u32 a);
extern u32 func_020be1fc(void);
extern s32 func_020bcf08(s32 a);
extern s32 func_020bc990(void);
extern void func_020cf9c8(u8 *p, u32 a, u32 b, u32 c);
extern void func_020cf9bc(u8 *p);

void func_020d1988(u8 *param_1)
{
    s16 sVar1;
    u32 uVar2;
    u32 uVar3;
    s32 iVar4;
    s32 iVar5;
    u8 *r4;

    r4 = param_1 + 96;
    func_020be1d8(2);
    *(s16 *)(r4 + 4) = *(s16 *)(r4 + 4) - 1;
    if (*(s16 *)(r4 + 4) <= 0) {
        uVar2 = func_02062164();
        sVar1 = func_020be190();
        func_020be1a4((u16)(sVar1 + 0x8000));
        if ((s32)uVar2 < 0x2aaa) {
            uVar3 = func_020be1ec();
            func_020be17c(uVar3);
        } else if ((s32)uVar2 < 0x3fff) {
            iVar5 = func_020be1ec();
            iVar4 = func_020be1fc();
            func_020be17c((u32)((iVar5 + iVar4) / 2));
        } else {
            uVar3 = func_020be1fc();
            func_020be17c(uVar3);
        }
        iVar5 = func_020bcf08(*(s16 *)(*(u8 **)&data_02159444 + 0x7c));
        if (iVar5 == 0) {
            goto Lc;
        }
        if (iVar5 != 1) {
            goto Ld2;
        }
    Lc:
        if (func_020bc990() != 0) {
            uVar3 = 3;
            goto Le;
        }
    Ld2:
        uVar3 = 2;
    Le:
        func_020cf9c8(param_1, uVar3, -1, 0);
        func_020cf9bc(param_1);
        *(s16 *)(r4 + 4) = 0x4b0;
    }
    if ((u16)(*(u16 *)&data_0214efdc & 0x2fff) == 0 && *(s32 *)(*(u8 **)&data_02159444 + 0x34) == -1) {
        return;
    }
    {
        u8 *q;
        q = (__typeof__(q))((u32)(param_1) + (96));
        *(u32 *)(q + 8) = 0;
    }
    *(u32 *)(param_1 + 0x60) = 0x4b0;
    if (*(s32 *)(r4 + 8) == 1) {
        iVar5 = func_020bcf08(*(s16 *)(*(u8 **)&data_02159444 + 0x7c));
        if (iVar5 == 0) {
            goto Sc;
        }
        if (iVar5 != 1) {
            goto Sd2;
        }
    Sc:
        if (func_020bc990() != 0) {
            uVar3 = 3;
            goto Se;
        }
    Sd2:
        uVar3 = 2;
    Se:
        func_020cf9c8(param_1, uVar3, -1, 0);
    }
}
