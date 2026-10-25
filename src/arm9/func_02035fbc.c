#include "ctx.h"

typedef struct { u32 w[3]; } T12;

extern u32 data_02159468;
extern s32 func_020c1f34(s32 a);
extern s32 func_02009bd0(s32 *a, s32 *b);
extern s32 func_02038940(u8 *p, s32 a);

void func_02035fbc(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4)
{
    s32 z3 = 0;
    s32 z2 = 0;
    s32 z1 = 0;
    s32 z0 = 0;
    T12 loc;
    s32 idx;
    s32 cand;
    s32 flag;
    s32 diff;
    s32 j;
    s32 key;
    s32 one = 1;

    for (idx = 0; idx < 7; idx = (s16)(idx + 1)) {
        if (idx < 0) goto ld40;
        if (*(s16 *)(*(u8 **)&data_02159468 + 0x20) > idx) goto fetch;
    ld40:
        cand = z0;
        goto have;
    fetch:
        cand = *(s32 *)(*(u8 **)&data_02159468 + idx * 4 + 4);
    have:
        if (cand == 0) continue;
        if (*(s16 *)(cand + 0x90) == 0 || *(s16 *)(cand + 0x90) == 2) {
            flag = one;
        } else if (*(s16 *)(cand + 0x94) == 0x35 && func_020c1f34(cand) == 0) {
            flag = one;
        } else {
            flag = z1;
        }
        if (flag != 0) continue;
        loc = *(T12 *)(cand + 0xbc);
        diff = func_02009bd0((s32 *)&loc, (s32 *)(param_1 + 0x2a0));
        diff = diff - func_02038940(param_1, cand);
        if (diff >= *param_2) continue;
        if (param_3 != 0) {
            for (j = z2; j < 2; j = (s16)(j + 1)) {
                if ((s16)(idx + 3) == *(s16 *)(param_1 + j * 2 + 0x140)) {
                    flag = z3;
                    goto chk;
                }
            }
            flag = one;
        chk:
            if (flag == 0) goto after;
        }
        *param_2 = diff;
        *(s16 *)(param_1 + 0x13e) = (s16)(idx + 3);
    after:
        if (param_4 != 0) *(T12 *)(param_1 + 0x3b4) = loc;
    }
}
