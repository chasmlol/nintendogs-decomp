#include "ctx.h"

u32 func_02080b08(u32 p);
void func_02080b1c(u32 r);

void func_0206c068(u32 param_1)
{
    u32 idx;
    u32 r;
    u32 off;
    u32 base;

    r = func_02080b08(param_1);
    do {
        idx = param_1 * 3 + 2;
    } while ((*(vu32 *)(0x040000b0 + idx * 4) & 0x80000000) != 0);
    if (param_1 == 0) {
        off = param_1 * 12;
        base = 0x040000b0 + off;
        *(vu32 *)(0x04000000 + off + 0xb0) = 0;
        *(vu32 *)(base + 4) = 0;
        *(vu32 *)(base + 8) = 0x81400001;
    }
    func_02080b1c(r);
}
