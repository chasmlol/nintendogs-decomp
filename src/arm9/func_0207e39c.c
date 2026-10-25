#include "ctx.h"

extern void func_0207e4e8(u32 *p);

void func_0207e39c(u32 *param_1)
{
    s32 n;
    u32 *cp;

    n = param_1[7];
    if (n > 55) {
        param_1[7] = n + 1;
        *((u8 *)param_1 + n + 0x20) = 0x80;
        n = param_1[7];
        cp = param_1 + 7;
        while (n < 64) {
            cp[0] = cp[0] + 1;
            *((u8 *)param_1 + n + 0x20) = 0;
            n = param_1[7];
        }
        func_0207e4e8(param_1);
        n = param_1[7];
        if (n < 56) {
            do {
                param_1[7] = param_1[7] + 1;
                *((u8 *)param_1 + n + 0x20) = 0;
                n = param_1[7];
            } while (n < 56);
        }
    } else {
        param_1[7] = n + 1;
        *((u8 *)param_1 + n + 0x20) = 0x80;
        n = param_1[7];
        cp = param_1 + 7;
        while (n < 56) {
            cp[0] = cp[0] + 1;
            *((u8 *)param_1 + n + 0x20) = 0;
            n = param_1[7];
        }
    }
    *((u8 *)param_1 + 0x58) = (u8)(param_1[6] >> 24);
    *((u8 *)param_1 + 0x59) = (u8)(param_1[6] >> 16);
    *((u8 *)param_1 + 0x5a) = (u8)(param_1[6] >> 8);
    *((u8 *)param_1 + 0x5b) = (u8)param_1[6];
    *((u8 *)param_1 + 0x5c) = (u8)(param_1[5] >> 24);
    *((u8 *)param_1 + 0x5d) = (u8)(param_1[5] >> 16);
    *((u8 *)param_1 + 0x5e) = (u8)(param_1[5] >> 8);
    *((u8 *)param_1 + 0x5f) = (u8)param_1[5];
    func_0207e4e8(param_1);
}
