#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0215be34;
extern u8 *data_0215be44;
extern s32 func_02044ca0(s32 v);
extern s32 func_020aaec4(s32 a, void *b, int c);
extern void func_02081104(s32 a, void *b);
extern u8 *func_0208122c(s32 a, int b, void *c);
extern void func_ov000_0215c1fc(void);
extern void func_020a0e04(int v);

void func_020f405c(void)
{
    s32 *piVar2;
    u32 iVar3;
    s32 iVar5;
    s32 v;
    s32 k;
    u8 *q;
    s32 x;
    s32 one;
    s32 unaff_r4;

    piVar2 = (s32 *)data_0215be34;
    if (piVar2 != 0) {
        unaff_r4 = *piVar2;
    } else {
        unaff_r4 = 0;
    }
    iVar3 = (s32)data_0215be44;
    if (*(s32 *)(iVar3 + 0x2c) == 0) {
        return;
    }
    x = *(s32 *)(iVar3 + 0xc);
    *(s32 *)(iVar3 + 0x1c) = *(s32 *)(iVar3 + 0x1c) - (s32)(((s64)x * 0x19a + 0x800) >> 12);
    iVar3 = (s32)data_0215be44;
    iVar5 = *(s32 *)(iVar3 + 0x2c);
    *(s32 *)(iVar5 + 0x20) = *(s32 *)(iVar3 + 0x1c) + *(s32 *)(*(s32 *)(*(s32 *)(iVar5 + 0x18)) + 4);
    iVar3 = (s32)data_0215be44;
    iVar5 = *(s32 *)(iVar3 + 0x3c);
    if (iVar5 != 0) {
        *(s32 *)(iVar5 + 0x20) = *(s32 *)(iVar3 + 0x1c) + *(s32 *)(*(s32 *)(*(s32 *)(iVar5 + 0x18)) + 4);
    }
    iVar3 = (s32)data_0215be44;
    if (*(s32 *)(iVar3 + 0x1c) < -0x1e000 && *(u8 *)(iVar3 + 0x42) == 0) {
        func_02081104(unaff_r4, *(void **)(iVar3 + 0x2c));
        *(s32 *)(data_0215be44 + 0x2c) = 0;
        q = *(u8 **)(data_0215be44 + 0x30);
        if (q != 0) {
            func_02081104(unaff_r4, q);
            *(s32 *)(data_0215be44 + 0x30) = 0;
        }
        q = *(u8 **)(data_0215be44 + 0x34);
        if (q != 0) {
            func_02081104(unaff_r4, q);
            *(s32 *)(data_0215be44 + 0x34) = 0;
        }
        q = *(u8 **)(data_0215be44 + 0x38);
        if (q != 0) {
            func_02081104(unaff_r4, q);
            *(s32 *)(data_0215be44 + 0x38) = 0;
        }
        q = *(u8 **)(data_0215be44 + 0x3c);
        if (q != 0) {
            func_02081104(unaff_r4, q);
            *(s32 *)(data_0215be44 + 0x3c) = 0;
        }
        return;
    }
    if (*(s16 *)(iVar3 + 0x40) == 0 && *(u8 *)(iVar3 + 0x42) == 0) {
        k = 0;
        one = 1;
        do {
            v = func_02044ca0(k);
            if (v != 0) {
                k = one;
            }
            k = (s16)(k + 1);
        } while (k < 1);
        iVar3 = func_020aaec4(v, (u8 *)(data_0215be44) + 0x1c, 0x1000);
        if (iVar3 != 0) {
            func_02081104((data_0215be34 != 0) ? *(s32 *)data_0215be34 : 0, *(void **)(data_0215be44 + 0x2c));
            *(s32 *)(data_0215be44 + 0x20) = 0;
            *(u8 **)(data_0215be44 + 0x2c) = func_0208122c(unaff_r4, 48, data_0215be44 + 0x1c);
            if (*(u8 **)(data_0215be44 + 0x2c) != 0) {
                *(s32 *)(*(u8 **)(data_0215be44 + 0x2c) + 0x54) = *(s16 *)(data_0215be44 + 0x28);
            }
            *(u8 **)(data_0215be44 + 0x30) = func_0208122c(unaff_r4, 49, data_0215be44 + 0x1c);
            *(u8 **)(data_0215be44 + 0x34) = func_0208122c(unaff_r4, 53, data_0215be44 + 0x1c);
            *(u8 **)(data_0215be44 + 0x38) = func_0208122c(unaff_r4, 54, data_0215be44 + 0x1c);
            q = *(u8 **)(data_0215be44 + 0x3c);
            if (q != 0) {
                func_02081104(unaff_r4, q);
                *(s32 *)(data_0215be44 + 0x3c) = 0;
            }
            func_ov000_0215c1fc();
            func_020a0e04(4);
            *(u8 *)((u8 *)(data_0215be44) + 0x42) = 1;
        }
    } else {
        *(s16 *)(iVar3 + 0x40) = *(volatile s16 *)(iVar3 + 0x40) - 1;
    }
    iVar3 = (s32)data_0215be44;
    if (*(s32 *)(iVar3 + 0x44) > 0) {
        *(s32 *)(iVar3 + 0x44) = *(s32 *)(iVar3 + 0x44) - 1;
        if (*(s32 *)(data_0215be44 + 0x44) == 0) {
            *(u8 **)(data_0215be44 + 0x3c) = func_0208122c(unaff_r4, 0x71, (u8 *)data_0215be44 + 0x1c);
        }
    }
}
