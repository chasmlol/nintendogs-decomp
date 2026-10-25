#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    u8 pad00[0x48];
    VecFx32 dir;            /* 0x48 */
} Cam;

typedef struct {
    u8 pad00[0x1c];
    Cam *cam;               /* 0x1c */
    u8 pad20[0x74];
    fx32 f94;               /* 0x94 */
    fx32 f98;               /* 0x98 */
} Game;

typedef struct {
    u8 pad000[0xb9];
    u8 fb9;                 /* 0x0b9 */
    u8 pad0ba[0x42];
    u16 ffc;                /* 0x0fc */
    u8 pad0fe[0x1e];
    u16 f11c;               /* 0x11c */
    u16 f11e;               /* 0x11e */
    u8 pad120[0x180];
    VecFx32 f2a0;           /* 0x2a0 */
    u8 pad2ac[0x30];
    VecFx32 f2dc;           /* 0x2dc */
    VecFx32 f2e8;           /* 0x2e8 */
    VecFx32 f2f4[15];       /* 0x2f4 */
    VecFx32 f3b0x;          /* 0x3a8 */
    VecFx32 f3b4;           /* 0x3b4 */
    VecFx32 f3c0[15];       /* 0x3c0 */
} Dog;

extern Game *data_02159444;
typedef struct World World;
extern World *data_0214f460;
extern u32 *data_0214f464;

extern void func_02027ee0(Dog *dog, s32 a, s32 b);
extern void func_ov003_0218c050(Dog *dog, s32 a);
extern void func_ov003_0218ba7c(Dog *dog);
extern void func_020ab02c(World *w, VecFx32 *a, VecFx32 *b);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern fx32 func_02028130(Dog *dog);
extern fx32 func_0206782c(fx32 x);
extern fx32 func_02067898(fx32 a, fx32 b);
extern void func_01ff832c(fx32 s, const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern BOOL func_020aaf38(World *w, VecFx32 *a, fx32 r);
extern BOOL func_02029b30(Dog *dog, s32 a);
extern void func_0203e908(Dog *dog, s16 v);

#define FX_MUL(a, b) ((fx32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_02188db0(Dog *dog, s32 mode, s32 idx)
{
    VecFx32 dir;
    VecFx32 d;
    fx32 len2;
    fx32 r;
    VecFx32 *pos;
    s32 off;
    struct { VecFx32 *p; } Q;

    func_02027ee0(dog, 5, 10);
    func_ov003_0218c050(dog, 1);
    dog->f11c = 0;
    {
        fx32 ax = data_02159444->f98;
        fx32 ay = data_02159444->f94;
        if (ax <= 0) {
            ax = -ax;
        }
        if (ay <= 0) {
            ay = -ay;
        }
        if (ay + ax > 2) {
            dog->f11e = 12;
        } else if (dog->f11e != 0) {
            dog->f11e--;
        }
    }
    func_ov003_0218ba7c(dog);
    dog->fb9 = 1;
    dir = data_02159444->cam->dir;
    off = (s16)idx * 12;
    Q.p = dog->f2f4;
    pos = dog->f3c0;
    Q.p = (VecFx32 *)((u8 *)Q.p + off);
    pos = (VecFx32 *)((u8 *)pos + off);
    func_020ab02c(data_0214f460, pos, Q.p);
    func_02067e34((VecFx32 *)((u8 *)dog + 0x3c0 + off), &dog->f2dc, &d);
    len2 = FX_MUL(d.z, d.z) + (FX_MUL(d.x, d.x) + FX_MUL(d.y, d.y));
    r = FX_MUL(func_02028130(dog), 0x19a0);
    if (len2 < FX_MUL(r, r)) {
        func_01ff832c(func_02067898(r, func_0206782c(len2)), &d, &dog->f2dc, pos);
    }
    func_01ff832c(FX_MUL(func_02028130(dog), -10250), &dir, &dog->f2a0, &d);
    func_020ab02c(data_0214f460, &dog->f3b4, &d);
    if ((*(vu16 *)0x04000304 & 0x8000) >> 15 == 0) {
        fx32 a = func_02028130(dog);
        fx32 b = func_02028130(dog);
        fx32 s = FX_MUL(b, a);
        if (func_020aaf38(data_0214f460, Q.p, FX_MUL(s, 0x334))) {
            goto THEN;
        }
    }
    {
        u32 v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        if ((u16)((v << 16) >> 30) == 0) {
            func_0203e908(dog, mode + 0x13d);
        } else {
            func_0203e908(dog, mode + 0xec);
        }
    }
    return;
THEN:
    if (func_02029b30(dog, mode)) {
        return;
    }
    if (dog->ffc <= 200) {
        return;
    }
    switch (mode) {
    case 1:
        func_0203e908(dog, idx + 0x161);
        return;
    case 3:
        func_0203e908(dog, idx + 0x163);
        return;
    case 4:
        func_0203e908(dog, idx + 0x165);
        return;
    default:
        func_0203e908(dog, mode + 0x13d);
        return;
    }
}
