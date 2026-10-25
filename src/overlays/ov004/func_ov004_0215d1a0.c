#include "ctx.h"
#pragma opt_strength_reduction off

extern u8 *data_ov004_02170320;
extern u8 data_ov004_0216fefc[];
extern u8 data_02159424[];
extern u8 data_ov004_0216febc[];
extern void func_0210b614(s32 a, s32 b, void *c, void *d, int e, int f);

typedef struct { u32 w[4]; } T16;

void func_ov004_0215d1a0(void)
{
    s32 i;
    s32 local_48[4];
    s32 local_38[4];
    u8 *P;
    u8 *B;
    s32 cVar1;
    s32 iVar8;
    u32 uVar9;

    i = 0;
    do {
        P = data_ov004_02170320;
        if (*(s8 *)(*(u8 **)(P + 0x36c4) + i + 0x2270) != -1) {
            *(T16 *)local_48 = *(T16 *)data_ov004_0216fefc;
            uVar9 = 0;
            if (*(s32 *)(P + 0xc) != 0) {
                uVar9 = 1;
            }
            B = *(u8 * volatile *)&data_ov004_02170320;
            B = B + 0x3000;
            ((s16 *)local_48)[3] = (s16)(((*(u8 *)(*(u8 **)(B + 0x6c4) + i * 2 + 0x2268)) * 8) - *(s16 *)(*(u8 **)(B + 0x6c4) + 2) + 4);
            ((s16 *)local_48)[4] = (s16)(((*(u8 *)(*(u8 **)(B + 0x6c4) + (u32)i * 2 + 0x2269)) * 8) - *(s16 *)(*(u8 **)(B + 0x6c4) + 4) + 4);
            if (*(s8 *)(*(u8 **)(B + 0x6c4) + i + 0x2270) == 0) {
                uVar9 = 2;
            }
            func_0210b614(*(s32 *)((u8 *)data_ov004_02170320 + 0x33d8), *(s32 *)((u8 *)data_ov004_02170320 + 0x33d4), *(u16 **)(*(u8 **)data_02159424 + 0x10), local_48, 0, uVar9);
        }
        i = i + 1;
    } while (i < 4);
    i = 0;
    do {
        P = data_ov004_02170320;
        if (*(s8 *)(*(u8 **)(P + 0x36c4) + i + 0x2285) != -1) {
            *(T16 *)local_38 = *(T16 *)data_ov004_0216febc;
            iVar8 = 2;
            ((s16 *)local_38)[3] = (s16)(((*(u8 *)(*(u8 **)(P + 0x36c4) + (u32)i * 2 + 0x2275)) * 8) - *(s16 *)(*(u8 **)(P + 0x36c4) + 2) + 4);
            ((s16 *)local_38)[4] = (s16)(((*(u8 *)(*(u8 **)(P + 0x36c4) + (u32)i * 2 + 0x2276)) * 8) - *(s16 *)(*(u8 **)(P + 0x36c4) + 4) + 4);
            cVar1 = *(s8 *)(*(u8 **)(P + 0x36c4) + i + 0x228d);
            if (cVar1 != 0) {
                if (cVar1 == 2) {
                    iVar8 = 3;
                }
                func_0210b614(*(s32 *)((u8 *)data_ov004_02170320 + 0x33d8), *(s32 *)((u8 *)data_ov004_02170320 + 0x33d4), *(u16 **)(*(u8 **)data_02159424 + 0x10), local_38, 0, iVar8);
            }
        }
        i = i + 1;
    } while (i < 8);
}
