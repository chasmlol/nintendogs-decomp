#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_lifetimes off

extern s32 data_0214f460;
extern u8 *data_02159444;
extern u32 *data_0214f464;

extern void func_020ab02c(s32 a, u8 *b, u8 *c);
extern void func_02067e34(u8 *a, u8 *b, s32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);
extern void func_ov003_021860ac(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_0202e29c(u8 *p);
extern s32 func_02029b30(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_020aaf38(s32 a, u8 *b, s32 c);

typedef struct { u32 w[3]; } Three;

#define FXMul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_02185b94(u8 *p)
{
    s32 vec[3];
    s32 sum;
    s32 t;
    s32 v;
    s32 uVar;
    s32 sVar7;
    s32 cVar1;
    s32 cVar2;
    u32 nx;

    func_020ab02c(data_0214f460, p + 0x420, p + 0x360);
    func_02067e34(p + 0x420, p + 0x348, vec);
    sum = FXMul(vec[2], vec[2]) + (FXMul(vec[0], vec[0]) + FXMul(vec[1], vec[1]));
    v = func_02028130(p);
    t = FXMul(v, 0x19a0);
    if (sum < FXMul(t, t)) {
        v = func_0206782c(sum);
        v = func_02067898(t, v);
        func_01ff832c(v, vec, p + 0x348, p + 0x420);
    }
    *(Three *)(p + 0x3b4) = *(Three *)(p + 0x420);
    func_ov003_021860ac(p);

    cVar1 = *(s8 *)(p + 0x95);
    if (cVar1 == 1) goto c1;
    if (cVar1 == 2) goto c2;
    func_0203e8cc(p, 0, 0);
    goto after;
c1:
    {
        s16 w = *(s16 *)(p + 0x152);
        if (w != 0x15e && w != 0x15f) func_0203e8cc(p, 0, 0x15e);
    }
    goto after;
c2:
    {
        s16 w = *(s16 *)(p + 0x152);
        if (w != 0x160 && w != 0x161) func_0203e8cc(p, 0, 0x160);
    }
after:

    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) != 0) goto else1;
    {
        s32 a = func_02028130(p);
        s32 b = func_02028130(p);
        t = FXMul(b, a);
        v = FXMul(t, 0x802);
        if (func_020aaf38(data_0214f460, p + 0x360, v) == 0) goto else1;
        *(s32 *)(p + 0x474) = 0;
        *(s32 *)(p + 0x478) = *(s32 *)(p + 0x478) + 1;
        v = *(s32 *)((u8 *)data_02159444 + 0x94);
        if (v <= 0) v = -v;
        *(s32 *)(p + 0x47c) = *(s32 *)(p + 0x47c) + v;
        { s32 w = *(s32 *)((u8 *)data_02159444 + 0x98); if (w <= 0) w = -w; *(s32 *)(p + 0x47c) = *(s32 *)(p + 0x47c) + w; }
        goto join;
    }
else1:
    *(s32 *)(p + 0x474) = *(s32 *)(p + 0x474) + 1;
join:

    func_02027ee0(p, 5, 10);
    func_ov003_0218c050(p, 1);
    *(u16 *)(p + 0x11c) = 0;
    {
        s32 a = *(s32 *)((u8 *)data_02159444 + 0x98);
        s32 b = *(s32 *)((u8 *)data_02159444 + 0x94);
        if (a <= 0) a = -a;
        if (b <= 0) b = -b;
        if (b + a > 2) {
            *(u16 *)(p + 0x11e) = 12;
        } else {
            if (*(u16 *)(p + 0x11e) != 0) *(u16 *)(p + 0x11e) = *(u16 *)(p + 0x11e) - 1;
        }
    }
    *(u8 *)(p + 0xb9) = 1;
    if (*(s32 *)(p + 0x474) > 5) {
        func_0203e908(p, 236);
        return;
    }
    if (func_0202e29c(p) != 0) return;
    if (func_02029b30(p, 0) != 0) return;

    cVar2 = *(s8 *)(p + 0x8b);
    if (cVar2 == 1 && *(s32 *)(p + 0x478) > 60) {
        uVar = 0;
        switch (*(s8 *)(p + 0x95)) {
        default:
            nx = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = nx;
            switch ((u16)(((u32)nx << 16) >> 31)) { case 0: uVar = 0; break; case 1: uVar = 1; break; }
            break;
        case 1:
        case 5:
            uVar = 0;
            break;
        case 2:
        case 6:
            uVar = 1;
            break;
        }
        func_0203e908(p, (s16)(uVar + 0x3a2));
        return;
    }
    if (*(s32 *)(p + 0x478) <= 200) return;
    switch (cVar2) {
    case 5:
        sVar7 = 0;
        goto done;
    case 4:
        sVar7 = 1;
        goto done;
    default:
        sVar7 = 2;
        goto done;
    case 1:
        sVar7 = 3;
        goto done;
    }
done:
    uVar = 0;
    switch (*(s8 *)(p + 0x95)) {
    default:
        nx = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = nx;
        switch ((u16)(((u32)nx << 16) >> 31)) { case 0: uVar = 0; break; case 1: uVar = 1; break; }
        break;
    case 1:
    case 5:
        uVar = 0;
        break;
    case 2:
    case 6:
        uVar = 1;
        break;
    }
    func_0203e908(p, (s16)(uVar + (sVar7 * 2 + 0x39c)));
}
