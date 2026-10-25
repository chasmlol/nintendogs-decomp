#include "ctx.h"
#pragma opt_propagation off

extern u8 data_0214f004[];
extern s16 data_0214dcdc[];
extern u8 *data_0215be48;

s32 func_02112320(s32 a, s32 b, s32 c);
s32 func_01ffdb08(s32 a);
void func_020a1a40(s32 a);
void func_02112798(s32 a, s32 b, s32 c);
void func_02112978(s32 a, s32 b, s32 c, s32 d);
void func_02108e24(s32 a);
void func_02107ca0(s32 a);
void func_020bc004(s32 a);
void func_02107d9c(s32 a);

void func_0212018c(s32 *param_1)
{
    int iVar4;
    s16 *psVar5;

    psVar5 = (s16 *)((u8 *)param_1 + 0x1ce8);
    switch (param_1[1]) {
    case 0: {
        s32 bVar2;
        u32 bVar1;
        if (*(s32 *)((u8 *)data_0215be48 + 0x48b8) == 1) {
            u32 bVar1;
            s32 bVar2;
            param_1[1] = 3;
            bVar1 = data_0214f004[1];
            bVar2 = data_0214f004[0];
            *(u16 *)((u8 *)param_1 + 0x1c18) = bVar2;
            *(u16 *)((u8 *)param_1 + 0x1c1a) = bVar1;
            return;
        }
        if (*(s32 *)((u8 *)data_0215be48 + 0x4860) == 0) {
            return;
        }
        bVar2 = data_0214f004[0];
        bVar1 = data_0214f004[1];
        iVar4 = func_02112320(2, (s32)bVar2, bVar1);
        if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
            return;
        }
        *psVar5 = -1;
        switch (iVar4) {
        case 0:
            if (func_01ffdb08(0) != 0) {
                *psVar5 = 0;
            }
            break;
        case 1:
            if (func_01ffdb08(1) != 0) {
                *psVar5 = 1;
            }
            break;
        case 2:
            if (func_01ffdb08(2) != 0) {
                *psVar5 = 2;
            }
            break;
        }
        if (*psVar5 < 0) {
            return;
        }
        param_1[0] = 0;
        param_1[1] = 1;
        func_020a1a40(3);
        func_02112798(2, 0x12, 1);
        func_02112798(2, (u16)(*psVar5 + 3), 0);
        func_02112798(2, (u16)(*psVar5 + 6), 1);
        func_02112978(2, 0x12, data_0214dcdc[*psVar5], 0);
        func_02112978(2, (u16)(*psVar5 + 9), 2, 2);
        func_02112978(2, (u16)(*psVar5 * 2 + 12), 2, 2);
        func_02112978(2, (u16)(*psVar5 * 2 + 13), 2, 2);
        *(u16 *)((u8 *)param_1 + 0x1c18) = bVar2;
        *(u16 *)((u8 *)param_1 + 0x1c1a) = (u16)bVar1;
        func_02108e24(0);
        return;
    }
    case 1:
        param_1[0] += 1;
        if (10 >= param_1[0]) {
            return;
        }
        param_1[0] = 0;
        param_1[1] = 2;
        func_02112798(2, 0x12, 0);
        func_02112798(2, (u16)(*psVar5 + 3), 1);
        func_02112798(2, (u16)(*psVar5 + 6), 0);
        func_02112978(2, (u16)(*psVar5 + 9), 0, 0);
        func_02112978(2, (u16)(*psVar5 * 2 + 12), 0, 0);
        func_02112978(2, (u16)(*psVar5 * 2 + 13), 0, 0);
        return;
    case 2:
        param_1[0] += 1;
        if (param_1[0] <= 10) {
            return;
        }
        func_02107ca0(1);
        func_020bc004(*psVar5);
        return;
    case 3:
        if (*(s32 *)((u8 *)data_0215be48 + 0x48bc) != 1) {
            return;
        }
        func_02107d9c(4);
        break;
    }
}
