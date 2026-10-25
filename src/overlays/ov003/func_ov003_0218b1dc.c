#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } T3;

extern u8 *data_02159444;
extern u8 *data_0214f460;
extern u8 data_02152cd8[];
extern s8 data_0213c42d[];
extern u8 *data_0215942c;
extern u16 data_ov003_0219a750[];

extern s32 func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_020ab064(u8 *a, void *b);
extern void func_ov003_0218c050(u8 *p, s32 v);
extern void func_ov003_0218bc08(u8 *p, s32 v);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_02023508(u8 *p, s32 a, s32 b);
extern void func_0203e288(u8 *p, s32 a);
extern void func_02029180(u8 *p, s32 a, s32 b);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern s32 func_0202c87c(u8 *p, s32 a);
extern s32 func_0203646c(u8 *p);
extern s32 func_0202a7dc(u8 *p);
extern void func_ov003_0218e360(u8 *p, s32 a);
extern s32 func_02022000(s32 a);
extern void func_02029638(u8 *p, s32 a);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02022bbc(u8 *p);
extern void func_020362f8(u8 *p);

typedef struct { u16 w[5]; } T5;

void func_ov003_0218b1dc(u8 *p1, s32 p2, s32 p3, u32 p4, u32 p5)
{
    u32 loc[6];
    T5 aus;
    s32 uVar7;
    s32 iVar2;
    s32 bVar1;
    u16 uVar6;
    u32 l0;
    u32 l1;
    u32 l2;
    u32 l3;
    u32 l4;
    u32 l5;
    s32 flag;

    uVar7 = 7;
    if (p2 == 1) goto L74;
    if (p2 == 7) goto L7c;
    if (p2 == 8) goto L7c;
    if (*(s16 *)(p1 + 0xf0) == 4) {
        *(T3 *)(p1 + 0x3b4) = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
        goto L130;
    }
    func_020ab064(data_0214f460, p1 + 0x3b4);
    goto L130;
L74:
    uVar7 = 3;
    goto L130;
L7c:
    flag = (p2 == 8);
    l0 = *(vu32 *)(data_02152cd8 + 0x4c);
    l1 = *(vu32 *)(data_02152cd8 + 0x58);
    l2 = *(vu32 *)(data_02152cd8 + 0x64);
    l3 = *(vu32 *)(data_02152cd8 + 0x50);
    l4 = *(vu32 *)(data_02152cd8 + 0x5c);
    l5 = *(vu32 *)(data_02152cd8 + 0x68);
    loc[0] = l0;
    loc[1] = l1;
    loc[2] = l2;
    loc[3] = l3;
    loc[4] = l4;
    loc[5] = l5;
    *(T3 *)(p1 + 0x3b4) = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
    iVar2 = flag ? -0x5000 : 0x5000;
    func_01ff832c(iVar2, &loc[0], p1 + 0x3b4, p1 + 0x3b4);
    func_01ff832c(0x1000, &loc[3], p1 + 0x3b4, p1 + 0x3b4);
    if (*(s8 *)(p1 + 0x93) != 0) {
        *(u16 *)(p1 + 0x12e) = flag ? 0x6000 : -0x6000;
    }
L130:
    func_ov003_0218c050(p1, 0);
    *(u16 *)(p1 + 0x11c) = 1;
    *(u16 *)(p1 + 0x11e) = 0;
    func_ov003_0218bc08(p1, p2);
    if (*(s16 *)(p1 + 0xf0) == 4) {
        func_0203e8cc(p1, 3, ((s32)data_0213c42d[*(u16 *)*(u8 **)(p1 + 0x9e8) * 100] + 8) << 16 >> 16);
        func_0203e8cc(p1, 2, 0);
    }
    *(s32 *)(p1 + 0x488) = *(s32 *)(p1 + 0x488) + 1;
    bVar1 = func_02022e14(p1, 1);
    if (bVar1) {
        if (*(u16 *)data_0215942c != 17) {
            iVar2 = func_02023508(p1, (u16)(*(s16 *)(p1 + 0xf0) - 12), p1[0xa5]);
            func_0203e288(p1, iVar2);
            func_02029180(p1, 14, (u8)(p2 + 1));
        } else {
            iVar2 = func_02023508(p1, (u16)(*(s16 *)(p1 + 0xf0) - 12), p1[0xa5]);
            func_0203e288(p1, iVar2);
            func_02029180(p1, 14, 1);
        }
    }
    iVar2 = func_02022dec(p1, p3, p4);
    if (iVar2 == 0 && func_0202c87c(p1, p2) != 0) {
        return;
    }
    if (!func_0203646c(p1) || func_0202a7dc(p1) != 0) {
        func_ov003_0218e360(p1, p2);
        return;
    }
    if (func_02022000((s8)p1[0x88]) != 0) {
        func_02029638(p1, p2);
        return;
    }
    if (*(s32 *)(p1 + 0x2a4) <= 0 && func_02029b7c(p1, p2, p5, uVar7) != 0) {
        return;
    }
    if (p1[0xa3] != 0 && func_02022dec(p1, p3, p4) != 0) {
        *(u16 *)(p1 + 0x122) = *(u16 *)(p1 + 0x122) + 1;
        iVar2 = func_02022bbc(p1);
        if (*(u16 *)(p1 + 0xfc) <= iVar2) {
            return;
        }
        if (*(u16 *)data_0215942c == 17) {
            return;
        }
        func_ov003_0218e360(p1, p2);
        return;
    }
    if (*(u16 *)data_0215942c == 17) {
        return;
    }
    aus = *(T5 *)data_ov003_0219a750;
    uVar6 = aus.w[(s8)p1[0x8e]];
    switch ((s8)p1[0x8b]) {
    case 5:
        uVar6 += 0x78;
        break;
    case 4:
        uVar6 -= 0x3c;
        break;
    case 1:
    case 2:
        uVar6 -= 0x78;
        break;
    case 0:
    case 3:
        break;
    }
    if (*(u16 *)data_0215942c == 10) {
        uVar6 -= 0x78;
    }
    if (*(u16 *)(p1 + 0xfc) <= uVar6) {
        return;
    }
    if (*(volatile s8 *)(p1 + 0x8b) != 1) {
        func_020362f8(p1);
    }
    func_ov003_0218e360(p1, p2);
}
