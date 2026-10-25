#include "ctx.h"

typedef void (*TabFn)(u8 *p);
extern TabFn data_0213b6b4[];

void func_020381f0(u8 *param_1)
{
    s16 v = *(s16 *)(param_1 + 256 + 72);
    u8 *q = param_1 + 256;
    if (v < 17) {
        return;
    }
    if (v > 22) {
        return;
    }
    *(s16 *)(q + 82) = v;
    v = *(s16 *)(q + 72);
    data_0213b6b4[v - 17](param_1);
}
