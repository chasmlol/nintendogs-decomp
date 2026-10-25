#include "ctx.h"

extern u32 *data_0214f464;
u32 func_0203567c(u8 *p);
void func_0203e908(u8 *p, s16 v);

void func_ov003_0218fc18(u8 *param_1)
{
    u32 iVar1;
    u32 iVar2;
    u16 bit;
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    bit = (u16)(((u32)(iVar2 << 16)) >> 31);
    if (bit == 0) {
        goto b83;
    }
    if (bit == 1) {
        goto b85;
    }
    return;
b83:
    func_0203e908(param_1, 0x83);
    return;
b85:
    func_0203e908(param_1, 0x85);
}
