#include "ctx.h"

typedef struct { s32 w[3]; } T3;

extern u16 *data_0215942c;

extern s32 func_02022e14(u8 *p, s32 a);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_020381f0(u8 *p);
extern void func_02029504(u8 *p);
extern s32 func_0202c87c(u8 *p, s32 a);
extern s32 func_02022bbc(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_0217722c(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    u16 uVar3;

    bVar1 = func_02022e14(param_1, 35);
    *(T3 *)(param_1 + 948) = *(T3 *)(param_1 + 864);
    if (*(s8 *)(param_1 + 0x98) == 7) {
        *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x2a0) + (*(s32 *)(param_1 + 0x18c) - (*(s32 *)(param_1 + 0x1a4) << 1));
        *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
        *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x2a8) + (*(s32 *)(param_1 + 0x194) - (*(s32 *)(param_1 + 0x1ac) << 1));
    } else {
        *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x2a0) - (*(s32 *)(param_1 + 0x18c) + (*(s32 *)(param_1 + 0x1a4) << 1));
        *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
        *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x2a8) - (*(s32 *)(param_1 + 0x194) + (*(s32 *)(param_1 + 0x1ac) << 1));
    }
    func_0203942c(param_1);
    func_02037450(param_1, 0x300);
    func_020381f0(param_1);
    if (*(s16 *)(param_1 + 0xf0) == 1) {
        func_02029504(param_1);
    }
    if (bVar1 == 0) {
        iVar2 = func_0202c87c(param_1, 0);
        if (iVar2 != 0) {
            return;
        }
    }
    if (*(u8 *)(param_1 + 0xa3) == 0 || bVar1 == 0) {
        goto Lzero;
    }
    *(u16 *)(param_1 + 0x122) = *(u16 *)(param_1 + 0x122) + 1;
    iVar2 = func_02022bbc(param_1);
    if ((s32)*(u16 *)(param_1 + 0xfc) <= iVar2) {
        return;
    }
    if (*data_0215942c == 1 || *data_0215942c == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    iVar2 = func_020385e4(param_1);
    switch (iVar2) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
        return;
    default:
        goto End;
    }
Lzero:
    if (bVar1 == 0) {
        goto L318;
    }
    uVar3 = 50;
    switch (*(u8 *)(param_1 + 0xa5)) {
    case 0:
        break;
    case 1:
    case 2:
        uVar3 = 50;
        break;
    case 3:
    case 4:
        uVar3 = 38;
        break;
    case 5:
    case 6:
        uVar3 = 20;
        break;
    case 7:
    case 8:
        uVar3 = 15;
        break;
    }
    if ((s32)*(u16 *)(param_1 + 0xfc) <= (s32)uVar3) {
        return;
    }
    if (*data_0215942c == 1 || *data_0215942c == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    iVar2 = func_020385e4(param_1);
    switch (iVar2) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
        return;
    default:
        goto End;
    }
L318:
    if (*(u16 *)(param_1 + 0xfc) <= 200) {
        return;
    }
    if (*data_0215942c == 1 || *data_0215942c == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    iVar2 = func_020385e4(param_1);
    switch (iVar2) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
        return;
    default:
        goto End;
    }
End:
    return;
}
