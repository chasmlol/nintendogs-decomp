#include "ctx.h"

extern u32 data_02159454;
extern u16 data_021425b4;
extern u16 data_021425b0;
extern u16 data_021425a4;
extern u16 data_021425c8;
extern u16 data_021425c4;
extern u16 data_021425c0;
extern u16 data_021425bc;
extern u16 data_021425b8;
extern u16 data_0214259c;
extern u16 data_021425a0;
extern u16 data_021425ac;
extern u16 data_021425a8;

extern s32 func_02067898(s32 a, s32 b);

#define TRI(a, b, c) ((u16)((a) | ((b) << 5) | ((c) << 10)))

#define T1() TRI(data_021425b4, data_021425b0, data_021425a4)
#define T2() TRI(data_021425c8, data_021425c4, data_021425c0)
#define T3() TRI(data_021425bc, data_021425b8, data_0214259c)
#define T4() TRI(data_021425a0, data_021425ac, data_021425a8)

void func_020b2918(s32 *param_1)
{
    s32 iVar13;

    param_1[0] = param_1[0] + *(s32 *)&data_02159454;
    if (param_1[0] >= 0x18000) {
        param_1[0] = param_1[0] - 0x18000;
    }
    iVar13 = param_1[0];
    if (iVar13 < 0x5000) {
        *(u16 *)(param_1 + 1) = T1();
        *(u16 *)((u8 *)param_1 + 6) = T1();
        param_1[2] = 0;
        *(u16 *)(param_1 + 4) = 3;
        return;
    }
    if (iVar13 < 0x5800) {
        *(u16 *)(param_1 + 1) = T1();
        *(u16 *)((u8 *)param_1 + 6) = T2();
        param_1[2] = func_02067898(iVar13 - 0x5000, 0x800);
        *(u16 *)(param_1 + 4) = 0;
        return;
    }
    if (iVar13 < 0x6800) {
        *(u16 *)(param_1 + 1) = T2();
        *(u16 *)((u8 *)param_1 + 6) = T2();
        param_1[2] = 0;
        *(u16 *)(param_1 + 4) = 0;
        return;
    }
    if (iVar13 < 0x7000) {
        *(u16 *)(param_1 + 1) = T2();
        *(u16 *)((u8 *)param_1 + 6) = T3();
        param_1[2] = func_02067898(iVar13 - 0x6800, 0x800);
        *(u16 *)(param_1 + 4) = 0;
        return;
    }
    if (iVar13 < 0x11000) {
        *(u16 *)(param_1 + 1) = T3();
        *(u16 *)((u8 *)param_1 + 6) = T3();
        param_1[2] = 0;
        *(u16 *)(param_1 + 4) = 1;
        return;
    }
    if (iVar13 < 0x11800) {
        *(u16 *)(param_1 + 1) = T3();
        *(u16 *)((u8 *)param_1 + 6) = T4();
        param_1[2] = func_02067898(iVar13 - 0x11000, 0x800);
        *(u16 *)(param_1 + 4) = 1;
        return;
    }
    if (iVar13 < 0x12800) {
        *(u16 *)(param_1 + 1) = T4();
        *(u16 *)((u8 *)param_1 + 6) = T4();
        param_1[2] = 0;
        *(u16 *)(param_1 + 4) = 2;
        return;
    }
    if (iVar13 < 0x13000) {
        *(u16 *)(param_1 + 1) = T4();
        *(u16 *)((u8 *)param_1 + 6) = T1();
        param_1[2] = func_02067898(iVar13 - 0x12800, 0x800);
        *(u16 *)(param_1 + 4) = 2;
        return;
    }
    *(u16 *)(param_1 + 1) = T1();
    *(u16 *)((u8 *)param_1 + 6) = T1();
    param_1[2] = 0;
    *(u16 *)(param_1 + 4) = 3;
}
