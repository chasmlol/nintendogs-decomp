#include "ctx.h"

extern u32 data_02141fc0;
extern u32 data_02141fbc;
extern void func_02027540(s32 a);
extern void func_0202707c(s32 a, s32 b);
extern void func_020274f8(s32 a, s32 b);

void func_020a2fc0(s32 param_1, s32 param_2)
{
    s16 sVar1;
    s16 sVar2;
    s32 v;
    func_02027540(param_1);
    if (param_2 > 74) {
        param_2 = 74;
    } else if (param_2 < 61) {
        param_2 = 61;
    }
    sVar1 = *(s16 *)&data_02141fc0;
    sVar2 = *(s16 *)&data_02141fbc;
    v = (s32)sVar2 * (param_2 - sVar1);
    func_0202707c(param_1, 34);
    func_020274f8(param_1, v);
}
