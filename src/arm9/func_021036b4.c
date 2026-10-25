#include "ctx.h"

extern u16 data_02147d38[];
extern u16 data_02147d4c[];
extern u8 data_02159010[];
extern void func_02112798(u32 a, u32 b, u32 c);
extern u32 func_02112dec(u32 a, u32 b);
extern void func_02112dc4(u32 a, u32 b, u32 c);
extern u32 func_0211c244(u32 a, u32 b);
extern u32 func_0205e47c(u32 a, u32 b);
extern s32 func_02112bf0(u32 a, u32 b);
extern void func_02112978(u32 a, u32 b, s16 c, u32 d);

typedef struct { u16 a[9]; } Tab9;
typedef struct { u16 a[10]; } Tab10;

void func_021036b4(u32 param_1)
{
    Tab9 t9;
    Tab10 t10;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    s32 iVar9;
    s32 iVar10;
    u32 uVar16;
    u16 v;
    s32 iVar11;

    t9 = *(Tab9 *)data_02147d38;
    t10 = *(Tab10 *)data_02147d4c;
    uVar16 = 1;
    iVar10 = 0;
    do {
        func_02112798(3, t9.a[iVar10], 1);
        iVar10 = iVar10 + 1;
    } while (iVar10 < 9);
    func_02112798(3, 0xc, 1);
    func_02112798(3, 0xd, 1);
    func_02112798(3, 0xb, 1);
    func_02112798(3, 1, 1);
    uVar6 = func_0211c244(param_1, 9);
    iVar10 = 0;
    if ((s32)uVar6 > 0) {
        do {
            uVar7 = func_0205e47c(param_1, uVar16);
            uVar8 = func_02112dec(3, t10.a[uVar7 % 10]);
            func_02112dc4(3, t9.a[iVar10], uVar8);
            uVar16 = uVar16 * 10;
            iVar10 = iVar10 + 1;
        } while (iVar10 < (s32)uVar6);
    }
    uVar16 = uVar6;
    if ((s32)uVar6 < 9) {
        v = t10.a[0];
        do {
            uVar8 = func_02112dec(3, v);
            func_02112dc4(3, t9.a[uVar16], uVar8);
            uVar16 = uVar16 + 1;
        } while ((s32)uVar16 < 9);
    }
    if ((s32)uVar6 < 3) {
        uVar6 = 3;
    }
    uVar16 = uVar6;
    for (iVar11 = uVar6; iVar11 < 9; iVar11++) {
        func_02112798(3, t9.a[iVar11], 0);
    }
    func_02112798(3, 0xd, 0);
    if (param_1 < 0x186a0) {
        func_02112798(3, 0xc, 0);
    }
    iVar10 = func_02112bf0(3, 10);
    iVar9 = func_02112bf0(3, t9.a[uVar16 - 1]);
    iVar10 = iVar10 - iVar9;
    iVar9 = 0;
    do {
        func_02112978(3, t9.a[iVar9], (s16)iVar10, 0);
        iVar9 = iVar9 + 1;
    } while (iVar9 < 9);
    func_02112978(3, 0xc, (s16)iVar10, 0);
    func_02112978(3, 0xd, (s16)iVar10, 0);
    func_02112978(3, 0xb, (s16)iVar10, 0);
    if (*(u16 *)(data_02159010 + 4) != 2 && *(u16 *)(data_02159010 + 4) != 5) {
        return;
    }
    func_02112978(3, 1, (s16)iVar10, 0);
}
