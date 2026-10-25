#include "ctx.h"

extern u32 data_027c0530;
extern void func_02080b84(void);

void func_020dc8b0(void)
{
    s32 i;
    s32 v;
    s32 d;
    s32 base;
    v = 0;
    i = v;
    base = 64;
    for (;;) {
        ((u32 *)&data_027c0530)[i] = v;
        i = i + 1;
        if (i >= 128) {
            break;
        }
        d = base;
        if (v >= 64) {
            do {
                if (d == 0) {
                    func_02080b84();
                }
                v = v - d;
                d = d / 2;
            } while (d <= v);
        }
        v = v + d;
    }
}
