#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0203e908(int p, int v);

u32 func_ov003_0218c3e0(int param_1, int param_2, u16 param_3)
{
    u32 *piVar;
    int iVar1;

    if (*(s8 *)(param_1 + 0x8b) == 2) {
        if (param_2 != 0) {
            goto LAB_else;
        }
        piVar = data_0214f464;
        iVar1 = *piVar * 0x10dcd + 1;
        *piVar = iVar1;
        switch ((u16)((u32)(iVar1 * 0x10000) >> 0x1e)) {
        case 0:
            func_0203e908(param_1, 0x356);
            return 1;
        case 1:
            func_0203e908(param_1, 0x357);
            return 1;
        case 2:
            func_0203e908(param_1, 0x358);
            return 1;
        case 3:
            func_0203e908(param_1, 0x359);
            return 1;
        }
    }
    goto LAB_tail;
LAB_else:
    func_0203e908(param_1, param_3);
    return 1;
LAB_tail:
    {
        u32 bv = *(u8 *)(param_1 + 0xa9);
        if (bv >= 15) {
            return 0;
        }
        func_0203e908(param_1, (s16)bv);
    }
    return 1;
}
