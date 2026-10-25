#include "ctx.h"

void func_0207d240(u8 *param_1, void (*param_2)(u8 *, u8 *, u32), u32 param_3)
{
    u8 *e = *(u8 **)(param_1 + 0x2c);
    if (e != NULL) {
        do {
            u8 *n = *(u8 **)(e + 0xc);
            param_2(e + 0x10, param_1, param_3);
            e = n;
        } while (e != NULL);
    }
}
