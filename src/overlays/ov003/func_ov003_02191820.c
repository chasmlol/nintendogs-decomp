#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02159444[];
extern u32 data_02152cd8[];
extern u32 data_0214f460[];
extern s32 func_020364cc(u8 *p);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u32 a, s32 *b, s32 c);
extern void func_0202f9b4(u8 *p);
extern void func_020ab02c(u32 a, s32 *b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_02067df0(s32 *a, s32 *b);
extern void func_02027e64(u8 *p, s32 a, s32 b);
extern void func_02022134(u8 *p, s32 a, s32 b, s32 c, s32 d);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_020bc114(void);
extern void func_02029504(u8 *p);
extern void func_020340f4(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_02044bcc(s32 a);

typedef struct { s32 v[3]; } T12;
typedef struct { u8 pad[0xb6]; u8 f; } S6;


#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(s32)(b) + 0x800) >> 12))

void func_ov003_02191820(u8 *p1)
{
    s32 iv2;
    s32 iv3;
    s32 uv5;
    s32 uv7;
    T12 l34;
    T12 vA;
    s32 i1c[3];
    s32 a0;
    s32 b0;

    iv2 = func_020364cc(p1);
    if (iv2 == 0) {
        goto TAIL;
    }
    if (*(s16 *)(*(u8 **)data_02159444 + 0x88) <= -10) {
        goto LINC;
    }
    iv2 = func_02028130(p1);
    iv3 = func_02028130(p1);
    uv7 = FXM(iv3, iv2);
    uv5 = FXM(0x1004, uv7);
    iv2 = func_020aaf38(*(u32 *)data_0214f460, (s32 *)(p1 + 0x378), uv5);
    if (iv2 != 0) {
        *(s32 *)(p1 + 0x464) = 0;
        goto LJOIN;
    }
LINC:
    *(s32 *)(p1 + 0x464) = *(s32 *)(p1 + 0x464) + 1;
LJOIN:
    func_0202f9b4(p1);
    if (*(s32 *)(p1 + 0x464) == 0) {
        iv2 = *(s32 *)(*(u8 **)data_02159444 + 0x1c);
        l34 = *(T12 *)(iv2 + 0x30);
        vA.v[0] = data_02152cd8[0x4c / 4];
        vA.v[1] = data_02152cd8[0x58 / 4];
        vA.v[2] = data_02152cd8[0x64 / 4];
        func_020ab02c(*(u32 *)data_0214f460, i1c, (s32 *)(p1 + 0x2dc));
        func_02067e34(i1c, (s32 *)(p1 + 0x2dc), i1c);
        func_01ff832c(0x3000, i1c, l34.v, (s32 *)(p1 + 0x3b4));
        *(s32 *)(p1 + 0x3b8) = *(s32 *)(p1 + 0x3b8) + ((i1c[1] >> 5) - 0x1400);
        uv5 = func_02067df0(i1c, vA.v);
        if (uv5 > 0) {
            *(u16 *)(p1 + 0x12e) = 0xf400;
        } else {
            *(u16 *)(p1 + 0x12e) = 0xc00;
        }
    } else {
        iv2 = *(s32 *)(*(u8 **)data_02159444 + 0x1c);
        *(T12 *)(p1 + 0x3b4) = *(T12 *)(iv2 + 0x30);
        *(s32 *)(p1 + 0x3b8) = *(s32 *)(p1 + 0x3b8) - 0x1000;
        *(u16 *)(p1 + 0x12e) = 0;
    }
    if (*(s32 *)(p1 + 0x464) != 0) {
        goto DEC;
    }
    a0 = *(s32 *)(*(u8 **)data_02159444 + 0x98);
    b0 = *(s32 *)(*(u8 **)data_02159444 + 0x94);
    if (a0 <= 0) {
        a0 = -a0;
    }
    if (b0 <= 0) {
        b0 = -b0;
    }
    if (b0 + a0 <= 2) {
        goto DEC;
    }
    *(s32 *)(p1 + 0x48c) = *(s32 *)(p1 + 0x48c) - 2;
    if (*(s32 *)(p1 + 0x48c) < 17) {
        *(s32 *)(p1 + 0x48c) = 17;
    }
    *(s32 *)(p1 + 0x468) = *(s32 *)(p1 + 0x468) + 1;
    goto DJ;
DEC:
    *(s32 *)(p1 + 0x468) = *(s32 *)(p1 + 0x468) - 2;
    if (*(s32 *)(p1 + 0x468) < 0) {
        *(s32 *)(p1 + 0x468) = 0;
    }
DJ:
    if (*(s32 *)(p1 + 0x468) > 40) {
        *(u8 *)(p1 + 151) = (u8)(4);
        *(u8 *)(p1 + 152) = (u8)(9);
        {
            s32 flag;
            if (p1[0xb6] & 0x20) {
                p1[0xb6] &= ~0x20;
                flag = 1;
            } else {
                flag = 0;
            }
            if (flag) {
                func_02027e64(p1, 5, 25);
                func_02022134(p1, (s8)p1[136], 0, -1, 0);
            }
        }
    } else {
        if (*(s32 *)(p1 + 0x464) == 0) {
            func_0203e8cc(p1, 1, 48);
            *(u8 *)(p1 + 151) = (u8)(3);
        } else {
            func_0203e8cc(p1, 1, 0);
            *(u8 *)(p1 + 151) = (u8)(0);
        }
    }
    goto TAIL2;
TAIL:
    ;
TAIL2:
    if (*(s32 *)(p1 + 0x464) <= 2) {
        *(u8 *)(p1 + 185) = (u8)(1);
    } else {
        *(u8 *)(p1 + 185) = (u8)(0);
    }
    iv2 = func_ov003_02197dd8(p1);
    if (iv2 != 0) {
        func_02044bcc((s8)p1[136]);
        return;
    }
    if (func_020bc114() == 0) {
        func_02029504(p1);
        func_020340f4(p1);
        func_0202fd7c(p1);
        func_020362f8(p1);
        func_02044bcc((s8)p1[136]);
    }
}
