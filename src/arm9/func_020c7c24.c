#include "ctx.h"

typedef struct { s32 a, b, c; } T3;

void func_02067e68(u8 *a, s32 *b, u8 *c);
s32 func_01ffdb08(s32 a);
void func_020c7ec8(s32 a, u8 *p);
void func_0209d430(u8 *a, u32 b, s32 c);

void func_020c7c24(u8 *param_1, s32 *param_2, u32 param_3)
{
    s32 local_28[3];
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    s16 idx;

    *(T3 *)local_28 = *(T3 *)param_2;
    if (local_28[0] > 0x333) local_28[0] = 0x333;
    if (local_28[1] > 0x333) local_28[1] = 0x333;
    if (local_28[2] > 0x333) local_28[2] = 0x333;
    if (local_28[0] < -0x333) local_28[0] = -0x333;
    if (local_28[1] < -0x333) local_28[1] = -0x333;
    if (local_28[2] < -0x333) local_28[2] = -0x333;
    func_02067e68(param_1 + 0xbc, local_28, param_1 + 0xbc);
    idx = 0;
    do {
        if ((*(u32 *)(param_1 + 0x16c) & ((u32)1 << (idx + 3))) != 0 &&
            (iVar1 = func_01ffdb08(idx)) != 0) {
            func_020c7ec8(iVar1, param_1);
        }
        idx = (s16)(idx + 1);
    } while (idx < 3);
    if (*(u16 *)(param_1 + 0xa2) == 0) {
        *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + (param_2[0] << param_3);
        *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + (param_2[2] << param_3);
    }
    if (*(s32 *)(param_1 + 0xb0) > 0x99a) *(s32 *)(param_1 + 0xb0) = 0x99a;
    if (*(s32 *)(param_1 + 0xb4) > 0x99a) *(s32 *)(param_1 + 0xb4) = 0x99a;
    if (*(s32 *)(param_1 + 0xb8) > 0x99a) *(s32 *)(param_1 + 0xb8) = 0x99a;
    if (*(s32 *)(param_1 + 0xb0) < -0x99a) *(s32 *)(param_1 + 0xb0) = -0x99a;
    if (*(s32 *)(param_1 + 0xb4) < -0x99a) *(s32 *)(param_1 + 0xb4) = -0x99a;
    if (*(s32 *)(param_1 + 0xb8) < -0x99a) *(s32 *)(param_1 + 0xb8) = -0x99a;
    if (*(s16 *)(param_1 + 0x90) == 1) {
        iVar3 = *(s32 *)(param_1 + 0xb4);
        iVar1 = *(s32 *)(param_1 + 0xb0);
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        if (iVar1 <= 0) {
            iVar1 = -iVar1;
        }
        iVar2 = *(s32 *)(param_1 + 0xb8);
        if (iVar2 <= 0) {
            iVar2 = -iVar2;
        }
        func_0209d430(param_1 + 400, 2, iVar1 + iVar3 + iVar2);
    }
}
