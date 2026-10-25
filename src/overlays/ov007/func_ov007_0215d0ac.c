#include "ctx.h"

extern u32 data_ov007_02160d80;
extern u32 func_ov007_0215d060;
extern u32 func_020d5e60(void);
extern u32 func_020d5e70(u32 f, u32 b, u16 *c);
extern void func_020d5e10(u32 a, u32 b);
extern u32 func_020d6ccc(void);
extern u32 func_020d5f68(void);
extern u32 func_020d6024(u32 f, s16 *p);

u32 func_ov007_0215d0ac(u16 *param_1)
{
    u8 *P;
    u32 uVar11;
    u32 r;
    u32 ret;
    u16 local_10;
    s16 asStack_e[3];
    u16 sVar1;
    u16 uVar2;
    u16 p5;
    u32 uVar7;
    u8 *iVar6;

    sVar1 = param_1[1];
    if (sVar1 != 0) {
        uVar2 = param_1[0];
        P = *(u8 **)&data_ov007_02160d80;
        uVar7 = *(u32 *)(P + 0x34);
        if (uVar7 != 1) {
            *(u32 *)(P + 0x34) = 1;
            P = *(u8 **)&data_ov007_02160d80;
            *(u16 *)(P + 0x30) = sVar1;
            P = *(u8 **)&data_ov007_02160d80;
            *(u16 *)(P + 0x32) = uVar2;
            return (u32)P;
        }
        return uVar7;
    }
    p5 = param_1[5];
    P = *(u8 **)&data_ov007_02160d80;
    sVar1 = param_1[4];
    if (*(u16 *)(P + 0x46) > p5) {
        *(u16 *)(P + 0x46) = p5;
        *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x44) = sVar1;
    }
    uVar11 = (u16)(sVar1 + 1);
    r = func_020d5e60();
    ret = r;
    if (r == 0x8000) {
        uVar11 = 3;
    } else if (r == 0) {
        uVar11 = 21;
    } else {
        if (((1u << (uVar11 - 1)) & r) != 0) {
            goto CALLF;
        }
LOOPB:
        uVar11 = (u16)(uVar11 + 1);
        if (uVar11 > 16) {
            uVar11 = 22;
            goto AFTER;
        }
        if (((1u << (uVar11 - 1)) & r) == 0) {
            goto LOOPB;
        }
CALLF:
        ret = func_020d5e70((u32)&func_ov007_0215d0ac, uVar11, &local_10);
        uVar11 = local_10;
    }
AFTER:
    if (uVar11 == 22) {
        func_020d5e10(*(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x44), *(u32 *)*(u8 **)&data_ov007_02160d80);
        if (*(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x48) == 1) {
            iVar6 = (u8 *)func_020d6ccc();
            uVar7 = func_020d5f68();
            *(s16 *)(iVar6 + 0x18) = (s16)uVar7;
        }
        return func_020d6024((u32)&func_ov007_0215d060, asStack_e);
    }
    if (uVar11 == 2) {
        return ret;
    }
    P = *(u8 **)&data_ov007_02160d80;
    if (*(u32 *)(P + 0x34) == 1) {
        return (u32)&data_ov007_02160d80;
    }
    *(u32 *)(P + 0x34) = 1;
    *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x30) = (u16)uVar11;
    P = *(u8 **)&data_ov007_02160d80;
    *(u16 *)(P + 0x32) = 30;
    return (u32)P;
}
