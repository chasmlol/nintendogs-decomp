#include "ctx.h"

extern s32 func_020927e0(u8 *p);
extern s32 func_02092048(u8 *p, u32 *a, s32 *b);

static inline s32 CountSlots(u8 *p)
{
    s32 cnt;
    s32 i;
    u8 *q;

    cnt = 0;
    i = 0;
    q = p + 0x90;
    do {
        if (q[0x28] != 0) {
            cnt = (s16)(cnt + 1);
        }
        q = q + 0x3c;
        i = (s16)(i + 1);
    } while (i < 20);
    return cnt;
}

s32 func_02094df8(u8 *param_1, u32 *param_2, s32 *param_3)
{
    s32 uVar6;
    u8 *puVar7;
    s32 bVar2;

    uVar6 = -1;
    puVar7 = param_1 + 0x848;
    if (func_020927e0(puVar7) == 0) {
        goto done;
    }
    bVar2 = func_02092048(puVar7, param_2, param_3);
    if (bVar2 != 0) {
        goto bodyB;
    }
    if ((s8)param_1[0x6e] >= (s8)param_1[0x6f]) {
        uVar6 = 0;
        goto done;
    }
    if (CountSlots(param_1) >= 15) {
        uVar6 = 1;
    }
    goto done;
bodyB:
    if (CountSlots(param_1) >= 15) {
        uVar6 = 1;
    }
done:
    return uVar6;
}
