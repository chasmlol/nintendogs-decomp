#include "ctx.h"

extern u8 data_02159198;
extern void func_02070968(u8 *p, u32 a, s32 b);
extern void func_02070998(u8 *p, u32 a, s32 b);

void func_0209e164(s32 param_1)
{
    u8 *r5;
    s32 iVar2;
    s32 r4;

    r5 = &data_02159198;
    if (*(u32 *)(r5 + 0x40) == 0) {
        return;
    }
    if (param_1 >= 0) {
        r4 = param_1 * 7;
    } else {
        param_1 = -param_1;
        r4 = param_1 * 7;
    }
    iVar2 = r4;
    if (param_1 > 30) {
        param_1 = 255;
    }
    if (iVar2 > 255) {
        iVar2 = 255;
    }
    func_02070968(r5, 0xffff, param_1);
    func_02070998(r5, 0xffff, iVar2);
}
