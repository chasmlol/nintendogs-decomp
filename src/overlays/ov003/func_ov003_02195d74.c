#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern u8 *data_0215942c;

extern u8 *func_020364cc(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
extern void func_020362f8(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02195d74(u8 *p)
{
    u8 *r4;
    s32 bVar2;

    r4 = func_020364cc(p);
    if (r4 != 0) {
        *(V3 *)(p + 948) = *(V3 *)(r4 + 188);
    }
    if (func_020289d0(p, 4, 1) != 0) {
        return;
    }
    if (*(u16 *)(p + 252) <= 100) {
        return;
    }
    if (func_0203592c(p, r4) != 0) {
        return;
    }
    *(s32 *)(p + 0x488) = *(s32 *)(p + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = 0;
    } else if (*(s16 *)(p + 250) == 35) {
        bVar2 = 0;
    } else {
        if (r4 != 0) {
            if (*(s16 *)(r4 + 144) == 0 || *(s16 *)(r4 + 144) == 2) {
                bVar2 = 1;
            } else if (*(s16 *)(r4 + 148) == 53 && func_020c1f34(r4) == 0) {
                bVar2 = 1;
            } else {
                bVar2 = 0;
            }
            if (!bVar2) goto LAB_A;
        }
        func_0203e908(p, 93);
        func_020362f8(p);
        bVar2 = 1;
        goto done;
LAB_A:
        bVar2 = func_02026c40(p, r4);
        if (bVar2) {
            func_0202fd7c(p);
            func_020362f8(p);
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
    }
done:
    if (!bVar2) {
        func_ov003_0219a368(p);
    }
}
