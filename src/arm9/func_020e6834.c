#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern u32 data_02126728[];
extern void func_020c7434(u8 *, s32 *, s32, s32);
extern void func_02006a30(u32 *, u32 *);
extern void func_02067d04(u32 *, u32 *, u32 *);
extern void func_01ff832c(s32, u32 *, u32 *, u32 *);

void func_020e6834(u8 *param_1, s32 *param_2)
{
    s32 *iVar3;
    s32 iVar4;
    u32 L[12];
    s64 lVar1;
    u32 a0;
    u32 a1;
    u32 a2;
    u32 b0;
    u32 b1;
    u32 b2;

    iVar3 = *(s32 **)(param_1 + 0x214);
    func_020c7434(param_1, param_2, 0x333, 0);
    iVar3[2] = iVar3[2] - (iVar3[2] >> 4);
    *(T3 *)&L[9] = *(T3 *)(param_1 + 0xbc);
    lVar1 = (s64)(s32)L[9] * (s64)(s32)L[9] +
            (s64)(s32)L[10] * (s64)(s32)L[10] +
            (s64)(s32)L[11] * (s64)(s32)L[11];
    iVar4 = (s32)(lVar1 >> 32);
    (void)iVar4;
    a2 = *(u32 *)(param_1 + 0xd0);
    a1 = *(u32 *)(param_1 + 0xcc);
    a0 = *(u32 *)(param_1 + 0xc8);
    L[0] = a0;
    L[1] = a1;
    L[2] = a2;
    b2 = *(u32 *)(param_1 + 0xe8);
    b1 = *(u32 *)(param_1 + 0xe4);
    b0 = *(u32 *)(param_1 + 0xe0);
    L[6] = b0;
    L[7] = b1;
    L[8] = b2;
    {
        u32 c5;
        u32 c4;
        u32 c3;
        c5 = *(u32 *)(param_1 + 0xdc);
        c4 = *(u32 *)(param_1 + 0xd8);
        c3 = *(u32 *)(param_1 + 0xd4);
        L[3] = c3;
        L[4] = c4;
        L[5] = c5;
    }
    if (lVar1 >= *(s64 *)data_02126728) {
        func_02006a30(&L[9], &L[9]);
    }
    if (iVar3[2] > 0) {
        func_01ff832c(-410, &L[9], &L[6], &L[6]);
    } else {
        func_01ff832c(0x19a, &L[9], &L[6], &L[6]);
    }
    func_02006a30(&L[6], &L[6]);
    func_02067d04(&L[3], &L[6], &L[0]);
    func_02067d04(&L[0], &L[3], &L[6]);
    *(u32 *)(param_1 + 200) = L[0];
    *(u32 *)(param_1 + 0xcc) = L[1];
    *(u32 *)(param_1 + 0xd0) = L[2];
    *(u32 *)(param_1 + 0xd4) = L[3];
    *(u32 *)(param_1 + 0xd8) = L[4];
    *(u32 *)(param_1 + 0xdc) = L[5];
    *(u32 *)(param_1 + 0xe0) = L[6];
    *(u32 *)(param_1 + 0xe4) = L[7];
    *(u32 *)(param_1 + 0xe8) = L[8];
    iVar4 = iVar3[2];
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (0xa4 < iVar4) {
        iVar3[14] = 1;
    }
    if (*(u16 *)(param_1 + 0xa0) == 0x3c) {
        *(u16 *)(param_1 + 0xa0) = 0;
    }
}
