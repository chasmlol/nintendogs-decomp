#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464[];
extern void func_0203e1a0(u8 *p);
extern s32 func_020bc14c(void);
extern void func_0202944c(u8 *p, s32 a, s32 b, s32 c);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0203d3ec(u8 *param_1)
{
    s16 sVar1;
    s32 bVar2;
    s32 iVar3, iVar4;
    u32 uVar5;
    u32 *P;

    if (*(s8 *)(param_1 + 0x8b) == 3) {
        SwapByte(1, param_1 + 0xd2);
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1a) = 10000;
    }
    func_0203e1a0(param_1);
    iVar3 = func_020bc14c();
    if (*(s8 *)(param_1 + 0x88) != iVar3) goto ELSE;

    if (*(s8 *)(param_1 + 0x8d) == 3) goto T3;
    if (*(s8 *)(param_1 + 0x8d) == 4) goto T4;
    P = *(u32 **)&data_0214f464;
    uVar5 = *P * 0x10dcd + 1;
    *P = uVar5;
    iVar3 = (s16)(u16)((((u32)(u16)uVar5) * 5u) >> 16);
    goto COMMON2;
T3:
    P = *(u32 **)&data_0214f464;
    uVar5 = *P * 0x10dcd + 1;
    *P = uVar5;
    iVar3 = (s16)((u16)((((u32)(u16)uVar5) * 5u) >> 16) + 10);
    goto COMMON2;
T4:
    P = *(u32 **)&data_0214f464;
    uVar5 = *P * 0x10dcd + 1;
    *P = uVar5;
    iVar3 = (s16)((u16)((((u32)(u16)uVar5) * 5u) >> 16) + 20);
COMMON2:
    sVar1 = *(s16 *)(param_1 + 0xf0);
    if (sVar1 < 4) goto A2;
    if (sVar1 > 8) goto A2;
    bVar2 = 1;
    goto TEST2;
A2:
    if (sVar1 == 0x57) {
        bVar2 = 1;
        goto TEST2;
    }
    iVar4 = (s32)*(s16 *)(param_1 + 0xea);
    if (iVar4 < 0xf) goto B2;
    if (iVar4 <= 0x4b) {
        bVar2 = 1;
        goto TEST2;
    }
B2:
    if (iVar4 < 0x119) goto C2;
    if (iVar4 <= 0x13c) {
        bVar2 = 1;
        goto TEST2;
    }
C2:
    bVar2 = 0;
TEST2:
    if (bVar2) {
        bVar2 = 0;
        goto CHK2;
    }
    iVar4 = (s32)*(s16 *)(param_1 + 0xea);
    if (iVar4 < 0x478) goto R2a;
    if (iVar4 <= 0x47e) {
        bVar2 = 0;
        goto CHK2;
    }
R2a:
    if (iVar4 < 0x4c7) goto R3a;
    if (iVar4 <= 0x4ca) {
        bVar2 = 0;
        goto CHK2;
    }
R3a:
    if (sVar1 == 0x53) {
        bVar2 = 0;
        goto CHK2;
    }
    if (sVar1 == 0x54) bVar2 = 0;
    else bVar2 = 1;
CHK2:
    if (bVar2) {
        func_0202944c(param_1, 1, 2, iVar3);
    }
    return;

ELSE:
    if (*(s8 *)(param_1 + 0x8d) == 3) goto E3;
    if (*(s8 *)(param_1 + 0x8d) == 4) goto E4;
    P = *(u32 **)&data_0214f464;
    uVar5 = *P * 0x10dcd + 1;
    *P = uVar5;
    iVar3 = (s16)(u16)((((u32)(u16)uVar5) * 5u) >> 16);
    goto COMMON1;
E3:
    P = *(u32 **)&data_0214f464;
    uVar5 = *P * 0x10dcd + 1;
    *P = uVar5;
    iVar3 = (s16)((u16)((((u32)(u16)uVar5) * 5u) >> 16) + 10);
    goto COMMON1;
E4:
    P = *(u32 **)&data_0214f464;
    uVar5 = *P * 0x10dcd + 1;
    *P = uVar5;
    iVar3 = (s16)((u16)((((u32)(u16)uVar5) * 5u) >> 16) + 20);
COMMON1:
    sVar1 = *(s16 *)(param_1 + 0xf0);
    if (sVar1 < 4) goto A1;
    if (sVar1 > 8) goto A1;
    bVar2 = 1;
    goto TEST1;
A1:
    if (sVar1 == 0x57) {
        bVar2 = 1;
        goto TEST1;
    }
    iVar4 = (s32)*(s16 *)(param_1 + 0xea);
    if (iVar4 < 0xf) goto B1;
    if (iVar4 <= 0x4b) {
        bVar2 = 1;
        goto TEST1;
    }
B1:
    if (iVar4 < 0x119) goto C1;
    if (iVar4 <= 0x13c) {
        bVar2 = 1;
        goto TEST1;
    }
C1:
    bVar2 = 0;
TEST1:
    if (bVar2) {
        bVar2 = 0;
        goto CHK1;
    }
    iVar4 = (s32)*(s16 *)(param_1 + 0xea);
    if (iVar4 < 0x478) goto R2b;
    if (iVar4 <= 0x47e) {
        bVar2 = 0;
        goto CHK1;
    }
R2b:
    if (iVar4 < 0x4c7) goto R3b;
    if (iVar4 <= 0x4ca) {
        bVar2 = 0;
        goto CHK1;
    }
R3b:
    if (sVar1 == 0x53) {
        bVar2 = 0;
        goto CHK1;
    }
    if (sVar1 == 0x54) bVar2 = 0;
    else bVar2 = 1;
CHK1:
    if (bVar2) {
        func_0202944c(param_1, 1, 1, iVar3);
    }
}
