#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_lifetimes off

static inline void SwapB(u32 v, vu8 *p)
{
    *p = v;
}



void func_02005a78(u8 *param_1)
{
    s32 iVar3;
    s32 iVar2;
    s32 bVar1;
    s32 j;
    s32 lim;
    u8 *pq;
    switch (*(u16 *)(param_1 + 4)) {
    case 0:
        break;
    case 1:
        *(s16 *)(param_1 + 0xe) = *(s16 *)(param_1 + 0xe) - 1;
        if (*(s16 *)(param_1 + 0xe) > 0) {
            return;
        }
        bVar1 = 1;
        iVar3 = 0;
        *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) + 1;
        do {
            lim = (*(u16 *)(param_1 + 0xc) == 0) ? (0xbf - iVar3) / 8 : iVar3 / 8;
            if (*(s16 *)(param_1 + 8) >= lim) {
                pq = param_1 + iVar3;
                iVar2 = *(s16 *)(param_1 + 8) - lim;
                iVar2 = (iVar2 > 8) ? 8 : iVar2;
                SwapB(0x10 - ((iVar2 * 16) / 8), (vu8 *)(pq + 0x1a));
                if (*(s8 *)(pq + 0x1a) > 0) {
                    bVar1 = 0;
                }
            } else {
                pq = param_1 + iVar3;
                *(u8 *)((vu8 *)(pq + 0x1a)) = (u8)(0x10);
                bVar1 = 0;
            }
            iVar3 = iVar3 + 1;
            if (*(u16 *)(param_1 + 6) == 0) {
                SwapB(-*(s8 *)(pq + 0x1a), (vu8 *)(pq + 0x1a));
            }
        } while (iVar3 < 0xc0);
        if (bVar1 == 0) {
            return;
        }
        *(u16 *)(param_1 + 4) = 2;
        *(u16 *)(param_1 + 0x18) = 0;
        *(u32 *)(param_1 + 0x14) = 0;
        return;
    case 2:
        break;
    case 3:
        bVar1 = 1;
        j = 0;
        *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) + 1;
        do {
            lim = (*(u16 *)(param_1 + 0xc) == 0) ? j / 8 : (0xbf - j) / 8;
            if (*(s16 *)(param_1 + 8) >= lim) {
                pq = param_1 + j;
                iVar2 = *(s16 *)(param_1 + 8) - lim;
                if (iVar2 > 8) {
                    iVar2 = 8;
                }
                SwapB(((iVar2 * 16) / 8), (vu8 *)(pq + 0x1a));
                if (*(s8 *)(pq + 0x1a) < 16) {
                    bVar1 = 0;
                }
            } else {
                pq = param_1 + j;
                *(u8 *)((vu8 *)(pq + 0x1a)) = (u8)(0);
                bVar1 = 0;
            }
            j = j + 1;
            if (*(u16 *)(param_1 + 6) == 0) {
                SwapB(-*(s8 *)(pq + 0x1a), (vu8 *)(pq + 0x1a));
            }
        } while (j < 0xc0);
        if (bVar1 != 0) {
            *(u16 *)(param_1 + 4) = 0;
            *(u16 *)(param_1 + 0x18) = 0x10;
            *(u32 *)(param_1 + 0x14) = 0;
        }
        break;
    }
}
