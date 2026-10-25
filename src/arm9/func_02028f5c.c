#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f464[];

static inline u32 SwapR(u32 v, u8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02028f5c(u8 *param_1, u32 param_2, u32 param_3)
{

    if (*(s8 *)(param_1 + 0x88) != *(s8 *)(*(u8 **)data_0214f464 + 7)) goto copyB;
    {
        s16 sVar1;
        s32 iVar4;
        s32 bVar3;

        sVar1 = *(s16 *)(param_1 + 0xf0);
        if (sVar1 < 4) goto a38;
        if (sVar1 <= 8) {
            bVar3 = 1;
            goto a78;
        }
    a38:
        if (sVar1 == 0x57) {
            bVar3 = 1;
            goto a78;
        }
        iVar4 = *(s16 *)(param_1 + 0xea);
        if (iVar4 < 15) goto a5c;
        if (iVar4 <= 75) {
            bVar3 = 1;
            goto a78;
        }
    a5c:
        if (iVar4 < 0x119) goto a74;
        if (iVar4 <= 316) {
            bVar3 = 1;
            goto a78;
        }
    a74:
        bVar3 = 0;
    a78:
        if (bVar3 != 0) {
            bVar3 = 0;
            goto aTail;
        }
        iVar4 = *(s16 *)(param_1 + 0xea);
        if (iVar4 < 0x478) goto aA4;
        if (iVar4 <= 0x47e) {
            bVar3 = 0;
            goto aTail;
        }
    aA4:
        if (iVar4 < 0x4c7) goto aC0;
        if (iVar4 <= 0x4ca) {
            bVar3 = 0;
            goto aTail;
        }
    aC0:
        if (sVar1 == 0x53) {
            bVar3 = 0;
            goto aTail;
        }
        if (sVar1 == 0x54) {
            bVar3 = 0;
        } else {
            bVar3 = 1;
        }
    aTail:
        if (bVar3 == 0) return;
        {
            u16 z = 0;
            u8 *pq;
            {
                u8 *pa = param_1 + 0xa8;
                *(u8 *)(pa) = (u8)(z);
            }
            pq = param_1 + 256;
            *(u16 *)(pq + 18) = z;
            *(u16 *)(param_1 + 0xf0) = param_2;
            {
                u8 *pb;
                pb = (__typeof__(pb))((u32)(param_1) + (165));
                { SwapR(param_3, pb); return; }
            }
        }
    }
copyB:
    {
        s16 sVar1;
        s32 iVar4;
        s32 bVar3;
        sVar1 = *(s16 *)(param_1 + 0xf0);
        if (sVar1 < 4) goto b38;
        if (sVar1 <= 8) {
            bVar3 = 1;
            goto b78;
        }
    b38:
        if (sVar1 == 0x57) {
            bVar3 = 1;
            goto b78;
        }
        iVar4 = *(s16 *)(param_1 + 0xea);
        if (iVar4 < 15) goto b5c;
        if (iVar4 <= 75) {
            bVar3 = 1;
            goto b78;
        }
    b5c:
        if (iVar4 < 0x119) goto b74;
        if (iVar4 <= 316) {
            bVar3 = 1;
            goto b78;
        }
    b74:
        bVar3 = 0;
    b78:
        if (bVar3 != 0) {
            bVar3 = 0;
            goto bTail;
        }
        iVar4 = *(s16 *)(param_1 + 0xea);
        if (iVar4 < 0x478) goto bA4;
        if (iVar4 <= 0x47e) {
            bVar3 = 0;
            goto bTail;
        }
    bA4:
        if (iVar4 < 0x4c7) goto bC0;
        if (iVar4 <= 0x4ca) {
            bVar3 = 0;
            goto bTail;
        }
    bC0:
        if (sVar1 == 0x53) {
            bVar3 = 0;
            goto bTail;
        }
        if (sVar1 == 0x54) {
            bVar3 = 0;
        } else {
            bVar3 = 1;
        }
    bTail:
        if (bVar3 == 0) return;
        SwapR(1, param_1 + 0xa8);
        *(u16 *)(param_1 + 0x112) = 0;
        *(u16 *)(param_1 + 0xf0) = param_2;
        {
            u8 *pb;
            pb = (__typeof__(pb))((u32)(param_1) + (165));
            { SwapR(param_3, pb); return; }
        }
    }
}
