#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 a, b, c; } T3;

extern u32 *data_02159468;
extern u8 *data_02159444;

void func_02044ca0(s32 a);
void func_02067e34(u8 *a, s32 *b, s32 *c);
void func_02006a30(s32 *a, s32 *b, s32 c);
void func_02067d04(s32 *a, s32 *b, s32 *c);
void func_020bd868(u8 *p);
void func_0209d5bc(u8 *p, s32 a);

void func_020e4c9c(u8 *param_1)
{
    u32 *pP;
    u32 uVar5;
    u32 uVar6;
    u32 *puVar3;
    u16 uVar1;
    u8 *iVar4;
    u8 v;
    s32 aA[3];
    s32 aB[3];
    s32 aC[3];
    T3 aD;

    pP = data_02159468;
    puVar3 = *(u32 **)(param_1 + 0x214);
    uVar6 = *pP * 0x10dcd + 1;
    uVar5 = ((u16)uVar6) * 3;
    uVar1 = (u16)(uVar5 >> 16);
    *pP = uVar6;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 8;
    *(u16 *)(param_1 + 0x84) = uVar1;
    *(u16 *)(param_1 + 0x86) = uVar1;
    puVar3[0] = uVar1;
    puVar3[1] = 0;
    v = 0;
    *((u8 *)puVar3 + 8) = v;
    *(u32 *)(param_1 + 0x24) = 0x4ce;
    *(u32 *)(param_1 + 0x28) = 0x4ce;
    *(u32 *)(param_1 + 0x2c) = 0x4ce;
    puVar3[5] = 0;
    func_02044ca0((s16)*(u16 *)(param_1 + 0x9c));
    iVar4 = *(u8 **)(data_02159444 + 0x1c);
    aD = *(T3 *)(iVar4 + 0x30);
    func_02067e34(param_1 + 0xbc, (s32 *)&aD, aB);
    aB[1] = 0;
    func_02006a30(aB, aB, 0);
    aA[0] = 0;
    aA[2] = 0;
    aA[1] = -4096;
    func_02067d04(aB, aA, aC);
    *(s32 *)(param_1 + 200) = aC[0];
    *(s32 *)(param_1 + 0xcc) = aC[1];
    *(s32 *)(param_1 + 0xd0) = aC[2];
    *(s32 *)(param_1 + 0xd4) = aB[0];
    *(s32 *)(param_1 + 0xd8) = aB[1];
    *(s32 *)(param_1 + 0xdc) = aB[2];
    *(s32 *)(param_1 + 0xe0) = aA[0];
    *(s32 *)(param_1 + 0xe4) = aA[1];
    *(s32 *)(param_1 + 0xe8) = aA[2];
    *(u16 *)(param_1 + 0xa6) = 0;
    func_020bd868(param_1);
    func_0209d5bc(param_1 + 400, (s16)*(u16 *)(param_1 + 0x94));
}
