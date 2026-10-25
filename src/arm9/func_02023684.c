#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0213a8d4[];

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02023684(u8 *param_1, u32 param_2, s32 param_3)
{
    u32 uVar4;
    u32 a6;
    u32 t1;
    u32 t3;
    u8 *iv2;
    u8 *iv3;
    s16 sv;
    uVar4 = *(u16 *)(param_1 + 242);
    a6 = *(u8 *)(param_1 + 0xa6);
    if (uVar4 < 79) {
        goto E1;
    }
    if (uVar4 >= 99) {
        goto E1;
    }
    t1 = data_0213a8d4[79];
    iv2 = (u8 *)(a6 * 10 + t1);
    goto D1;
E1:
    t1 = data_0213a8d4[uVar4];
    iv2 = (u8 *)(a6 * 10 + t1);
D1:
    if (param_2 < 79) {
        goto E2;
    }
    if (param_2 >= 99) {
        goto E2;
    }
    t3 = data_0213a8d4[79];
    iv3 = (u8 *)(param_3 * 10 + t3);
    goto D2;
E2:
    t3 = data_0213a8d4[param_2];
    iv3 = (u8 *)(param_3 * 10 + t3);
D2:
    sv = *(s16 *)(param_1 + 238);
    if (sv >= 61 && sv <= 75) {
        return;
    }
    if (sv >= 308 && sv <= 316) {
        return;
    }
    if (iv2[4] == iv3[4] && iv2[5] == iv3[5] && iv2[3] > iv3[3]) {
        return;
    }
    SwapByte(1, (vu8 *)(param_1 + 164));
    *(u16 *)(param_1 + 242) = (u16)param_2;
    SwapByte((u32)param_3, (vu8 *)(param_1 + 166));
    *(u16 *)(param_1 + 256 + 22) = 180;
}
