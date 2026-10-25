#include "ctx.h"

extern u32 data_021594d0;
extern u32 data_021594d0_unused;
extern s32 func_020d62e4(s32 a);
extern s32 func_020649d8(s32 a, s32 b, s32 c);
extern void func_020d3b50(void);
extern void func_020d3cf4(void);
extern void func_020d613c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, u16 *g);

void func_020d3db4(u16 *param_1)
{
    u16 sVar1;
    u16 uVar2;
    s32 iVar4;
    u8 *p;
    u8 *q;
    u16 asStack_c[2];

    iVar4 = func_020d62e4((s32)param_1);
    if (iVar4 != 0) {
        p = (u8 *)data_021594d0;
        iVar4 = *(s32 *)(p + 0x24);
        if (iVar4 == 1) goto g48;
        if (iVar4 == 2) goto g48;
        if (iVar4 == 3) goto g64;
        return;
g48:
        if (*(s16 *)(p + 0x30) == 0) {
            *(s16 *)(p + 0x30) = 1;
        }
        return;
g64:
        switch (param_1[4]) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            break;
        case 7:
            if (*(u32 *)(p + 0x18) != 0) {
                ((void (*)(u16 *))(*(u32 *)(p + 0x18)))(param_1);
            }
            if (*(s32 *)((u8 *)data_021594d0 + 0x20) == 3) {
                return;
            }
            iVar4 = func_020649d8(5, (s32)func_020d3b50, 0);
            asStack_c[0] = (s16)iVar4;
            if (asStack_c[0] != 0) {
                return;
            }
            q = (u8 *)data_021594d0;
            func_020d613c((s32)func_020d3cf4, *(s32 *)(q + 0x10), (u16)*(s32 *)(q + 0xc),
                          *(s32 *)(q + 0x8), (u16)*(s32 *)(q + 0x4), 0, asStack_c);
            return;
        case 8:
            break;
        case 9:
            if (*(s32 *)(p + 0x2c) == 1) {
                return;
            }
            *(s32 *)(p + 0x2c) = 1;
            *(s16 *)((u8 *)data_021594d0 + 0x28) = 0x14;
            *(u16 *)((u8 *)data_021594d0 + 0x2a) = 0xc;
            return;
        }
    } else {
        p = (u8 *)data_021594d0;
        if (*(s32 *)(p + 0x40) == 1) {
            if (*(s16 *)(p + 0x30) == 0) {
                *(s16 *)(p + 0x30) = 1;
            }
            return;
        }
        sVar1 = param_1[1];
        if (sVar1 == 11) {
            uVar2 = param_1[0];
            if (*(s32 *)(p + 0x2c) == 1) {
                return;
            }
            *(s32 *)(p + 0x2c) = 1;
            *(u16 *)((u8 *)data_021594d0 + 0x28) = sVar1;
            *(u16 *)((u8 *)data_021594d0 + 0x2a) = uVar2;
            return;
        }
        if (sVar1 == 12) {
            uVar2 = param_1[0];
            if (*(s32 *)(p + 0x2c) == 1) {
                return;
            }
            *(s32 *)(p + 0x2c) = 1;
            *(u16 *)((u8 *)data_021594d0 + 0x28) = sVar1;
            *(u16 *)((u8 *)data_021594d0 + 0x2a) = uVar2;
            return;
        }
        if (sVar1 != 1) {
            return;
        }
        uVar2 = param_1[0];
        if (*(s32 *)(p + 0x2c) == 1) {
            return;
        }
        *(s32 *)(p + 0x2c) = 1;
        *(u16 *)((u8 *)data_021594d0 + 0x28) = sVar1;
        *(u16 *)((u8 *)data_021594d0 + 0x2a) = uVar2;
    }
}
