#include "ctx.h"

extern u32 data_02159060;
extern u32 data_0215be48;
extern u8 data_0214f004[];

extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_021210fc(u32 *p);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_021210c8(u32 *p, s32 a);
extern s32 func_0212109c(u32 *p, s32 a);
extern void func_020a1a40(s32 a);
extern u32 func_02112dec(s32 a, s32 b);
extern void func_02112dc4(s32 a, s32 b, u32 c);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02108e24(s32 a);
extern void func_02107ca0(s32 a);
extern u32 func_02080858(void);
extern void func_0209ad58(s32 a);
extern void func_021092b8(void);
extern void func_02107ccc(void);
extern void func_02107c90(void);
extern void func_02107c80(void);

#define PA (*(u8 **)&data_02159060)
#define PB (*(u8 **)&data_0215be48)

void func_0211eee4(u32 *param_1)
{
    u32 *piVar11;
    u16 bVar3;
    s32 bVar2;
    s32 iVar9;
    u32 v;
    s16 h1;
    int iVar7;
    u16 bVar5;
    s32 iVar6;
    int h2;

    piVar11 = 0x730 + param_1;
    switch (param_1[0x24e]) {
    case 0:
        if (*(s32 *)(PA + 0xa4) == 0) {
            return;
        }
        func_02097b94(8, 0x2580, 0, 0, 1);
        param_1[0x24e] = 5;
        return;
    case 1:
        func_021210fc(param_1);
        if (*(s32 *)(PB + 0x48b8) == 1) {
            {
                u32 q1 = *(vu8 *)(data_0214f004 + 1);
                u32 q0 = *(vu8 *)data_0214f004;
                *(u16 *)((u8 *)param_1 + 0x1c18) = q0;
                *(u16 *)((u8 *)param_1 + 0x1c1a) = q1;
            }
            if (1 != piVar11[0]) {
                param_1[0x24e] = 4;
                return;
            }
            func_02097b94(8, 0x2582, 0, 0, 0);
            param_1[0x24e] = 3;
            return;
        }
        if (*(s32 *)(0x4860 + PB) == 0) {
            return;
        }
        bVar3 = data_0214f004[0];
        bVar2 = data_0214f004[1];
        iVar6 = func_02112320(2, bVar3, bVar2);
        iVar9 = -1;
        if ((*(u16 *)(2 + data_0214f004) & 2) == 0) {
            return;
        }
        switch (iVar6) {
        case 3:
            iVar9 = 0;
            break;
        case 4:
            iVar9 = 1;
            break;
        case 5:
            iVar9 = 2;
            break;
        }
        if (iVar9 < 0) {
            return;
        }
        iVar6 = func_021210c8(param_1, iVar9);
        if (iVar6 < 0) {
            return;
        }
        if (0 > iVar6 || 70 <= iVar6) {
            iVar6 = 0;
        }
        iVar7 = func_0212109c(param_1, iVar9);
        func_020a1a40(0x21);
        {
            u32 uVar8 = func_02112dec(2, 0x19);
            func_02112dc4(2, iVar7 + 0x14, uVar8);
        }
        func_02112978(2, *(u16 *)((u8 *)param_1 + 0x93c), 0, (s16)(48 * iVar9));
        func_02112798(2, *(u16 *)((u8 *)param_1 + 0x93c), 1);
        *(u16 *)((u8 *)param_1 + 0x1c18) = bVar3;
        *(u16 *)((u8 *)param_1 + 0x1c1a) = bVar2;
        func_02108e24(0);
        h1 = *(vu16 *)((u8 *)param_1 + iVar6 * 32 + 0x68);
        h2 = *(vu16 *)((u8 *)param_1 + iVar6 * 32 + 0x6a);
        *(u16 *)((u8 *)piVar11 + 8) = h1;
        *(u16 *)((u8 *)piVar11 + 10) = h2;
        piVar11[3] = param_1[0x12];
        param_1[0x24e] = 2;
        return;
    case 2:
        param_1[0x24b] = param_1[0x24b] + 1;
        if ((s32)param_1[0x24b] <= 10) {
            return;
        }
        func_02112798(2, *(u16 *)((u8 *)param_1 + 0x93c), 0);
        param_1[0x24b] = 0;
        param_1[0x24e] = -1;
        switch (piVar11[0]) {
        case 0:
        case 1:
        case 2:
            func_02107ca0(0);
            return;
        case 3:
            func_02107ca0(1);
            return;
        case 4:
            {
                u32 x = func_02080858();
                u16 a = (u16)(0x10dcd * x + 1);
                s32 c;
                s32 base;
                base = (u16)(((u32)a * 3) >> 16);
                c = 0;
                do {
                    s32 iv = base + c;
                    *(s16 *)((u8 *)param_1 + (u32)c * 2 + 0x1cea) = (s16)(iv % 3);
                    c = c + 1;
                } while (c < 3);
            }
            func_02107c80();
            return;
        default:
            goto done;
        }
    case 3:
        v = *(s16 *)(0x9a + PA);
        switch (v) {
        case 0:
            func_0209ad58(0x1e);
            piVar11[6] = 1;
            param_1[0x24e] = -1;
            return;
        case 1:
            func_021092b8();
            param_1[0x24e] = 1;
            return;
        }
        return;
    case 4:
        if (*(s32 *)(PB + 0x48bc) != 1) {
            return;
        }
        switch (piVar11[0]) {
        case 2:
            func_02107ccc();
            return;
        case 4:
            func_02107c90();
            return;
        default:
            func_0209ad58(0x1e);
            piVar11[6] = 1;
            return;
        }
    case 5:
        bVar5 = 1;
        v = *(s16 *)(0x6c + PA);
        if (1 != v) {
            if (v != 8) {
                bVar5 = 0;
            }
        }
        if (bVar5) {
            return;
        }
        func_02108e24(1);
        param_1[0x24e] = 1;
        break;
    default:
        break;
    }
done:
    return;
}
