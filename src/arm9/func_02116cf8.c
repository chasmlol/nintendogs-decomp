#include "ctx.h"

#pragma opt_common_subs off

typedef struct {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wc;
} Blk;

extern u8 *data_0215be48;
extern s32 func_01ffdb08(int a);
extern s32 func_02027708(int a);
extern s32 func_02044ccc(int a);
extern u32 func_02112854(int a, int b);
extern void func_0210f14c(int a, int b, int c, int d, int e, int f, int g, int h);
extern void *func_02006b78(int a);
extern s32 func_0210bda8(void);
extern void func_02112798(int a, int b, int c);

void func_02116cf8(void)
{
    u32 uVar2;
    int iVar1;
    int *piVar3;
    s32 uVar6;
    u32 uVar5;
    int iVar7;
    u32 uVar4;
    Blk *pb;

    iVar7 = 0;
    do {
        iVar1 = func_01ffdb08((s16)iVar7);
        if (iVar1 != 0) {
            iVar1 = func_02027708(iVar1);
            iVar1 = func_02044ccc(iVar1);
            uVar4 = (u16)(7 + iVar7);
            uVar2 = func_02112854(2, uVar4);
            func_0210f14c(2, uVar4, uVar2, *(s32 *)(iVar1 + 0x88), *(s32 *)(iVar1 + 0x8c), *(s32 *)(iVar1 + 0x90), 1, 1);
        }
        iVar7 += 1;
    } while (iVar7 < 3);
    pb = (Blk *)((u8 *)data_0215be48 + 0x1113c);
    piVar3 = (int *)func_02006b78(pb->wc);
    iVar7 = func_0210bda8();
    if (iVar7 != 0) {
        uVar4 = func_02112854(2, 0x10);
        uVar2 = func_02112854(2, 0x11);
        uVar5 = func_02112854(2, 0x12);
        uVar6 = func_02112854(2, 0x13);
        func_0210f14c(2, 0x10, uVar4, pb->w4, pb->w8, (int)piVar3, 0, 1);
        func_0210f14c(2, 0x11, uVar2, pb->w4, pb->w8, (int)piVar3, 1, 1);
        func_0210f14c(2, 0x12, uVar5, pb->w4, pb->w8, (int)piVar3, 2, 1);
        func_0210f14c(2, 0x13, uVar6, pb->w4, pb->w8, (int)piVar3, 3, 1);
        func_02112798(2, 0x10, 1);
        func_02112798(2, 0x11, 1);
        func_02112798(2, 0x12, 1);
        func_02112798(2, 0x13, 1);
        return;
    }
    {
        u32 uB;
        int k;

        uVar4 = func_02112854(2, 0x10);
        uB = func_02112854(2, 0x15);
        func_02112798(2, 0x10, 1);
        func_02112798(2, 0x11, 0);
        func_02112798(2, 0x12, 0);
        func_02112798(2, 0x13, 0);
        func_0210f14c(2, 0x10, uVar4, pb->w4, pb->w8, (int)piVar3, 0, 1);
        k = 0;
        do {
            func_0210f14c(2, (u16)(k + 0x15), uB, pb->w4, pb->w8, (int)piVar3, (u16)(k + 2), 0);
            k = k + 1;
        } while (10 > k);
        func_0210f14c(2, 0x2b, uB, pb->w4, pb->w8, (int)piVar3, 0xd, 0);
        func_0210f14c(2, 0x26, uB, pb->w4, pb->w8, (int)piVar3, 0xc, 0);
    }
}
