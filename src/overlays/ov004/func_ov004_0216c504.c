#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u16 h[5]; } T5;

extern u8 data_ov004_02170250[];
extern u8 data_0214f464[];
extern u8 data_02159428[];
extern s16 data_02126868[];

s32 func_0203b3cc(u8 *p);
u32 func_02028124(u8 *p);
u32 func_02028130(u8 *p);
s16 func_02068078(s32 a, s32 b);
s32 func_0203541c(u8 *p);

static inline s32 Rnd12(void)
{
    u32 *pg;
    u32 v;
    pg = *(u32 **)data_0214f464;
    v = *pg * 0x10dcd + 1;
    *pg = v;
    return (s16)(u16)(v & 0xfff);
}


void func_ov004_0216c504(u8 *param_1)
{
    u16 local_30[5];
    u8 *pP;
    s32 iVar9;
    u32 uVar8;
    u32 uVar11;
    s64 lVar1;
    s64 lVar2;
    s64 lVar3;
    s32 iVar5;
    s16 sVar7;
    s32 iVar10;
    s32 t26c;
    s64 w64;
    s64 c64;
    s32 j;

    *(T5 *)local_30 = *(T5 *)data_ov004_02170250;
    iVar10 = *(s8 *)(param_1 + 0x8e);
    if (func_0203b3cc(param_1) != 0) {
        switch (iVar10) {
        case 0:
        case 1:
        case 2:
            iVar10 = 1;
            break;
        case 3:
        case 4:
            iVar10 = 4;
            break;
        default:
            break;
        }
    }
    pP = *(u8 **)data_0214f464;
    uVar8 = *(u32 *)pP * 0x10dcd + 1;
    *(u32 *)pP = uVar8;
    uVar11 = local_30[iVar10];
    if ((u16)((uVar11 * (u16)uVar8) >> 16) == 0) {
        *(u8 *)(param_1 + 147) = (u8)(3);
    }
    iVar9 = Rnd12();
    *(u32 *)(param_1 + 0x26c) = (u32)(((s64)iVar9 * (u32)0x5000 + 0x800) >> 12) + 0x5000;
    switch (*(s16 *)(param_1 + 0x152)) {
    default:
        uVar8 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)(s32)uVar8 * (u32)0x130 + 0x800) >> 12);
        break;
    case 0x12:
        uVar8 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)(s32)uVar8 * (u32)0x220 + 0x800) >> 12);
        break;
    case 0x13:
        t26c = *(s32 *)(param_1 + 0x26c);
        *(s32 *)(param_1 + 0x26c) = t26c + 0xa000;
        uVar8 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)(s32)uVar8 * (u32)800 + 0x800) >> 12);
        break;
    case 0x14:
        *(u8 *)(param_1 + 147) = (u8)(0);
        t26c = *(s32 *)(param_1 + 0x26c);
        *(s32 *)(param_1 + 0x26c) = t26c + 0x14000;
        uVar8 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)(s32)uVar8 * (u32)0x3cf + 0x800) >> 12);
        break;
    case 0x15:
        *(u8 *)(param_1 + 147) = (u8)(0);
        t26c = *(s32 *)(param_1 + 0x26c);
        *(s32 *)(param_1 + 0x26c) = t26c + 0x14000;
        uVar8 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)(s32)uVar8 * (u32)0x579 + 0x800) >> 12);
        break;
    case 0x16:
        *(u8 *)(param_1 + 147) = (u8)(0);
        t26c = *(s32 *)(param_1 + 0x26c);
        *(s32 *)(param_1 + 0x26c) = t26c + 0x14000;
        uVar8 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)(s32)uVar8 * (u32)0x880 + 0x800) >> 12);
        break;
    }
#define ARM_A(K1, K2)         do { s64 lv; lv = (s64)Rnd12() * K1 + 0x800;         *(u32 *)(param_1 + 0x270) = (u32)(lv >> 12) - 0x2000;         lv = (s64)Rnd12() * K2 + 0x800;         *(u32 *)(param_1 + 0x274) = (u32)(lv >> 12) - 0x3000; } while (0)
#define ARM_B(K1, K2)         do { s64 lv; lv = (s64)Rnd12() * K1 + 0x800;         *(u32 *)(param_1 + 0x270) = (u32)(lv >> 12) - 0x2000;         lv = (s64)Rnd12() * K2 + 0x800;         *(u32 *)(param_1 + 0x274) = (u32)(lv >> 12) - 0x5000; } while (0)
    switch (iVar10) {
    case 0:
        ARM_A(0x7000, 0x4000);
        break;
    case 1:
        ARM_B(0x7000, 0x6000);
        break;
    case 2:
        ARM_A(0x7000u, 0x4000u);
        break;
    case 3:
        ARM_A(28672, 16384);
        break;
    case 4:
        ARM_B(28672u, 24576u);
        break;
    }
    iVar10 = func_02028124(param_1);
    *(u32 *)(param_1 + 0x26c) = (u32)(((s64)*(s32 *)(param_1 + 0x26c) * iVar10 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x270) = (u32)(((s64)*(s32 *)(param_1 + 0x270) * iVar10 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x274) = (u32)(((s64)*(s32 *)(param_1 + 0x274) * iVar10 + 0x800) >> 12);
    iVar9 = *(s32 *)(param_1 + 0x274);
    iVar10 = *(s32 *)(param_1 + 0x26c);
    uVar8 = func_02028130(param_1);
    uVar8 = *(s32 *)(*(u8 **)data_02159428 + 0xc) - (u32)((((s64)(s32)uVar8 * (u32)0x14cc) + 0x800) >> 12);
    w64 = (s32)uVar8;
    if ((s32)(((s64)iVar10 * iVar10 + 0x800) >> 12) + (s32)(((s64)iVar9 * iVar9 + 0x800) >> 12) > (s32)(((w64 * w64) + 0x800) >> 12)) {
        sVar7 = func_02068078(*(s32 *)(param_1 + 0x26c), *(s32 *)(param_1 + 0x274));
        j = ((s32)sVar7 >> 4) * 2;
        c64 = data_02126868[j];
        *(u32 *)(param_1 + 0x26c) = (u32)((w64 * c64 + 0x800) >> 12);
        c64 = data_02126868[j + 1];
        *(u32 *)(param_1 + 0x274) = (u32)((w64 * c64 + 0x800) >> 12);
    }
    iVar5 = func_0203541c(param_1);
    if (iVar5 == 0) {
        return;
    }
    iVar10 = func_02028124(param_1);
    if (*(s32 *)(param_1 + 0x270) < iVar10 * 2) {
        *(s32 *)(param_1 + 0x270) = iVar10 * 2;
    }
}
