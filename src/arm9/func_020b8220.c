#include "ctx.h"
#pragma optimization_level 2

extern u8 *data_02159468;
extern u8 *data_02159060;
extern u8 *data_0215942c;
extern u8 *data_02159460;

extern s32 func_02042cc4(void);
extern u8 *func_ov004_0215c800(void);
extern void func_ov004_0215c6e8(void);
extern u8 *func_020d8aa4(s32 a);
extern void func_020d8ae0(s32 a);
extern void func_020af7f4(u8 *p);
extern void func_0209eeec(s32 a, s32 b);
extern void func_02097b94(s32 a, s32 b, s32 c, u32 d, s32 e);
extern void func_020b8edc(void);
extern void func_020ad7c8(u8 *p, s32 a);
extern void func_02115080(void);
extern void func_020ad6fc(u8 *p, s32 a);
extern void func_0204294c(void);
extern void func_020942c0(u8 *p, s32 a);
extern s32 func_020bc3c4(void);
extern void func_020cf998(s32 a, s32 b);

void func_020b8220(u8 *param_1)
{
    s32 iVar5;
    s32 idx;
    u8 *pbVar4;
    u8 *q;
    u32 t0;
    u32 t1;

    idx = *(s16 *)(param_1 + 0x7a);
    if (idx < 0) goto Z;
    if (*(s16 *)(data_02159468 + 0x20) > idx) goto L;
Z:
    iVar5 = 0;
    goto SW;
L:
    iVar5 = *(s32 *)(data_02159468 + idx * 4 + 4);
SW:
    switch (*(s16 *)(param_1 + 0x102)) {
    case 0:
        iVar5 = func_02042cc4();
        if (iVar5 == 0) {
            return;
        }
        *(s16 *)(param_1 + 0x102) = 1;
        if (*(u16 *)data_0215942c != 11) {
            func_02097b94(2, 0xce5, 0, (u32)func_020b8edc, 0);
            return;
        }
        func_02097b94(2, 0xcfa, 0, (u32)func_020b8edc, 0);
        return;
    case 1:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        switch (*(u16 *)data_0215942c) {
        case 9:
            pbVar4 = func_ov004_0215c800();
            t1 = pbVar4[1];
            t0 = pbVar4[0];
            *(u16 *)(param_1 + 0x104) = t0;
            *(u16 *)(param_1 + 0x106) = t1;
            func_ov004_0215c6e8();
            break;
        case 11:
            q = data_02159460;
            q = q + 0x2600;
            t0 = *(u16 *)(q + 12);
            t1 = *(u16 *)(q + 14);
            *(u16 *)(param_1 + 0x104) = t0;
            *(u16 *)(param_1 + 0x106) = t1;
            break;
        default:
            pbVar4 = func_020d8aa4(iVar5);
            t1 = pbVar4[1];
            t0 = pbVar4[0];
            *(u16 *)(param_1 + 0x104) = t0;
            *(u16 *)(param_1 + 0x106) = t1;
            break;
        }
        *(s16 *)(param_1 + 0x102) = 2;
        func_02097b94(2, 0xce7, 0, (u32)func_020b8edc, 0);
        func_020d8ae0(iVar5);
        func_020af7f4(param_1);
        func_0209eeec(29, 127);
        return;
    case 2:
        if (*(s32 *)(data_02159060 + 0xa4) != 0) {
            *(s16 *)(param_1 + 0x102) = 3;
        }
        return;
    case 3:
        if (*(u16 *)data_0215942c != 9) {
            func_020ad7c8(param_1, 2);
            func_02115080();
        } else {
            func_020ad7c8(param_1, 42);
        }
        func_020ad6fc(param_1, 0);
        func_0204294c();
        if (*(u16 *)data_0215942c != 11) {
            func_020942c0(param_1 + 0x104, 1);
        }
        *(s16 *)(param_1 + 0x104) = -1;
        *(s16 *)(param_1 + 0x106) = -1;
        if (*(u16 *)data_0215942c == 9) {
            return;
        }
        iVar5 = func_020bc3c4();
        func_020cf998(iVar5 + 136, 1);
        return;
    }
}
