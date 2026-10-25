#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02159444[];
extern u8 data_0214f464[];
extern s8 data_0213c42d[];
extern u8 *func_0203541c(u8 *p);
extern void func_02029400(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02014b24(u8 *p, s32 a);
extern void func_ov003_021860ac(u8 *p);
extern void func_020398a8(u8 *p);
extern void func_020398e4(u8 *p);
extern void func_02039920(u8 *p);
extern void func_020399ac(u8 *p);
extern void func_020399ec(u8 *p);
extern void func_02029180(u8 *p, s32 a, s32 b);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0202d108(u8 *p, s32 a, u8 *b, s32 c);
extern void func_ov003_02198420(u8 *p, u8 *a, s32 b);
extern void func_ov003_0218c3e0(u8 *p, s32 a, s32 b);

typedef struct { u32 w0; u32 w1; u32 w2; } Trip3;

void func_ov003_0217dd00(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *r4;
    s32 r8;
    u32 v;
    u32 *pc;
    u8 *B;
    u16 t;

    r4 = func_0203541c(param_1);
    switch (*(s16 *)(param_1 + 0xf0)) {
    case -3:
    case -2:
    case -1:
        goto c4c;
    case 0:
        goto c54;
    case 1:
    case 2:
    case 3:
        goto ca4;
    case 4:
        goto c104;
    default:
        goto c10c;
    }
c4c:
    func_02029400(param_1);
c54:
    if (*(s8 *)(param_1 + 0x8b) == 2) {
        goto c9c;
    }
    switch (*(s8 *)(param_1 + 0x8d)) {
    case 0:
    case 1:
    case 5:
    case 6:
        goto c94;
    default:
        goto c8c;
    }
c8c:
    r8 = 300;
    goto cend;
c94:
    r8 = 200;
    goto cend;
c9c:
    r8 = 50;
    goto cend;
ca4:
    if (*(s8 *)(param_1 + 0x8b) == 2) {
        goto cfc;
    }
    switch (*(s8 *)(param_1 + 0x8d)) {
    case 0:
    case 3:
        goto cec;
    case 4:
    case 7:
    case 8:
        goto cf4;
    default:
        goto ce4;
    }
ce4:
    r8 = 20;
    goto cend;
cec:
    r8 = 40;
    goto cend;
cf4:
    r8 = 60;
    goto cend;
cfc:
    r8 = 40;
    goto cend;
c104:
    r8 = 780;
    goto cend;
c10c:
    r8 = 80;
cend:
    B = *(u8 **)(*(u8 **)data_02159444 + 0x1c);
    *(Trip3 *)(param_1 + 948) = *(Trip3 *)(B + 48);

    func_02014b24(param_1, param_2);
    func_ov003_021860ac(param_1);

    switch (*(s8 *)(param_1 + 0x8b)) {
    case 0:
        goto l0;
    case 1:
        goto l1;
    case 2:
        goto l2;
    case 3:
        goto l3;
    case 4:
        goto l4;
    case 5:
        goto l5;
    default:
        goto done;
    }
l5:
    func_020398a8(param_1);
    goto done;
l4:
    func_020398e4(param_1);
    goto done;
l3:
    func_02039920(param_1);
    goto done;
l2:
    param_1[151] = 1;
    func_0203e8cc(param_1, 2, 16);
    goto done;
l1:
    func_020399ac(param_1);
    goto done;
l0:
    func_020399ec(param_1);
done:

    if (r4 != 0) {
        func_0203e8cc(param_1, 2, 1);
    }
    if (*(s16 *)(param_1 + 0xf0) == 4) {
        u16 k = *(u16 *)*(u8 **)(param_1 + 0x9e8);
        func_0203e8cc(param_1, 3, (s16)(data_0213c42d[100 * k] + 8));
        func_0203e8cc(param_1, 2, 0);
    }
    if (*(u16 *)(param_1 + 0x104) != 0) {
        if (*(s16 *)(param_1 + 0xf0) == 1 || func_02022e14(param_1, 1) != 0) {
            pc = *(u32 **)data_0214f464;
            v = *pc * 0x10dcd + 1;
            *pc = v;
            switch ((u16)((((u16)v) * 3u) >> 16)) {
            case 0:
                func_02029180(param_1, 62, 2);
                break;
            case 1:
                func_02029180(param_1, 63, 2);
                break;
            case 2:
                func_02029180(param_1, 64, 2);
                break;
            }
        }
    }
    if (func_0200f8e0(param_1) != 0) {
        return;
    }
    t = *(u16 *)(param_1 + 252);
    if (t < r8) {
        if (t <= r8 - 20) {
            return;
        }
        pc = *(u32 **)data_0214f464;
        v = *pc * 0x10dcd + 1;
        *pc = v;
        if ((u16)((((u16)v) * 20u) >> 16) != 0) {
            return;
        }
    }
    if (func_0202d108(param_1, (s16)param_2, r4, 1) != 0) {
        return;
    }
    if (r4 != 0) {
        func_ov003_02198420(param_1, r4, param_2);
    } else {
        func_ov003_0218c3e0(param_1, param_2, param_3);
    }
}
