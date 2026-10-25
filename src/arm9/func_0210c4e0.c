#include "ctx.h"

extern u8 data_02149a4c[];
extern u8 data_02149ad0[];
extern u8 data_02149b54[];
extern u16 data_021483d8[];
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_02112458(s32 a, s32 b, s32 c, s32 d);
extern void func_0210ce80(u32 *p);
extern void func_0210cf70(u32 *p, s32 a, s32 b);
extern void func_021044dc(void);
extern void func_021044ec(void);
extern void func_021044cc(void);
extern void func_0210d080(u32 *p);
extern void func_0210d860(u32 *p, s32 a, s32 b);
extern void func_0210450c(void);
extern void func_0210451c(void);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_0210cd54(u32 *p, void *q);

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

void func_0210c4e0(u32 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar1;
    s32 iVar2;
    s32 *piVar4;

    piVar4 = (s32 *)((u8 *)param_1 + 0x1c5c);
    iVar1 = func_02112320(2, param_2, param_3);
    if (iVar1 < 0) {
        return;
    }
    if (iVar1 > 0x41) {
        return;
    }
    iVar2 = *piVar4;
    switch (iVar2) {
    case 5:
        *(u16 *)((u8 *)param_1 + 12) = *(u16 *)(data_02149a4c + iVar1 * 2);
        break;
    case 6:
        *(u16 *)((u8 *)param_1 + 12) = *(u16 *)(data_02149ad0 + iVar1 * 2);
        break;
    case 7:
        *(u16 *)((u8 *)param_1 + 12) = *(u16 *)(data_02149b54 + iVar1 * 2);
        break;
    default:
        *(u16 *)((u8 *)param_1 + 12) = *(u16 *)(data_02149a4c + iVar1 * 2);
        break;
    }
    param_1[2] = iVar1;

    if (iVar1 == 13) goto TAIL;
    iVar2 = *piVar4;
    if (iVar2 != 5) goto Lcc;
    if (iVar1 < 55) goto Lcc;
    if (iVar1 <= 57) goto TAIL;
Lcc:
    if (iVar1 < 1) goto Le8;
    if (iVar1 > 57) goto Le8;
    func_0210ce80(param_1);
    goto TAIL;
Le8:
    if (iVar1 > 0) goto Lfc;
    if (iVar1 != 0) goto TAIL;
    goto L120;
Lfc:
    switch (iVar1) {
    case 0x3c:
        goto C3c;
    case 0x3d:
        goto C3d;
    case 0x3e:
        goto C3e;
    case 0x3f:
        goto C3f;
    case 0x40:
        goto C40;
    default:
        goto TAIL;
    }
L120:
    if (*(u16 *)((u8 *)param_1 + 48) == 0) goto Z0;
    func_0210cf70(param_1, param_1[2], 1);
    SlotAdd(param_1);
    func_021044ec();
    *(u16 *)((u8 *)param_1 + 48) = *(u16 *)((u8 *)param_1 + 48) - 1;
    data_021483d8[*(u16 *)((u8 *)param_1 + 48)] = 0;
    func_0210d080(param_1);
    goto TAIL;
Z0:
    func_021044dc();
    goto TAIL;
C3d:
    func_0210d860(param_1, 3, 1);
    goto TAIL;
C3c:
    func_0210d860(param_1, 0, 1);
    goto TAIL;
C3e:
    if (iVar2 == 5) {
        func_021044cc();
    } else {
        func_0210d860(param_1, 5, 1);
    }
    goto TAIL;
C3f:
    if (iVar2 == 6) {
        func_021044cc();
    } else {
        func_0210d860(param_1, 6, 1);
    }
    goto TAIL;
C40:
    if (iVar2 == 7) {
        func_021044cc();
    } else {
        func_0210d860(param_1, 7, 1);
    }
TAIL:
    if (piVar4[2] == 0) goto Lzero;
    if (iVar1 == 0x3a) goto L5;
    if (iVar1 == 0x3b) goto L6;
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
