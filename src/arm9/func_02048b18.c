#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_0203567c(u8 *p);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern void func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

void func_02048b18(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;
    u32 iVar3;
    u32 *ptr;
    u32 bit;

    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 0x20) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    ptr = (u32 *)data_0214f464;
    iVar3 = *ptr * 0x10dcd + 1;
    *ptr = iVar3;
    bit = (u16)(((u32)iVar3 << 16) >> 31);
    if (bit == 0) goto zero;
    if (bit == 1) goto one;
    return;
zero:
    func_0203e908(param_1, 0x2cd);
    return;
one:
    func_0203e908(param_1, 0x2ce);
}
