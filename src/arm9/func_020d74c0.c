#include "ctx.h"

extern u32 func_0206fbc8(u32 a);
extern s32 func_020d5270(void);
extern s32 func_0206f998(u16 a, s32 b, void *c, s32 d);
extern s32 func_0206f940(u16 a, s32 b, void *c, s32 d, void *e, s32 f);
extern s32 func_02080f10(s32 a, s32 b, u16 *c);
extern s64 func_02080858(void);
extern void func_020d74c0(u8 *param_1);

extern u8 *data_0215ad40;
extern s32 data_0215ad44[];

void func_020d74c0(u8 *param_1)
{
    u32 uVar2;
    s32 iVar3;
    s32 *puVar4;
    s64 v;

    uVar2 = func_0206fbc8(*(u16 *)(param_1 + 10));
    switch (*(s32 *)(param_1 + 4)) {
    case 3:
        goto C3;
    case 5:
        goto C5;
    case 7:
        goto C7;
    case 8:
        goto C8;
    case 10:
        goto C10;
    case 11:
        goto C11;
    case 16:
        goto C16;
    default:
        goto END;
    }

C10:
    if (*(u8 *)(param_1 + 0x14) == 1) {
        goto C10a;
    }
    if (*(u8 *)(param_1 + 0x14) == 2) {
        *(s32 *)(data_0215ad40 + 0x124) = 2;
    }
    return;

C10a:
    *(s32 *)(data_0215ad40 + 0x124) = 1;
    return;

C8:
    if (*(u32 *)(param_1 + 0x14) < 1000) {
        return;
    }
    *(s32 *)(data_0215ad40 + 4) = 0;
    *(s32 *)(data_0215ad40 + 0x10c) = 1;
    return;

C3:
    if (func_020d5270() != 0) {
        *(s16 *)(data_0215ad40 + 0x12e) = *(s16 *)(param_1 + 0x14);
        *(s16 *)(data_0215ad40 + 0x130) = 0;
    }
    if (*(u16 *)(param_1 + 8) != 0) {
        return;
    }
    iVar3 = func_0206f998(*(u16 *)(data_0215ad40 + 0x10a), 0, data_0215ad40 + 0x80, (s32)func_020d74c0);
    if (iVar3 == 0) {
        *(s32 *)(data_0215ad40 + 4) = 2;
    }
    return;

C7:
    if (*(u16 *)(param_1 + 8) != 0) {
        return;
    }
    if (func_020d5270() == 0) {
        goto C7c;
    }
    if (func_02080f10(*(s32 *)(data_0215ad40 + uVar2 * 4 + 0x80), 0x400058, 0) != 0) {
        goto C7c;
    }
    *(s16 *)(data_0215ad40 + 0x130) = *(s16 *)(data_0215ad40 + 0x130) + 1;
    if (*(s16 *)(data_0215ad40 + 0x130) >= *(s16 *)(data_0215ad40 + 0x12e)) {
        *(s32 *)(data_0215ad40 + 4) = 2;
        return;
    }
    iVar3 = func_0206f998(*(u16 *)(data_0215ad40 + 0x10a), *(s16 *)(data_0215ad40 + 0x130),
                          data_0215ad40 + 0x80, (s32)func_020d74c0);
    if (iVar3 == 0) {
        *(s32 *)(data_0215ad40 + 4) = 2;
    }
    return;

C7c:
    puVar4 = *(s32 **)(data_0215ad40 + uVar2 * 4 + 0x80);
    iVar3 = func_0206f940(*(u16 *)(data_0215ad40 + 0x10a), puVar4[0], data_0215ad40 + 0x40,
                          puVar4[1], data_0215ad40 + 0xc0, (s32)func_020d74c0);
    if (iVar3 == 0) {
        *(s32 *)(data_0215ad40 + 4) = 2;
        return;
    }
    v = func_02080858();
    data_0215ad44[0] = (s32)v;
    data_0215ad44[1] = (s32)(v >> 32);
    return;

C5:
    if (*(u16 *)(param_1 + 8) != 0) {
        return;
    }
    *(s32 *)(data_0215ad40 + 4) = 0;
    *(s32 *)(data_0215ad40 + 0x110) = 1;
    return;

C11:
    if (*(u8 *)(data_0215ad40 + 0x100) == 1) {
        goto C11a;
    }
    if (*(u8 *)(data_0215ad40 + 0x100) == 2) {
        *(s32 *)(data_0215ad40 + 0x128) = 2;
    }
    return;

C11a:
    *(s32 *)(data_0215ad40 + 0x128) = 1;
    return;

C16:
    *(s32 *)(data_0215ad40 + 4) = 0;
    return;

END:
    return;
}
