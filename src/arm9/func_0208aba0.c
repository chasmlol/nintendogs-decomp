#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern void func_02089c08(void);
extern void func_02089bf4(void);

s32 func_0208aba0(u8 *p1, s32 p2, s32 p3, u16 *p4)
{
    u32 uVar4;
    u8 *q;
    u32 uVar3;
    s32 iv6;
    u8 b;
    u8 h16;
    u16 t0;
    u16 t1;

    if (p2 < 0) {
        return 0;
    }
    func_02089c08();
    if ((u32)p2 < *(u32 *)(p1 + 0x38)) {
        goto cont;
    }
    func_02089bf4();
    return 0;
cont:
    uVar4 = *(u32 *)(p1 + p2 * 4 + 0x3c);
    *(u8 *)p4 = (u8)uVar4;
    switch (*(u8 *)p4) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        q = p1 + (uVar4 >> 8);
        t0 = *(u16 *)(p1 + (uVar4 >> 8));
        t1 = *(u16 *)(q + 2);
        p4[1] = t0;
        p4[2] = t1;
        t0 = *(u16 *)(q + 4);
        t1 = *(u16 *)(q + 6);
        p4[3] = t0;
        p4[4] = t1;
        p4[5] = *(u16 *)(q + 8);
        goto ok;
    case 16:
        q = p1 + (uVar4 >> 8);
        h16 = *(u8 *)(q + 1);
        uVar3 = *(u8 *)(p1 + (uVar4 >> 8));
        if (p3 < (s32)uVar3) {
            goto f16;
        }
        if (p3 <= (s32)h16) {
            goto ok16;
        }
f16:
        func_02089bf4();
        return 0;
ok16:
        q = q + (p3 - uVar3) * 12;
        t0 = *(u16 *)(q + 2);
        t1 = *(u16 *)(q + 4);
        p4[0] = t0;
        p4[1] = t1;
        t0 = *(u16 *)(q + 6);
        t1 = *(u16 *)(q + 8);
        p4[2] = t0;
        p4[3] = t1;
        t0 = *(u16 *)(q + 10);
        t1 = *(u16 *)(q + 12);
        p4[4] = t0;
        p4[5] = t1;
        goto ok;
    case 17:
        q = p1 + (uVar4 >> 8);
        iv6 = 0;
        b = *(u8 *)q;
        if (p3 <= (s32)b) {
            goto f17;
        }
lp17:
        iv6 = iv6 + 1;
        if (iv6 < 8) {
            goto bd17;
        }
        func_02089bf4();
        return 0;
bd17:
        b = *(u8 *)(q + iv6);
        if (p3 > (s32)b) {
            goto lp17;
        }
f17:
        q = q + iv6 * 12;
        t0 = *(u16 *)(q + 8);
        t1 = *(u16 *)(q + 10);
        p4[0] = t0;
        p4[1] = t1;
        t0 = *(u16 *)(q + 12);
        t1 = *(u16 *)(q + 14);
        p4[2] = t0;
        p4[3] = t1;
        t0 = *(u16 *)(q + 16);
        t1 = *(u16 *)(q + 18);
        p4[4] = t0;
        p4[5] = t1;
        goto ok;
    default:
        break;
    }
    func_02089bf4();
    return 0;
ok:
    func_02089bf4();
    return 1;
}
