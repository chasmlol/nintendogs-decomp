#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215be48;
extern u8 data_0214f004[];

extern void func_02107d50(u32 a);
extern void func_0209ad58(u32 a);
extern u32 func_02112320(u32 a, u32 b, u32 c);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_020a1a40(u32 a);
extern void func_02108e24(u32 a);

void func_021209b0(s32 *param_1)
{
    u32 bVar1, bVar2;
    s32 iVar5;
    s32 *p4 = (s32 *)((u8 *)param_1 + 0x1cc0);

    iVar5 = param_1[1];
    switch (iVar5) {
    case 0: {
        s32 bVar3 = 1;
        if (*(s16 *)(data_02159060 + 0x6c) != 1 && *(s16 *)(data_02159060 + 0x6c) != 8) {
            bVar3 = 0;
        }
        if (bVar3) {
            return;
        }
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            param_1[1] = 2;
            return;
        }
        if (*(s32 *)(data_0215be48 + 0x4860) == 0) {
            return;
        }
        bVar2 = data_0214f004[1];
        bVar1 = data_0214f004[0];
        iVar5 = func_02112320(2, bVar1, bVar2);
        param_1[2] = -1;
        if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
            return;
        }
        switch (iVar5) {
        case 1:
            param_1[2] = 0;
            *(u16 *)(param_1 + 3) = 0xf;
            break;
        case 3:
            param_1[2] = 1;
            *(u16 *)(param_1 + 3) = 0x11;
            break;
        case 4:
            param_1[2] = 2;
            *(u16 *)(param_1 + 3) = 0x12;
            break;
        case 0:
            param_1[2] = 3;
            *(u16 *)(param_1 + 3) = 0xe;
            break;
        case 2:
            param_1[2] = 4;
            *(u16 *)(param_1 + 3) = 0x10;
            break;
        case 5:
            param_1[2] = 5;
            *(u16 *)(param_1 + 3) = 0x13;
            break;
        case 6:
            param_1[2] = 6;
            *(u16 *)(param_1 + 3) = 0x14;
        }
        if (param_1[2] == -1) {
            return;
        }
        *(u16 *)(param_1 + 0x706) = bVar1;
        *(u16 *)((u8 *)param_1 + 0x1c1a) = bVar2;
        param_1[1] = 1;
        func_02112798(2, *(u16 *)(param_1 + 3), 1);
        func_020a1a40(0x17);
        func_02108e24(0);
    }
    break;
    case 1:
        param_1[0] = param_1[0] + 1;
        if (param_1[0] <= 10) {
            return;
        }
        param_1[0] = 0;
        param_1[1] = 0;
        func_02107d50(param_1[2]);
        break;
    case 2:
        if (*(s32 *)(data_0215be48 + 0x48bc) != 1) {
            return;
        }
        func_0209ad58(0x1e);
        p4[6] = 1;
        break;
    }
}
