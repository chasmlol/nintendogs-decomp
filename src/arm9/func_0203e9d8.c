#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_0214f464;
extern u8 *data_0214f130;


void func_0203e9d8(u8 *p0)
{
    s32 i;
    u32 z3;
    u32 t0;
    u8 *q;
    u32 z1;
    u32 z2;
    u16 st;

    st = *(u16 *)data_0215942c;
    if (st == 10) {
        return;
    }
    if (st == 12) {
        return;
    }
    i = 0;
    z1 = i;
    z2 = i;
    z3 = i;
top:
    {
        s32 c;
        u32 val;
        u8 *node;
        u8 *other;
        u8 *piv;
        u32 *qa;
        u32 *qb;

        if (i < 0) {
            goto zv;
        }
        if (i < 3) {
            goto ld;
        }
zv:
        val = z1;
        goto chk;
ld:
        val = *(u32 *)(data_0214f464 + (u32)i * 4 + 0x54);
chk:
        if (i == *(s8 *)(p0 + 0x88)) {
            goto next;
        }
        if (val == 0) {
            goto next;
        }
        node = *(u8 **)(p0 + 0x9e8) + 0x650;
        c = z2;
srch:
        if (node == 0) {
            goto cnext;
        }
        other = *(u8 **)(val + 0x9e8);
        t0 = *(u32 *)(other + 0x640);
        q = other + 1600;
        if (*(u32 *)node != t0) {
            goto cnext;
        }
        if (*(u32 *)(node + 4) != *(u32 *)(q + 4)) {
            goto cnext;
        }
        if (*(u16 *)(node + 8) != *(u16 *)(q + 8)) {
            goto cnext;
        }
        if (*(u16 *)(node + 10) != *(u16 *)(q + 10)) {
            goto cnext;
        }
        piv = data_0214f130;
        *(u8 *)(node + 0x15) = (u8)(*(u32 *)(piv + 0x1c));
        qa = (u32 *)(piv + 0x1c);
        *(u8 *)(node + 0x14) = (u8)(qa[1]);
        *(u8 *)(node + 0x13) = (u8)(qa[2]);
        *(u8 *)(node + 0x12) = (u8)(*(u32 *)(piv + 0x2c));
        qb = (u32 *)(piv + 0x2c);
        *(u8 *)(node + 0x11) = (u8)(qb[1]);
        *(u8 *)(node + 0x10) = (u8)(qb[2]);
        *(u8 *)(node + 0x16) = (u8)(z3);
        *(u8 *)(node + 0x17) = (u8)(z3);
        *(u16 *)(node + 14) = *(u16 *)(p0 + 0x132 + (u32)i * 2);
        *(u8 *)(p0 + 0xd2) = (u8)(1);
        goto next;
cnext:
        c = (s16)(c + 1);
        node = node + 24;
        if (c < 16) {
            goto srch;
        }
next:
        ;
    }
    i = (s16)(i + 1);
    if (i < 3) {
        goto top;
    }
}
