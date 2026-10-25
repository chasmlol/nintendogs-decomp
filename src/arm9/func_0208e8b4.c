#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapR(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0208e8b4(u8 *param_1)
{
    s32 h2 = *(s16 *)(param_1 + 2);
    s32 h4 = *(s16 *)(param_1 + 4);
    s32 i1;
    s32 i2;
    s32 *pc;
    s32 cv;
    u8 old;

    param_1[1] = 0;
    i1 = h2 << 12;
    i2 = h4 << 12;
    *(s32 *)(param_1 + 0xc) = *(s32 *)(param_1 + 0xc) + *(s32 *)(param_1 + 8);
    pc = (s32 *)(param_1 + 12);
    switch (param_1[0]) {
    case 1:
        if (*(s32 *)(param_1 + 0xc) < i1) {
            *(s32 *)(param_1 + 0xc) = i1;
            *(u32 *)(param_1 + 8) = 0;
            param_1[1] = param_1[1] | 1;
        }
        if (*(s32 *)(param_1 + 0xc) < i2) {
            return;
        }
        *(s32 *)(param_1 + 0xc) = i2 - 1;
        *(u32 *)(param_1 + 8) = 0;
        old = param_1[1];
        { SwapR(old | 1, (vu8 *)(param_1 + 1)); return; }
    case 0:
        if (*(s32 *)(param_1 + 0xc) < i1) {
            *pc = *pc + i2;
            param_1[1] = param_1[1] | 2;
        }
        cv = *(s32 *)(param_1 + 0xc);
        if (cv < i2) {
            return;
        }
        *(s32 *)(param_1 + 0xc) = cv - i2;
        old = param_1[1];
        { SwapR(old | 2, (vu8 *)(param_1 + 1)); return; }
    case 2:
        if (*(s32 *)(param_1 + 0xc) < i1) {
            *(s32 *)(param_1 + 0xc) = i1;
            *(u32 *)(param_1 + 8) = 0;
            param_1[1] = param_1[1] | 1;
        }
        if (*(s32 *)(param_1 + 0xc) < i2) {
            return;
        }
        *(s32 *)(param_1 + 0xc) = i1;
        *(u32 *)(param_1 + 8) = 0;
        old = param_1[1];
        { SwapR(old | 1, (vu8 *)(param_1 + 1)); return; }
    }
    return;
}
