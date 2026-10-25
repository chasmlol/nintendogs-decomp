#include "ctx.h"

extern u32 data_0213b40c[];
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 v);

void func_020143a4(u8 *param_1)
{
    s32 iVar1;

    func_0201d1f0(param_1);
    iVar1 = 1;
    if (param_1[0x93] <= 24 && ((1u << param_1[0x93]) & 0x01800003) != 0) {
        iVar1 = 0;
    }
    func_02035c98(param_1, iVar1);
    ((void (*)(u8 *, u32))data_0213b40c[(s8)param_1[0x8c]])(param_1, 6);
}
