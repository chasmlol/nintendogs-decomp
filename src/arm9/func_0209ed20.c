#include "ctx.h"

extern int data_02159198;
extern void func_02070c18(int a, int b);
extern void func_02070ac8(int *a, int b, int c);

u32 func_0209ed20(int param_1)
{
    int *piVar3;
    int *pb;
    s32 iVar2;
    int iVar5;
    u16 uVar1;
    u32 k;
    s32 z;
    s32 hdr;
    s32 c100;

    piVar3 = (int *)&data_02159198;
    if (piVar3[0xb] != 0) {
        func_02070c18((int)(piVar3 + 1), param_1);
        z = 0;
        asm { mov pb, piVar3 }
        piVar3[0xb] = z;

        hdr = pb[0];
        asm { mov c100, #100 }
        *(u16 *)((int)pb + 0xe) = c100;
        iVar5 = 0x3c;
        if (hdr != 0) {
            if (pb[7] != 0) {
                iVar5 = (int)*(u16 *)((int)pb + 0x1a);
                uVar1 = *(u16 *)(pb + 6);
                *(u16 *)(pb + 6) = z;
                pb[7] = z;
                iVar5 = iVar5 - (int)uVar1;
            }
            iVar2 = *(s16 *)((u8 *)pb + 12) * 100;
            func_02070ac8(pb, iVar2 / 100, iVar5);
        }
        return 1;
    }
    return 0;
}
