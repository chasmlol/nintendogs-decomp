#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_020364cc(u8 *p);
extern s32 func_02036544(u8 *p);
extern void func_02027654(s32 a, s32 *b);
extern void func_02039448(u8 *p);
extern s32 func_02035744(u8 *p, s32 a);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02025e54(u8 *p);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_02026494(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_020386d0(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_ov003_021987dc(u8 *p, s32 a);

typedef struct {
    s32 w[3];
} T12;

#define TICK(K) \
    { \
        tv = *(u32 *)data_0214f464 * 0x10dcd + 1; \
        *(u32 *)data_0214f464 = tv; \
        tq = (u16)((((u32)(u16)tv) * (u32)(K)) >> 16); \
    }

void func_ov003_02196384(u8 *p1)
{
    s32 iv3;
    s32 iv4;
    s32 st;
    u32 tv;
    u32 tq;

    iv3 = func_020364cc(p1);
    iv4 = func_02036544(p1);
    if (iv4 != 0) {
        func_02027654(iv4, (s32 *)(p1 + 948));
        st = *(s16 *)(p1 + 0x152);
        if (st == 0x17e) {
            goto L17e;
        }
        if (st == 0x17f) {
            goto L17f;
        }
        if (st != 0x182) {
            goto Ltail;
        }
        goto L182;
    L17e:
        func_02039448(p1);
        *(T12 *)(p1 + 632) = *(T12 *)(p1 + 948);
        if (func_02035744(p1, 13) != 0) {
            func_02037450(p1, 0x300);
        }
        if (func_0203567c(p1) != 0) {
            func_0203e8cc(p1, 0, 0x17f);
        }
        goto Ltail;
    L17f:
        TICK(20);
        if (tq == 0) {
            func_0203e8cc(p1, 0, 0x182);
            func_02025e54(p1);
        }
        goto Ltail;
    L182:
        func_02039448(p1);
        *(T12 *)(p1 + 632) = *(T12 *)(p1 + 948);
        if (func_02035770(p1, 20) != 0 && func_02035744(p1, 40) != 0) {
            func_02037450(p1, 0x300);
        }
        if (func_0203567c(p1) != 0) {
            func_0203e8cc(p1, 0, 0x17f);
            func_02026494(p1);
        }
    }
Ltail:
    *(s32 *)(p1 + 0x488) = *(s32 *)(p1 + 0x488) + 1;
    if (func_020289d0(p1, 0, 1) != 0) {
        return;
    }
    if (func_0203592c(p1, iv3) != 0) {
        return;
    }
    if (func_ov003_02197dd8(p1) != 0) {
        return;
    }
    if (*(u16 *)(p1 + 252) > 200) {
        TICK(200);
        if (tq == 0) {
            iv3 = func_020386d0(p1);
            func_0203e908(p1, (s16)(iv3 + 0x3d1));
            return;
        }
    }
    if (*(u16 *)(p1 + 252) > 200) {
        TICK(200);
        if (tq == 0) {
            func_ov003_021987dc(p1, iv3);
            return;
        }
    }
    if (*(u16 *)(p1 + 252) <= 200) {
        return;
    }
    TICK(200);
    if (tq != 0) {
        return;
    }
    *(s32 *)(p1 + 0x948) = 0;
    func_0203e908(p1, 0x3da);
}
