#pragma avoid_byte strb
#include "ctx.h"

extern u16 data_0212fc48;
extern u16 data_0212fc54;
extern u16 data_0212fc58;
extern u8 *data_02159034;
extern s16 data_0212fcc4[];
extern void func_0206c7bc(u32 v, u8 *p, u32 n);
extern void func_020942c0(s16 *p, u32 n);

static inline void SwapByte(u32 v, vu8 *p) { *p = v; }

u32 func_02093374(u32 *p1, u8 *p2, s32 p3, u8 p4)
{
    u32 r5;
    s16 i;
    s16 j;
    s16 *tbl;
    u8 *base;
    u8 *q2;
    u32 q4;
    u16 sel;
    u32 pa;
    u32 pb;
    s16 buf[2];
    vu16 z;

    q2 = p2;
    q4 = p4;
    r5 = 0;
    sel = 0xffff;
    switch (p3) {
    case 0:
        sel = data_0212fc48;
        break;
    case 1:
        sel = data_0212fc58;
        break;
    case 2:
        sel = data_0212fc54;
        break;
    }
    if (sel == 0xffff) {
        goto fin;
    }
    base = *(u8 **)(data_02159034 + 0x1000 + 0x41c) + 0x568;
    tbl = data_0212fcc4;
    i = 0;
    do {
        if (tbl[0] == 3 && tbl[1] == (s16)sel && *(s8 *)(base + 14) == 0) {
            r5 = 1;
            if (p1 != 0) {
                pa = ((vu32 *)p1)[0];
                pb = ((vu32 *)p1)[1];
                *(u32 *)base = pa;
                *(u32 *)(base + 4) = pb;
            } else {
                z = 0;
                func_0206c7bc(z, base, 8);
            }
            j = 0;
            do {
                if (q2 != 0) {
                    SwapByte(q2[j], (vu8 *)(base + j + 8));
                } else {
                    SwapByte(0, (vu8 *)(base + j + 8));
                }
                j++;
            } while (j < 6);
            SwapByte(q4, (vu8 *)(base + 14));
            SwapByte((u8)i, (vu8 *)(base + 15));
            {
                s16 t1 = tbl[1];
                buf[0] = 3;
                buf[1] = t1;
            }
            func_020942c0(buf, 1);
            goto fin;
        }
        i++;
        tbl += 2;
        base += 16;
    } while (i < 20);
fin:
    return r5;
}
