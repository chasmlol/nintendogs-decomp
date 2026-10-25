#include "ctx.h"

extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 v);
extern u32 data_0213b40c;

void func_020148a0(u8 *param_1)
{
    u32 idx;
    s32 iVar1;
    func_0201d1f0(param_1);
    idx = param_1[0x93];
    iVar1 = 1;
    if (idx <= 24 && ((1u << idx) & 0x01800003) != 0) {
        iVar1 = 0;
    }
    func_02035c98(param_1, iVar1);
    ((void (**)(u8 *, s32))&data_0213b40c)[(s8)param_1[0x8c]](param_1, 6);
}
