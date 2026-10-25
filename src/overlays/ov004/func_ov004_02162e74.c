#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct {
    u8 d0;
    u8 d1;
    s16 h2;
    s16 h4;
    u8 pad6[2];
    s32 w8;
    u8 pad0c[0x264 - 0x0c];
    u8 buf[16];
} Dog;

typedef struct {
    u8 b00;
    u8 pad01[7];
    s32 w08;
    u8 pad0c[4];
    u8 b10;
    u8 b11;
    u16 h12;
    u16 h14;
    u16 h16;
    u16 h18;
    u8 b1a;
    u8 b1b;
    u8 b1c;
    u8 b1d;
    u8 pad1e[2];
    s32 w20;
    u8 pad24[4];
    u16 rec[300][5];
    u16 val;
    u8 pad_be2[0x12dc - 0xbe2];
    u8 ent[5][3];
    u8 pad12eb[0x36c4 - 0x12eb];
    Dog *dog;
} Game;

extern Game *data_ov004_02170320;
extern void func_0206c7bc(u16 a, u8 *b, u32 c);
extern void func_0207c910(s32 a, s32 b, u8 *c, s32 d);

void func_ov004_02162e74(void)
{
    s32 j;
    s32 i;
    u32 outer;
    s32 k;
    u32 off;
    u8 *pq;
    u16 *d22;
    u32 c;
    vu16 tmp;

    if (*(vu8 *)&data_ov004_02170320->b10 == 1 && *(vu8 *)&data_ov004_02170320->b11 == 1) goto THEN;

    data_ov004_02170320->b10 = 1;
    data_ov004_02170320->b11 = 1;
    c = data_ov004_02170320->b10;
    d22 = &data_ov004_02170320->h16;
    pq = &data_ov004_02170320->b10;
    if (c == 0) goto A0;
    if (c == 1) goto A1;
    if (c == 2) *d22 = 0xf0;
    goto AE;
A0:
    *d22 = 0;
    goto AE;
A1:
    *d22 = 0x78;
AE:
    c = pq[1];
    if (c == 0) goto B0;
    if (c == 1) goto B1;
    if (c == 2) d22[1] = 0xc0;
    goto BE;
B0:
    d22[1] = 0;
    goto BE;
B1:
    d22[1] = 0x60;
BE:
    data_ov004_02170320->h12 = data_ov004_02170320->dog->h2;
    data_ov004_02170320->h14 = data_ov004_02170320->dog->h4;
    data_ov004_02170320->w08 = 0;
    data_ov004_02170320->b00 = 1;
    goto TAIL;

THEN:
    {
        u8 *pqt;
        c = data_ov004_02170320->b10;
        pqt = &data_ov004_02170320->b10;
        d22 = (u16 *)&data_ov004_02170320->dog->h2;
        if (c == 0) goto C0;
        if (c == 1) goto C1;
        if (c == 2) *d22 = 0xf0;
        goto CE;
    C0:
        *d22 = 0;
        goto CE;
    C1:
        *d22 = 0x78;
    CE:
        c = pqt[1];
        if (c == 0) goto D0;
        if (c == 1) goto D1;
        if (c == 2) d22[1] = 0xc0;
        goto DE;
    D0:
        d22[1] = 0;
        goto DE;
    D1:
        d22[1] = 0x60;
    DE:
        ;
    }

TAIL:
    k = 0;
    off = 0;
    data_ov004_02170320->dog->w8 = 0;
    data_ov004_02170320->dog->d0 = data_ov004_02170320->b1c;
    data_ov004_02170320->dog->d1 = data_ov004_02170320->b1d;
    data_ov004_02170320->b1a = data_ov004_02170320->dog->d0;
    data_ov004_02170320->b1b = data_ov004_02170320->dog->d1;
    data_ov004_02170320->w20 = 0;
    do {
        k++;
        *(s8 *)((u8 *)data_ov004_02170320 + off + 0x12dc) = -1;
        off += 3;
    } while (k < 5);
    tmp = data_ov004_02170320->val;
    func_0206c7bc(tmp, data_ov004_02170320->dog->buf, 0x2000);
    func_0207c910(25, 0, data_ov004_02170320->dog->buf, 0x2000);
    j = 0;
    outer = 0;
    do {
        i = 0;
        do {
            *(u16 *)(outer + (u32)data_ov004_02170320 + i * 2 + 0x28) = data_ov004_02170320->val;
            i++;
        } while (i < 5);
        outer += 10;
        j++;
    } while (j < 300);
    func_0207c910(25, 0, data_ov004_02170320->dog->buf, 0x2000);
}
