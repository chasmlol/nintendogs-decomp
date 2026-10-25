#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern u8 data_027c0bbc[];

typedef struct { u32 w[3]; } T3;
typedef struct { u32 w[12]; } T12;
typedef struct { s32 x, y, z; } VecFx32;

extern s32 func_020bc3c4(void);
extern void func_0208ec84(s32 a, u8 *b, u32 *c);
extern void func_0209c83c(u8 *a, u32 *b);
extern void func_02044ca0(s32 a);
extern void func_02067e34(u8 *a, u8 *b, u32 *c);
extern s32 func_020e9ca0(u8 *a, u32 *b, s32 c, s32 d, s32 e);
extern void func_0208f7e4(u8 *p, u32 v);
extern void func_01ffe474(u8 *p);

static inline void VEC_Set(VecFx32 *a, s32 x, s32 y, s32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

void func_020bd8b0(u8 *p)
{
    u8 *q;
    s16 s;
    s16 i;
    u16 one;
    u32 *pf;
    u32 x;
    u32 stk4[3];
    u32 stk16[3];
    u16 bv;
    int r;
    void (*fn)(u8 *);

    if (*(s16 *)(p + 0x94) == -1) {
        return;
    }
    *(s16 *)(p + 0x92) = *(s16 *)(0x90 + p);
    s = *(s16 *)(p + 0x8a);
    if (*(s16 *)(p + 0x90) == s) goto L_fc;
    *(s16 *)(p + 0x90) = s;
    *(s16 *)(p + 0x98) = *(s16 *)(p + 0x8c);
    *(s16 *)(p + 0x9a) = *(s16 *)(p + 0x8e);
    q = *(u8 **)(p + 0x18c);
    if (q == 0) goto L_c4;
    if (*(s16 *)(p + 0x90) != 0) goto L_8c;
    *(u16 *)(q + 0x20) = *(u16 *)(q + 0x20) | 1;
    q = *(u8 **)(p + 0x18c);
    *(q + 1) = *(u8 *)(q + 1) | 1;
    goto L_c4;
L_8c:
    *(u16 *)(q + 0x20) = *(u16 *)(q + 0x20) & ~1;
    q = *(u8 **)(p + 0x18c);
    *(1 + q) = *(u8 *)(q + 1) & ~1;
    {
        s32 v = *(s32 *)(p + 0xac);
        VEC_Set((VecFx32 *)(*(u8 **)(p + 0x18c) + 0x24), v, v, v);
    }
L_c4:
    s = *(s16 *)(p + 0x90);
    if (s == 0) goto L_e0;
    if (s == 2) goto L_e0;
    if (s != 3) goto L_e8;
L_e0:
    *(u16 *)(p + 0xa0) = 0;
L_e8:
    fn = *(void (**)(u8 *))(0x1f4 + p);
    if (fn != 0) {
        fn(p);
    }
L_fc:
    fn = *(void (**)(u8 *))(p + 0x1f8);
    if (fn != 0) {
        fn(p);
    }
    s = *(s16 *)(0x90 + p);
    if (s == 0) goto L_14c;
    if (s == 2) goto L_14c;
    if (s == 3) goto L_14c;
    *(u16 *)(p + 0x9e) = *(u16 *)(p + 0x9e) + 1;
    x = *(u16 *)(p + 0xa0);
    if (x < 0xffff) {
        *(u16 *)(p + 0xa0) = x + 1;
    }
L_14c:
    s = *(s16 *)(p + 0x90);
    if (s == 1) goto L_160;
    if (s != 4) goto L_180;
L_160:
    *(u16 *)(p + 0xa4) = *(u16 *)(0xa4 + p) + 1;
    x = *(u16 *)(p + 0xa4);
    if (x > 60000) {
        *(u16 *)(0xa4 + p) = 60000;
    }
    goto L_188;
L_180:
    *(u16 *)(p + 0xa4) = 0;
L_188:
    i = 0;
    x = *(u16 *)(p + 0xa2);
    one = 1;
    if (x != 0) {
        *(u16 *)(p + 0xa2) = x - 1;
    }
    do {
        x = *(u32 *)(p + 0x16c);
        if ((x & (one << i)) != 0) goto L_1c8;
        i = (s16)(i + 1);
    } while (i < 3);
    i = -1;
L_1c8:
    if (-1 != i) {
        *(u16 *)(p + 0xa2) = 50;
    }
    fn = *(void (**)(u8 *))(p + 0x1fc);
    if (0 != fn) {
        fn(p);
        goto L_244;
    }
    *(T3 *)((s32)p + 0x30) = *(T3 *)(p + 0xbc);
    *(T12 *)(p + 0x3c) = *(T12 *)(p + 0xc8);
    q = *(u8 **)(p + 0x18c);
    if (q == 0) goto L_244;
    *(T3 *)(0x30 + q) = *(T3 *)(p + 0xbc);
    q = *(u8 **)(p + 0x18c);
    *(u32 *)(q + 0x34) = 0;
L_244:
    fn = *(void (**)(u8 *))(p + 0x204);
    if (fn != 0) {
        fn(p);
        goto L_31c;
    }
    r = func_020bc3c4();
    if (r == 0) goto L_310;
    switch (*(s16 *)(p + 0x94)) {
    case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86:
    case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94:
    case 95: case 96: case 97: case 98: case 99: case 100:
        bv = 0;
        break;
    default:
        bv = 1;
        break;
    }
    if (bv == 0) goto L_310;
    if (*(s16 *)(p + 0x88) != 0) goto L_310;
    func_0208ec84(r, p + 0xbc, stk4);
    func_0209c83c(p + 400, stk4);
    goto L_31c;
L_310:
    func_0209c83c(p + 400, 0);
L_31c:
    *(u32 *)(p + 0x16c) = 0;
    fn = *(void (**)(u8 *))(p + 0x200);
    if (fn != 0) {
        fn(p);
        goto L_384;
    }
    func_02044ca0(*(s16 *)(156 + p));
    func_02067e34(p + 0xbc, p + 0x170, stk16);
    func_020e9ca0(p + 0xa8, stk16, 0, (*(s32 *)(data_02159444 + 0x34) == -2), 0);
L_384:
    if (*(s32 *)(p + 0x1c) != 0) {
        if (p != 0) {
            func_0208f7e4(p, (u16)(data_027c0bbc[0] | (data_027c0bbc[1] << 5) | (data_027c0bbc[2] << 10)));
        }
    }
    *(T3 *)(p + 0x170) = *(T3 *)(p + 0xbc);
    func_01ffe474(p);
}
