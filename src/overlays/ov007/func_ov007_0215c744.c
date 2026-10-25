#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov007_02160d80;
extern u8 data_ov007_02160d84[];
extern void func_ov007_0215d4b4(void);
extern void func_ov007_0215d0ac(void);
extern void func_ov007_0215c4ac(void);
extern s32 func_020d6420(u8 *);
extern void func_020d68c8(void *, u8 *);
extern u16 func_020d5e60(void);
extern u8 func_020d5e70(void *, u32, u16 *);
extern s32 func_020d6358(void *, u8 *, s16 *);
extern u8 *func_020d6cb4(void);


void func_ov007_0215c744(u8 *param_1)
{
    u8 auStack_18[2];
    s16 sStack_16;
    u16 asStack_14[2];
    s32 iVar5;
    u32 uVar7;
    u32 uVar6;
    u16 uVar4;
    u16 v;
    u8 *piVar1;
    u32 six;
    u32 zero;

    iVar5 = func_020d6420(param_1);
    if (iVar5 == 0) {
        return;
    }
    iVar5 = *(s32 *)(data_ov007_02160d80 + 0x2c);
    if (iVar5 == 1) {
        goto b1;
    }
    if (iVar5 == 2) {
        goto b2;
    }
    if (iVar5 == 3) {
        goto b3;
    }
    return;
b1:
    func_020d68c8(func_ov007_0215d4b4, auStack_18);
    return;
b2:
    *(u16 *)(data_ov007_02160d80 + 0x44) = 0;
    *(u16 *)(data_ov007_02160d80 + 0x46) = 0x65;
    uVar7 = 1;
    uVar4 = func_020d5e60();
    uVar6 = uVar4;
    if (uVar6 == 0x8000) {
        v = 3;
        goto J;
    }
    if (uVar6 == 0) {
        v = 21;
        goto J;
    }
    if ((uVar6 & 1) == 0) {
        do {
            uVar7 = (u16)(uVar7 + 1);
            if (uVar7 > 0x10) {
                v = 22;
                goto J;
            }
        } while (((1u << (uVar7 - 1)) & uVar6) == 0);
    }
    func_020d5e70(func_ov007_0215d0ac, uVar7, asStack_14);
    v = asStack_14[0];
J:
    if (v == 22) {
        if (*(s32 *)(data_ov007_02160d80 + 0x34) == 1) {
            return;
        }
        *(s32 *)(data_ov007_02160d80 + 0x34) = 1;
        *(s16 *)(data_ov007_02160d80 + 0x30) = (s16)v;
        *(s16 *)(data_ov007_02160d80 + 0x32) = 0x1e;
        return;
    }
    if (v == 2) {
        return;
    }
    if (*(s32 *)(data_ov007_02160d80 + 0x34) == 1) {
        return;
    }
    *(s32 *)(data_ov007_02160d80 + 0x34) = 1;
    *(s16 *)(data_ov007_02160d80 + 0x30) = v;
    *(s16 *)(data_ov007_02160d80 + 0x32) = 0x1e;
    return;
b3:
    {
        u8 *pb = data_ov007_02160d84;
        six = 6;
        zero = 0;
        pb[0] = 3;
        pb[1] = (u8)six;
        pb[2] = (u8)zero;
    }
    iVar5 = func_020d6358(func_ov007_0215c4ac, data_ov007_02160d84, &sStack_16);
    if (iVar5 == 0) {
        return;
    }
    piVar1 = func_020d6cb4();
    *(u16 *)(data_ov007_02160d80 + 0x44) = *(u16 *)(piVar1 + 0x36);
    return;
}
