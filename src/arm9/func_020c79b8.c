#include "ctx.h"

typedef struct { s32 a, b, c; } T3;

extern s64 data_02126728;

void func_02067e68(u8 *a, s32 *b, u8 *c);
s32 func_01ffdb08(s32 a);
void func_020c7ec8(s32 a, u8 *p);
s32 func_02006a30(s32 *a, s32 *b);
void func_020bfa1c(u8 *a, s32 *b, s32 c, u8 *d);
void func_0209d430(u8 *a, u32 b, s32 c);

void func_020c79b8(u8 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar5;
    s32 iVar2;
    s32 iVar4;
    s64 lVar1;
    s32 local_30[3];
    s32 aiStack_24[3];

    *(T3 *)local_30 = *(T3 *)param_2;
    if (local_30[0] > 0x333) local_30[0] = 0x333;
    if (local_30[1] > 0x333) local_30[1] = 0x333;
    if (local_30[2] > 0x333) local_30[2] = 0x333;
    if (-0x333 > local_30[0]) local_30[0] = -0x333;
    if (local_30[1] < -0x333) local_30[1] = -0x333;
    if (local_30[2] < -0x333) local_30[2] = -0x333;
    func_02067e68(0xbc + param_1, local_30, param_1 + 0xbc);
    iVar5 = 0;
    do {
        if ((*(u32 *)(param_1 + 0x16c) & (1 << (iVar5 + 3))) != 0) {
            iVar2 = func_01ffdb08(iVar5);
            if (iVar2 != 0) {
                func_020c7ec8(iVar2, param_1);
            }
        }
        iVar5 = (s16)(iVar5 + 1);
    } while (3 > iVar5);
    *(T3 *)local_30 = *(T3 *)param_2;
    lVar1 = (s64)local_30[0] * (s64)local_30[0] + (s64)local_30[1] * (s64)local_30[1] + (s64)local_30[2] * (s64)local_30[2];
    if (lVar1 >= data_02126728) {
        iVar5 = func_02006a30(local_30, aiStack_24);
    } else {
        iVar5 = 0;
    }
    if (iVar5 != 0) {
        func_020bfa1c(param_1 + 0xb0, aiStack_24, param_3, param_1 + 0xb0);
    }
    if (0 < param_2[0]) {
        *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + 0x52;
    } else {
        *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) - 0x52;
    }
    if (param_2[2] > 0) {
        *(s32 *)(0xb8 + param_1) = *(s32 *)(param_1 + 0xb8) + 0x52;
    } else {
        *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) - 0x52;
    }
    *(s32 *)(0xb0 + param_1) = *(s32 *)(param_1 + 0xb0) + (param_2[0] >> 3);
    *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + (param_2[2] >> 3);
    if (*(s32 *)(param_1 + 0xb0) > 0x99a) *(s32 *)(param_1 + 0xb0) = 0x99a;
    if (*(s32 *)(param_1 + 0xb4) > 0x99a) *(s32 *)(0xb4 + param_1) = 0x99a;
    if (*(s32 *)(param_1 + 0xb8) > 0x99a) *(s32 *)(param_1 + 0xb8) = 0x99a;
    if (*(s32 *)(0xb0 + param_1) < -0x99a) *(s32 *)(param_1 + 0xb0) = -0x99a;
    if (*(s32 *)(param_1 + 0xb4) < -0x99a) *(s32 *)(param_1 + 0xb4) = -0x99a;
    if (*(s32 *)(0xb8 + param_1) < -0x99a) *(s32 *)(0xb8 + param_1) = -0x99a;
    if (*(s16 *)(param_1 + 0x90) == 1) {
        iVar2 = *(s32 *)(param_1 + 0xb4);
        iVar5 = *(s32 *)(0xb0 + param_1);
        if (0 >= iVar2) {
            iVar2 = -iVar2;
        }
        if (iVar5 <= 0) {
            iVar5 = -iVar5;
        }
        iVar4 = *(s32 *)(param_1 + 0xb8);
        if (0 >= iVar4) {
            iVar4 = -iVar4;
        }
        func_0209d430(param_1 + 400, 2, iVar4 + (iVar5 + iVar2));
    }
}
