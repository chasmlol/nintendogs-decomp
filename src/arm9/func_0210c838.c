#include "ctx.h"

extern u16 data_02149944[];
extern u16 data_021499c8[];
extern u16 data_021483d8[];
extern u8 data_02149d38[];
extern u8 data_02149bd8[];
extern u8 data_02149c80[];

extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_02112458(s32 a, s32 b, s32 c, s32 d);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_021044cc(void);
extern void func_021044dc(void);
extern void func_021044ec(void);
extern void func_0210450c(void);
extern void func_0210451c(void);
extern void func_0210cd54(u32 *p, void *q);
extern void func_0210cf70(u32 *p, s32 a, s32 b);
extern void func_0210d080(u32 *p);
extern void func_0210d860(u32 *p, s32 a, s32 b);
extern void func_0210ce80(u32 *p);

static inline void SlotAdd(u32 *p)
{
    u32 v;
    u32 *q;
    s32 i;

    v = p[2];
    q = p + 14;
    i = 0;
    do {
        if (*(s16 *)((u8 *)q + 2) == 0) {
            *(s16 *)q = (s16)v;
            *(s16 *)((u8 *)q + 2) = 5;
            break;
        }
        i = i + 1;
        q = q + 1;
    } while (i < 10);
}

void func_0210c838(u32 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar1;
    s32 iVar2;
    u32 *piVar3;

    piVar3 = (u32 *)((u8 *)param_1 + 0x1c5c);
    iVar1 = func_02112320(2, param_2, param_3);
    if (iVar1 < 0) {
        return;
    }
    if (iVar1 > 0x41) {
        return;
    }
    iVar2 = *piVar3;
    if (iVar2 == 3) goto LA;
    if (iVar2 != 4) goto LDEF;
    goto LB;
LA:
    *(u16 *)((u8 *)param_1 + 12) = data_02149944[iVar1];
    goto LD;
LB:
    *(u16 *)((u8 *)param_1 + 12) = data_021499c8[iVar1];
    goto LD;
LDEF:
    *(u16 *)((u8 *)param_1 + 12) = data_02149944[iVar1];
LD:
    param_1[2] = iVar1;

    switch (iVar1) {
    case 9:
        {
        u32 *puVar4 = param_1 + 0x717;
        func_021044ec();
        if (param_1[0x717] == 4) {
            (*puVar4) = 3;
            func_0210cf70(param_1, 9, 1);
            func_0210cf70(param_1, 0x15, 0);
            func_0210d860(param_1, 3, 1);
        }
        }
        break;
    case 21:
        {
        u32 *puVar4 = param_1 + 0x717;
        func_021044ec();
        if (param_1[0x717] == 3) {
            (*puVar4) = 4;
            func_0210cf70(param_1, 0x15, 1);
            func_0210cf70(param_1, 9, 0);
            func_0210d860(param_1, 4, 1);
        }
        }
        break;
    case 32:
        func_021044ec();
        func_0210cf70(param_1, param_1[2], 1);
        SlotAdd(param_1);
        func_0210cd54(param_1, data_02149d38);
        break;
    case 43:
        func_021044ec();
        func_0210cf70(param_1, param_1[2], 1);
        SlotAdd(param_1);
        func_0210cd54(param_1, data_02149bd8);
        break;
    case 54:
        func_021044ec();
        func_0210cf70(param_1, param_1[2], 1);
        SlotAdd(param_1);
        func_0210cd54(param_1, data_02149c80);
        break;
    case 7:
        if (*(u16 *)((u8 *)param_1 + 48) == 0) goto C7z;
        func_0210cf70(param_1, param_1[2], 1);
        SlotAdd(param_1);
        func_021044ec();
        *(u16 *)((u8 *)param_1 + 48) = *(u16 *)((u8 *)param_1 + 48) - 1;
        data_021483d8[*(u16 *)((u8 *)param_1 + 48)] = 0;
        func_0210d080(param_1);
        break;
C7z:
        func_021044dc();
        break;
    case 1:
        func_021044cc();
        break;
    case 0:
        func_0210d860(param_1, 0, 1);
        break;
    case 2:
        func_0210d860(param_1, 5, 1);
        break;
    case 3:
        func_0210d860(param_1, 6, 1);
        break;
    case 4:
        func_0210d860(param_1, 7, 1);
        break;
    case 5:
    case 6:
    case 65:
        break;
    default:
        func_0210ce80(param_1);
        break;
    }

    if (piVar3[2] == 0) goto Lzero;
    if (iVar1 == 5) goto L5;
    if (iVar1 == 6) goto L6;
    return;
L5:
    func_0210450c();
    *param_1 = 2;
    func_02112978(2, 5, 2, 2);
    func_02112978(2, 7, 2, 2);
    param_1[0x21c] = 5;
    return;
L6:
    func_0210451c();
    *param_1 = 3;
    func_02112978(2, 6, 2, 2);
    func_02112978(2, 8, 2, 2);
    param_1[0x21c] = 5;
    return;
Lzero:
    iVar1 = func_02112458(2, 0x41, param_2, param_3);
    if (iVar1 != 0x41) {
        return;
    }
    func_0210451c();
    *param_1 = 3;
    func_02112978(2, 9, 2, 2);
    func_02112978(2, 10, 2, 2);
    param_1[0x21c] = 5;
}
