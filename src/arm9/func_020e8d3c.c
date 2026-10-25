#include "ctx.h"

extern u32 func_020bd858(u8 *p);
extern u32 func_020bd868(u8 *p);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern s32 func_01ffdb08(s32 a);
extern void func_020292c4(s32 a, s32 b, s32 c);

u32 func_020e8d3c(u8 *p)
{
    u32 A[9];
    s32 i;
    u32 t;
    u32 rv;

    switch (*(s16 *)(p + 0x90)) {
    case 0:
        return func_020bd858(p);
    case 1:
        {
            u32 w5;
            u32 w4;
            u32 w3;
            u32 w2 = *(u32 *)(p + 0xd0);
            u32 w1 = *(u32 *)(p + 0xcc);
            u32 w0 = *(u32 *)(p + 0xc8);
            A[0] = w0;
            A[1] = w1;
            A[2] = w2;
            w5 = *(u32 *)(p + 0xdc);
            w4 = *(u32 *)(p + 0xd8);
            w3 = *(u32 *)(p + 0xd4);
            A[3] = w3;
            A[4] = w4;
            A[5] = w5;
        }
        func_02067d04(&A[0], &A[3], &A[6]);
        func_02006a30(&A[0], &A[0]);
        func_02006a30(&A[6], &A[6]);
        func_02067d04(&A[6], &A[0], &A[3]);
        *(u32 *)(p + 0xc8) = A[0];
        *(u32 *)(p + 0xcc) = A[1];
        *(u32 *)(p + 0xd0) = A[2];
        *(u32 *)(p + 0xd4) = A[3];
        *(u32 *)(p + 0xd8) = A[4];
        *(u32 *)(p + 0xdc) = A[5];
        *(u32 *)(p + 0xe0) = A[6];
        *(u32 *)(p + 0xe4) = A[7];
        t = A[8];
        *(u32 *)(p + 0xe8) = t;
        return t;
    case 2:
        return func_020bd868(p);
    case 3:
        *(u32 *)(p + 0xa8) = 0;
        i = 0;
        do {
            t = func_01ffdb08(i);
            if (t != 0) {
                func_020292c4(t, 75, 1);
            }
            rv = (u32)((i + 1) * 0x10000);
            i = (s32)rv >> 16;
        } while (i < 3);
        goto fin;
    default:
        goto fin;
    }
fin:
    return rv;
}
