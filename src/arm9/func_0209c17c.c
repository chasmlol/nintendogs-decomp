#include "ctx.h"

extern u8 data_0212fd2c[];
extern int data_02159074;
extern void func_02072d28(u32 a, int b);
extern void func_0209ae94(int a);
extern void func_020707e4(int a, int b);
extern void func_02070b48(int *a);

void func_0209c17c(u8 *obj, s32 param_2, s32 *param_3)
{
    s16 i;
    s16 j;
    int *q;
    u8 *pbVar5;
    int *piVar4;

    *(s16 *)(obj + 0x24) = (s16)param_2;
    *(s16 *)(obj + 0x80) = -1;
    *(s32 *)(obj + 0x84) = 0;
    *(s16 *)(obj + 0x88) = 0;
    *(s16 *)(obj + 0x8a) = 16;
    *(s16 *)(obj + 0x2a) = 0;
    pbVar5 = data_0212fd2c + *(s16 *)((u8 *)param_3 + 0x66) * 2;
    i = 0;
    do {
        q = (int *)obj + i;
        q[0x14] = 0;
        q[0x1a] = 0x7fffffff;
        q[0x17] = 0;
        q[0x1d] = 0;
        i = i + 1;
    } while (i < 3);
    j = 0;
    do {
        ((int *)obj + j)[0xe] = 0;
        ((int *)obj + j)[0xb] = 0;
        j = j + 1;
    } while (j < 3);
    func_02072d28(*pbVar5, data_02159074);
    func_0209ae94(2);
    func_020707e4(param_2, *(s16 *)((u8 *)param_3 + 100));
    func_020707e4(param_2 + 4, (0x1000 - param_3[2]) * 0x800 >> 16);
    ((s32 *)obj)[0] = 3;
    j = 0;
    if (((s32 *)obj)[0] > 0) {
        piVar4 = (int *)obj + 6;
        do {
            func_02070b48(piVar4);
            *(s16 *)(obj + j * 2 + 0x12) = 0;
            *(u16 *)(obj + j * 2 + 0xc) = pbVar5[1];
            j = j + 1;
            piVar4 = piVar4 + 1;
        } while (j < ((s32 *)obj)[0]);
    }
    *(s16 *)(obj + 4) = 0;
    *(s16 *)(obj + 6) = 0;
    *(s16 *)(obj + 8) = 0;
    *(s16 *)(obj + 10) = 0;
    ((s32 *)obj)[0x11] = 0;
    ((s32 *)obj)[0x12] = 0;
    ((s32 *)obj)[0x13] = 0;
}
