#include "ctx.h"

typedef struct { u32 w[6]; } A6;

extern s32 data_02144a08;
extern s32 data_02144a04;
extern u8 data_02144a0c[];

extern void func_020daa58(u8 *p);
extern void func_020dabb4(u8 *p);
extern void func_020c8bd4(u8 *p);
extern void func_020c8758(u8 *p, u32 v);
extern void func_020c866c(u8 *p);
extern void func_020c87ec(u8 *p, u32 f, u32 *arr);
extern void func_01ff832c(s32 k, u32 *a, u8 *b, u8 *c);
extern void func_020da9e4(void);

void func_020da8a0(u8 *p)
{
    u32 arr[6];
    u32 g1[3];
    u32 g2[3];

    switch (*(s16 *)(p + 0x90)) {
    case 0:
        break;
    case 2:
        {
            u32 t2;
            u32 t1;
            u32 t0;
            u32 u2;
            u32 u1;
            u32 u0;
            s32 k1;
            func_020c8bd4(p);
            t2 = *(u32 *)(p + 0xdc);
            k1 = data_02144a08;
            t1 = *(u32 *)(p + 0xd8);
            t0 = *(u32 *)(p + 0xd4);
            g1[0] = t0;
            g1[1] = t1;
            g1[2] = t2;
            u2 = *(u32 *)(p + 0xe8);
            u1 = *(u32 *)(p + 0xe4);
            u0 = *(u32 *)(p + 0xe0);
            g2[0] = u0;
            g2[1] = u1;
            g2[2] = u2;
            func_01ff832c(-k1, g1, p + 0xbc, p + 0xbc);
            func_01ff832c(-data_02144a04, g2, p + 0xbc, p + 0xbc);
        }
        return;
    case 3:
        func_020dabb4(p);
        return;
    case 1:
        func_020daa58(p);
        return;
    case 4:
        *(A6 *)arr = *(A6 *)data_02144a0c;
        func_020c87ec(p, (u32)func_020da9e4, arr);
        return;
    case 5:
        func_020c8758(p, 0x1000);
        return;
    case 8:
        func_020c866c(p);
        break;
    }
}
