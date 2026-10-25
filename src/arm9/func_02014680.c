#include "ctx.h"

extern u32 data_0213b40c;

void func_0201d1f0(u8 *p);
void func_02035c98(u8 *p, s32 v);

void func_02014680(u8 *param_1)
{
    s8 cVar1;
    s32 iVar2;
    u32 fn;

    func_0201d1f0(param_1);
    cVar1 = *(s8 *)(param_1 + 0x93);
    if (cVar1 != 0 && cVar1 != 1 && cVar1 != 23 && cVar1 != 24) {
        *(u16 *)(param_1 + 0x12e) = 0x2000;
    }
    iVar2 = 1;
    if (*(u8 *)(param_1 + 0x93) <= 24 &&
        (((u32)1 << *(u8 *)(param_1 + 0x93)) & 0x01800003) != 0) {
        iVar2 = 0;
    }
    func_02035c98(param_1, iVar2);
    fn = ((u32 *)&data_0213b40c)[*(s8 *)(param_1 + 0x8c)];
    ((void (*)(u8 *, s32))fn)(param_1, 10);
}
