#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_020bd858(u8 *p);
extern u32 func_020bd868(u8 *p);
extern u8 *func_020bf1ec(u8 *p);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);

u32 func_020f1110(u8 *param_1)
{
    u32 a[10];
    u32 rv;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        return func_020bd858(param_1);
    case 2:
        return func_020bd868(param_1);
    case 3:
        *(u32 *)(param_1 + 0xa8) = 0;
        return 0;
    case 1:
        {
            u32 v2 = *(u32 *)(param_1 + 0xd0);
            u32 v1 = *(u32 *)(param_1 + 0xcc);
            u32 v0 = *(u32 *)(param_1 + 0xc8);
            a[0] = v0;
            a[1] = v1;
            a[2] = v2;
        }
        {
            u32 w5 = *(u32 *)(param_1 + 0xdc);
            u32 w4 = *(u32 *)(param_1 + 0xd8);
            u32 w3 = *(u32 *)(param_1 + 0xd4);
            a[3] = w3;
            a[4] = w4;
            a[5] = w5;
        }
        func_02067d04(&a[0], &a[3], &a[6]);
        func_02006a30(&a[0], &a[0]);
        func_02006a30(&a[6], &a[6]);
        func_02067d04(&a[6], &a[0], &a[3]);
        *(u32 *)(param_1 + 0xc8) = a[0];
        *(u32 *)(param_1 + 0xcc) = a[1];
        *(u32 *)(param_1 + 0xd0) = a[2];
        *(u32 *)(param_1 + 0xd4) = a[3];
        *(u32 *)(param_1 + 0xd8) = a[4];
        *(u32 *)(param_1 + 0xdc) = a[5];
        *(u32 *)(param_1 + 0xe0) = a[6];
        *(u32 *)(param_1 + 0xe4) = a[7];
        {
            u32 last = a[8];
            *(u32 *)(param_1 + 0xe8) = last;
            return last;
        }
    case 4:
        rv = (u32)func_020bf1ec(param_1);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        goto fin;
    }
fin:
    return rv;
}
