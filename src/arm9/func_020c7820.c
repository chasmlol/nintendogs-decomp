#include "ctx.h"

typedef struct { s32 a, b, c; } T3;

void func_02067e68(u8 *a, s32 *b, u8 *c);
void func_0209d430(u8 *a, u32 b, s32 c);

void func_020c7820(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4, s32 param_5)
{
    s32 local_20[3];
    s32 iVar2;
    s32 iVar3;
    s64 lVar1;

    *(T3 *)local_20 = *(T3 *)param_2;
    if (local_20[0] > 0x333) local_20[0] = 0x333;
    if (local_20[1] > 0x333) local_20[1] = 0x333;
    if (local_20[2] > 0x333) local_20[2] = 0x333;
    if (local_20[0] < -0x333) local_20[0] = -0x333;
    if (local_20[1] < -0x333) local_20[1] = -0x333;
    if (local_20[2] < -0x333) local_20[2] = -0x333;
    func_02067e68(param_1 + 0xbc, local_20, param_1 + 0xbc);
    iVar3 = *(s32 *)(param_1 + 0xb4);
    if (iVar3 >= 0) {
        return;
    }
    if (param_5 >= 0) {
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        func_0209d430(param_1 + 400, 0, iVar3);
    }
    iVar2 = *(s32 *)(param_1 + 0xb4);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 0x29) {
        *(s32 *)(param_1 + 0xb4) = 0;
    } else {
        lVar1 = (s64)iVar2 * (s64)param_3 + 0x800;
        *(u32 *)(param_1 + 0xb4) = -(u32)((u64)lVar1 >> 12);
    }
    iVar2 = *(s32 *)(param_1 + 0xb0);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 0x29) {
        *(s32 *)(param_1 + 0xb0) = 0;
    } else {
        lVar1 = (s64)iVar2 * (s64)param_4 + 0x800;
        *(u32 *)(param_1 + 0xb0) = (u32)((u64)lVar1 >> 12);
    }
    iVar2 = *(s32 *)(param_1 + 0xb8);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 0x29) {
        *(s32 *)(param_1 + 0xb8) = 0;
        return;
    }
    lVar1 = (s64)iVar2 * (s64)param_4 + 0x800;
    *(u32 *)(param_1 + 0xb8) = (u32)((u64)lVar1 >> 12);
}
