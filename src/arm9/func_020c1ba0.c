#include "ctx.h"

extern void func_020bd858(u8 *p);
extern void func_020c1bfc(u8 *p);

void func_020c1ba0(u8 *param_1)
{
    u8 *obj;
    u8 *inner;
    if (*(s16 *)(param_1 + 144) == 0) {
        goto case0;
    }
    if (*(s16 *)(param_1 + 144) == 1) {
        goto case1;
    }
    return;
case0:
    obj = *(u8 **)(param_1 + 0x214);
    inner = *(u8 **)obj;
    *(u16 *)(inner + 0x20) = *(u16 *)(inner + 0x20) | 1;
    func_020bd858(param_1);
    return;
case1:
    func_020c1bfc(param_1);
}
