#include "ctx.h"

extern u32 data_0215be48;
extern void func_02117e4c(void *p);

void func_02109084(void)
{
    u32 *g;
    u32 off;
    u32 base;
    u8 *m;
    u8 *r;
    u32 v;

    g = &data_0215be48;
    off = 0x5028;
    base = *g;
    r = (u8 *)(base + off);
    m = (u8 *)base + 0x5000;
    if (*(u32 *)(m + 0x28) == 0) {
        return;
    }
    v = *(u32 *)(r + 0x1ac);
    if (v == 0 || v == 1 || v == 4) {
        func_02117e4c(r + 408);
    }
    v = *(u32 *)(r + 0x1cc);
    if (v != 0 && v != 1 && v != 4) {
        return;
    }
    func_02117e4c(r + 440);
}
