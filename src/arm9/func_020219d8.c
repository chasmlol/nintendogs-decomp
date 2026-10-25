#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off

extern u8 *data_0214f464;
extern u8 *data_0213a8d4[];
extern u8 data_021369a8[];

extern s32 func_02022e2c(u8 *p, s32 a);
extern void func_020ddf0c(s32 a, u32 b);
extern void func_02022448(u8 *p);
extern void func_020df20c(s32 a);

static inline u8 *GetEnt(u8 *o, s16 i)
{
    if (i < 0 || i >= 20) {
        return 0;
    }
    return *(u8 **)(o + 0x9e8) + 144 + i * 60;
}

static inline s32 Sel(u8 *o, u8 *e)
{
    u32 a;
    u32 b;
    u8 *ent;
    if (e == 0) {
        return 0;
    }
    a = *(u16 *)e;
    if (a == 0) {
        return 0;
    }
    b = *(u16 *)(e + 2);
    if (b == 0) {
        return 0;
    }
    if (a >= 79 && a < 99) {
        ent = data_0213a8d4[79];
    } else {
        ent = data_0213a8d4[a];
    }
    return (s32)b < (data_021369a8 + (ent[2] - 1) * 5)[(*(u8 **)(o + 0x9e8))[0x13] - 1] ? 1 : 2;
}

static inline s32 SelT(u8 *o, u8 *e, u8 *t79)
{
    u32 a;
    u32 b;
    u8 *ent;
    if (e == 0) {
        return 0;
    }
    a = *(u16 *)e;
    if (a == 0) {
        return 0;
    }
    b = *(u16 *)(e + 2);
    if (b == 0) {
        return 0;
    }
    if (a >= 79 && a < 99) {
        ent = t79;
    } else {
        ent = data_0213a8d4[a];
    }
    return (s32)b < (data_021369a8 + (ent[2] - 1) * 5)[(*(u8 **)(o + 0x9e8))[0x13] - 1] ? 1 : 2;
}

s32 func_020219d8(u8 *p)
{
    u8 *st;
    s16 iVar7;
    u32 uVar3;
    u32 cls;
    s16 iVar4;
    u8 *e1;
    u8 *e2;
    s32 res;

    st = data_0214f464;
    if (st == 0) goto Lret0;
    if ((s8)st[0xd] != 1) goto Lret0;
    if (p == 0) goto L598;
    if ((s8)(st + (s8)p[0x88])[0x1c] != 0) goto L598;
    if ((s8)p[0x8b] == 5) goto L598;
    uVar3 = func_02022e2c(p, 1);
    cls = p[0xa6];
    if (uVar3 == 0) goto L574;
    iVar7 = 0;
    do {
        u8 *e = GetEnt(p, iVar7);
        if (e != 0 && *(u16 *)e == uVar3 && e[0x28] == 0) goto F1;
        iVar7 = (s16)(iVar7 + 1);
    } while (iVar7 < 20);
    iVar7 = -1;
F1:
    iVar4 = 0;
    do {
        u8 *e = GetEnt(p, iVar4);
        if (e != 0 && *(u16 *)e == uVar3 && e[0x28] == cls) goto F2;
        iVar4 = (s16)(iVar4 + 1);
    } while (iVar4 < 20);
    iVar4 = -1;
F2:
    e1 = GetEnt(p, iVar7);
    e2 = GetEnt(p, iVar4);
    if (e2 != 0) {
        *(vu8 *)(data_0214f464 + 0xd) = 1;
        return 0;
    }
    res = Sel(p, e1);
    switch (res) {
    case 0:
        {
            u32 mask;
            s16 k;
            s32 c;
            u8 *t79 = data_0213a8d4[79];
            mask = 0;
            k = 0;
            do {
                c = SelT(p, GetEnt(p, k), t79);
                if (c == 1) goto M0;
                if (c != 2) goto N0;
            M0:
                mask |= (u32)1 << k;
            N0:
                k = (s16)(k + 1);
            } while (k < 20);
            func_020ddf0c((s8)p[0x88], mask);
        }
        break;
    case 1:
        {
            u32 mask;
            s16 k;
            s32 c;
            u8 *t79 = data_0213a8d4[79];
            mask = 0;
            k = 0;
            do {
                c = SelT(p, GetEnt(p, k), t79);
                if (c == 1) goto M1;
                if (c != 2) goto N1;
            M1:
                mask |= (u32)1 << k;
            N1:
                k = (s16)(k + 1);
            } while (k < 20);
            func_020ddf0c((s8)p[0x88], mask);
        }
        break;
    case 2:
        *(vu8 *)(data_0214f464 + 0xd) = 1;
        return 0;
    }
    {
    s8 v88;
    v88 = *(s8 *)(p + 0x88);
    *(volatile s8 *)(data_0214f464 + 5) = v88;
    *(u16 *)(p + 0xf6) = iVar7;
    *(u16 *)(p + 0xf4) = uVar3;
    *(vu8 *)(p + 0xa7) = (u8)cls;
    *(vu8 *)(p + 0xa8) = 1;
    *(u16 *)(p + 256 + 18) = 0;
    *(u16 *)(p + 0xf0) = 4;
    *(vu8 *)(p + 0xa5) = 0;
    *(vu8 *)(data_0214f464 + 0xe) = 0;
    *(vu8 *)(data_0214f464 + 0xf) = 1;
    *(u16 *)(data_0214f464 + 0x24) = 180;
    func_02022448(p);
    {
        s8 i;
        u8 *ptr;
        i = 0;
        do {
            if (i != (s8)data_0214f464[5]) {
                if (i < 0 || i >= 3) {
                    ptr = 0;
                } else {
                    ptr = *(u8 **)(data_0214f464 + 0x54 + i * 4);
                }
                if (ptr != 0) {
                    *(vu8 *)(ptr + 0xaa) = 0;
                }
            }
            i = (s8)(i + 1);
        } while (i < 3);
    }
    func_020df20c((s8)p[0x88]);
    }
    *(vu8 *)(data_0214f464 + 0xd) = 2;
    return 1;

L574:
    *(vu8 *)(data_0214f464 + 0xd) = 1;
    return 0;

L598:
    *(vu8 *)(st + 0xd) = 1;
    return 0;

Lret0:
    return 0;
}
