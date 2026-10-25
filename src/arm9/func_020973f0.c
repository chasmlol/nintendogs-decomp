#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0212eaf4[];
extern void func_0206c7bc(u32 a, u32 b, s32 c);
extern void func_020447d8(u32 *a, u32 *b, u32 *c, u32 d);
extern u32 func_020446a4(u32 *a, u32 b, s32 c);
extern u32 func_02044660(u32 *a, u32 b, s32 c);
extern void func_02044478(u32 *a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_02041d0c(u16 *p);
extern u32 func_0209c2d0(u32 a, u32 b);

void func_020973f0(u16 *param_1, u32 *param_2, s32 param_3)
{
    vu16 z = 0;
    u32 uVar4;
    u32 cnt;
    s32 iVar5;
    s32 iVar2;
    s32 iVar3;
    u32 bit;
    u16 *P = param_1;

    func_0206c7bc(z, (u32)param_1, 0x85c);
    *param_1 = (u16)param_3;
    cnt = *param_2 * 0x10dcd + 1;
    iVar3 = param_3 * 12 + (s32)data_0212eaf4;
    *param_2 = cnt;
    ((u8 *)param_1)[2] = (u8)(((u32)*(u16 *)(iVar3 + 8) * (u16)cnt) >> 16);
    cnt = *param_2 * 0x10dcd + 1;
    *param_2 = cnt;
    bit = (cnt << 16) >> 31;
    ((u8 *)param_1)[3] = (u8)bit;
    P[2] = 0x100;
    P[0x327] = 0;
    *(s16 *)&P[3] = -1;
    func_020447d8((u32 *)(P + 4), (u32 *)(P + 6), (u32 *)param_2, *param_1);
    iVar5 = 0;
    do {
        uVar4 = func_020446a4(param_2, *param_1, iVar5);
        *((u8 *)param_1 + iVar5 + 0x10) = (u8)uVar4;
        iVar5 = (s16)(iVar5 + 1);
    } while (iVar5 < 4);
    iVar5 = 0;
    do {
        iVar2 = func_02044660(param_2, *param_1, iVar5);
        *(u16 *)((u8 *)(P + iVar5) + 24) = (u16)iVar2;
        iVar5 = (s16)(iVar5 + 1);
    } while (iVar5 < 18);
    func_02044478(param_2, *param_1, *((u8 *)param_1 + 3), (u32)(P + 30), (u32)(P + 58));
    iVar2 = 0;
    do {
        *(s16 *)((u8 *)(P + iVar2) + 80) = *(s16 *)((u8 *)(P + iVar2) + 60);
        iVar2 = (s16)(iVar2 + 1);
    } while (iVar2 < 10);
    iVar5 = (s32)func_02041d0c(param_1);
    P[50] = (u16)iVar5;
    P[51] = (u16)func_0209c2d0(*param_1, 0);
    P[52] = 1;
    P[53] = 0;
    P[54] = 1;
    cnt = *param_2 * 0x10dcd + 1;
    *param_2 = cnt;
    ((u8 *)param_1)[111] = (u8)(3 + (u16)((cnt << 16) >> 31));
    *(s16 *)&P[56] = -1;
    ((u8 *)param_1)[114] = 0;
    P[59] = 50;
    *(s16 *)&P[1000] = -1;
    P[1001] = 0;
    P[1002] = 0;
    *(s16 *)&P[1004] = -1;
    P[1005] = 0;
    P[1006] = 0;
    *(s16 *)&P[1008] = -1;
    P[1009] = 0;
    P[1010] = 0;
}
