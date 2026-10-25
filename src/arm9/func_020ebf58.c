#include "ctx.h"
#pragma opt_lifetimes off

extern u8 data_0215be38[];
extern u32 data_02132f94[];
extern s32 func_020038b8(u8 *p, int n);
extern void func_0208efac(u8 *p);
extern u32 func_02003500(u8 *p, int n);
extern u32 func_02003860(u32 a, int b, int c);
extern void func_0207dc3c(u32 a, u32 b);
extern void func_02088364(u8 *p);

void func_020ebf58(u8 *param_1)
{
    s32 iVar3;
    u32 uVar4;
    s32 i;
    s32 o54;
    s32 o12;
    s32 a;
    s32 k;
    s32 o;
    s32 b;
    u8 *pp;
    s32 o84;
    s32 j;

    iVar3 = func_020038b8(param_1, 0x1b8);
    *(s32 *)data_0215be38 = iVar3;
    func_0208efac((u8 *)(iVar3 + 4));
    uVar4 = func_02003500(param_1, 0xa000);
    i = 0;
    o54 = 0;
    o12 = 0;
    *(u32 *)(*(u8 **)data_0215be38 + 0x28) = uVar4;
    for (; i < 3; i++) {
        uVar4 = func_02003500(*(u8 **)(*(u8 **)data_0215be38 + 0x28), 0x2800);
        *(u32 *)(*(u8 **)data_0215be38 + o54 + 0x80) = uVar4;
        uVar4 = func_02003860(*(u32 *)(*(u8 **)data_0215be38 + o54 + 0x80), 0x27c0, 0x10);
        *(u32 *)(*(u8 **)data_0215be38 + o54 + 0x74) = uVar4;
        uVar4 = func_02003500(*(u8 **)(*(u8 **)data_0215be38 + 0x28), 0x800);
        *(u32 *)(*(u8 **)data_0215be38 + o12 + 0x158) = uVar4;
        func_0207dc3c(*(u32 *)(*(u8 **)data_0215be38 + o12 + 0x158), data_02132f94[i]);
        o54 += 0x54;
        o12 += 0xc;
    }
    j = 0;
    o84 = j;
    *(u32 *)(*(u8 **)data_0215be38 + 0x2c) = j;
    for (; j < 3; j++) {
        pp = *(u8 **)data_0215be38 + 0x30 + o84;
        func_02088364(pp);
        *(u32 *)(pp + 0x4c) = 0;
        *(u32 *)(pp + 0x48) = 0;
        o84 += 0x54;
    }
    a = 0;
    o = a;
    for (; a < 3; a++) {
        pp = *(u8 **)data_0215be38 + 300;
        *(u32 *)(pp + o) = 0;
        *(u32 *)(pp + o + 4) = 0;
        *(u32 *)(pp + o + 8) = 0;
        o += 12;
    }
    b = 0;
    o = b;
    for (; b < 3; b++) {
        pp = *(u8 **)data_0215be38 + 336;
        *(u32 *)(pp + o) = 0;
        *(u32 *)(pp + o + 4) = 0;
        o += 12;
    }
    *(s16 *)(*(u8 **)data_0215be38 + 256 + 116) = -1;
    for (k = 0; k < 3; k++) {
        *(u32 *)(*(u8 **)data_0215be38 + 0x178 + (u32)k * 4) = 0;
    }
    *(u32 *)(*(u8 **)data_0215be38 + 0x1b4) = 0;
    *(s16 *)(*(u8 **)data_0215be38 + 2) = -1;
}
