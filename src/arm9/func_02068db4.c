#include "ctx.h"

extern u16 data_02150e30[];
extern void func_020699dc(u32 a);

void func_02068db4(u32 param_1)
{
    s32 b = data_02150e30[0];
    s32 a = data_02150e30[10];
    data_02150e30[0] = (~param_1 & (b | a));
    data_02150e30[10] = param_1;
    if (0 != param_1) {
        if (param_1 == 8) {
            goto c8;
        }
        if (256 == param_1) {
            *(vu8 *)0x04000249 = 0x82;
        }
        goto end;
c8:
        *(vu8 *)0x04000243 = 0x84;
    }
end:
    func_020699dc(data_02150e30[0]);
}
