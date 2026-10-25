#include "ctx.h"

extern u32 *data_0214f464;

u32 func_0203567c(u32 a);
void func_0203e908(u32 a, u32 b);

void func_ov003_0218fb90(u32 param_1)
{
    u32 *P;
    u32 nv;
    u16 bit;

    if (func_0203567c(param_1) == 0) {
        return;
    }
    P = data_0214f464;
    nv = *P * 0x10dcd + 1;
    *P = nv;
    bit = (u16)((nv << 16) >> 31);
    if (bit == 0) {
        goto zero;
    }
    if (bit == 1) {
        goto one;
    }
    return;
zero:
    func_0203e908(param_1, 0x84);
    return;
one:
    func_0203e908(param_1, 0x86);
}
