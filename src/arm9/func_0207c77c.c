#include "ctx.h"

typedef struct {
    vu32 a;
    vu32 b;
} AL;
extern AL data_02155c50;

u32 func_0207c77c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 res;
    u32 tot;
    u32 pad;
    u32 e;
    u32 d;
    u32 p0;
    u32 hi;
    res = 0;
    if (param_1 == 0) {
        param_1 = 8;
    } else {
        param_1 = (param_1 + 7) & ~7u;
    }
    if (param_1 >= 0x7fff8) {
        return 0;
    }
    if (param_3 == 1) {
        p0 = data_02155c50.a;
        if (param_2 != 0) {
            pad = (8 - (p0 & 7)) & 7;
        } else {
            pad = (16 - (p0 & 15)) & 15;
        }
        if (data_02155c50.b - p0 >= (param_1 + pad)) {
            e = p0 + (param_1 + pad);
            if (param_2 != 0 && e > 0x10000) {
                p0 = 0;
            } else {
                res = p0 + pad;
                p0 = 1;
                data_02155c50.a = data_02155c50.a + (param_1 + pad);
            }
        } else {
            p0 = 0;
        }
    } else {
        p0 = data_02155c50.b;
        if (p0 < param_1) {
            goto fail2;
        }
        d = p0 - param_1;
        if (param_2 != 0) {
            pad = d & 7;
        } else {
            pad = d & 15;
        }
        tot = param_1 + pad;
        if (p0 - data_02155c50.a < tot) {
            goto fail2;
        }
        if (param_2 != 0 && p0 > 0x10000) {
            p0 = 0;
        } else {
            p0 = 1;
            res = data_02155c50.b - tot;
            data_02155c50.b = res;
        }
        goto end;
fail2:
        p0 = 0;
    }
end:
    if (p0 != 0) {
        hi = param_1 >> 3;
        param_1 = (hi << 16) | ((res >> 3) & 0xffff);
    } else {
        param_1 = 0;
    }
    return param_1;
}
