#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } Tri;

extern u8 *data_0214f464;
extern s32 func_02009bd0(u8 *a, Tri *b);

void func_02036e74(u8 *param_1)
{
    Tri local;
    u32 best;
    s32 bestDist;
    s32 i;
    u32 cand;
    s32 d;

    best = 0;
    i = 0;
    bestDist = 0x10000000;
    do {
        if (i != *(s8 *)(param_1 + 0x88)) {
            if (i < 0 || i >= 3) {
                cand = 0;
            } else {
                cand = *(u32 *)(data_0214f464 + i * 4 + 0x54);
            }
            if (cand != 0) {
                local = *(Tri *)((u8 *)cand + 0x2a0);
                d = func_02009bd0(param_1 + 0x2a0, &local);
                if (d < bestDist) {
                    bestDist = d;
                    best = cand;
                }
            }
        }
        i = (s16)(i + 1);
    } while (i < 3);
    if (best != 0) {
        *(s8 *)(param_1 + 137) = *(s8 *)((u8 *)best + 0x88);
    } else {
        *(s8 *)(param_1 + 137) = -1;
    }
}
