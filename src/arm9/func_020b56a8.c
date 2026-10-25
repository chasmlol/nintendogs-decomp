#include "ctx.h"

extern u8 *data_0215942c;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027f78(s32 a, s32 b);
extern s32 func_020b5918(u8 *p);
extern void func_020b584c(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020b0564(u8 *p, s32 a);

void func_020b56a8(u8 *param_1)
{
    s16 i;
    s32 n;
    s32 d;
    s16 v;
    s16 a1;
    s16 a2;
    s16 a3;

    n = (10000 - func_02027f78(func_01ffdb08(*(s16 *)(data_0215942c + 0xe)), 7)) * 10;
    for (i = 0; i < 3; i++) {
        d = 500;
        if (i >= 2) {
            d = 250;
        }
        v = n / d;
        if (v < 0) {
            v = 0;
        }
        ((s16 *)(param_1 + 0x60))[i] = -v;
    }
    a1 = 0;
    for (i = 0; i < 5; i++) {
        a1 += ((s16 *)(param_1 + 0x42))[i];
    }
    a1 += *(s16 *)(param_1 + 0x60);
    if (a1 < 0) {
        a1 = 0;
    }
    a2 = 0;
    for (i = 0; i < 5; i++) {
        a2 += ((s16 *)(param_1 + 0x4c))[i];
    }
    a2 += *(s16 *)(param_1 + 0x62);
    if (a2 < 0) {
        a2 = 0;
    }
    a3 = 0;
    for (i = 0; i < 5; i++) {
        a3 += ((s16 *)(param_1 + 0x56))[i];
    }
    a3 += *(s16 *)(param_1 + 0x64);
    if (a3 < 0) {
        a3 = 0;
    }
    func_020b584c(*(s32 *)(param_1 + 0x1c), func_020b5918(param_1), a1, a2, a3);
    func_020b0564(param_1, *(s32 *)(param_1 + 0x1c));
    *(s16 *)(param_1 + 4) = 0x807;
    *(u16 *)(param_1 + 6) = 0;
}
