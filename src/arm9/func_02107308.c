#include "ctx.h"

typedef struct {
    u16 k;
    u16 pad;
    s16 *arr[2];
} Loc;

s16 *func_02107308(s16 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    Loc L;
    s32 bVar1 = 1;
    u32 uVar2;
    u32 uVar3;
    u32 i = 0;
    L.k = 0;
    do {
        L.arr[i] = (s16 *)0;
        i = i + 1;
    } while (i < 2);
    L.arr[L.k] = param_1;
    do {
        u16 *cur;
        uVar3 = 2;
        cur = (u16 *)L.arr[L.k];
        if (*cur == 0) {
            goto Lzero;
        }
        if (*cur == 0x1a) {
            uVar2 = (((u16)(cur[1] >> 8)) << 16) | (u32)cur[2];
            uVar3 = cur[1] & 0xff;
            if (uVar2 == param_2 || uVar2 == param_3) {
                L.arr[L.k] = (s16 *)(uVar3 + (u32)L.arr[L.k]);
                param_4 = param_4 - 1;
                if (param_4 <= 0) {
                    bVar1 = 0;
                }
                param_1 = L.arr[L.k] + 1;
            }
        }
        goto Lcommon;
    Lzero:
        bVar1 = 0;
    Lcommon:
        L.arr[L.k] = (s16 *)(uVar3 + (u32)L.arr[L.k]);
    } while (bVar1);
    return param_1;
}
