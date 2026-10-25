#include "ctx.h"

extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 n);
extern void (*data_0213b40c[])(u8 *, u32);

void func_020148fc(u8 *param_1)
{
    u32 iVar1;

    func_0201d1f0(param_1);
    iVar1 = 1;
    if (param_1[0x93] <= 24 && ((1u << param_1[0x93]) & 0x01800003) != 0) {
        iVar1 = 0;
    }
    func_02035c98(param_1, iVar1);
    data_0213b40c[(s8)param_1[0x8c]](param_1, 5);
}
