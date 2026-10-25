#include "ctx.h"
extern u8 data_0214f464[];
extern s32 func_0203567c(u8 *p);
extern u32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern void func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
void func_02048bf8(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;
    s32 iVar3;
    u16 bit;
    u32 *cnt;
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
    cnt = *(u32 **)data_0214f464;
    iVar3 = *cnt * 0x10dcd + 1;
    *cnt = iVar3;
    bit = (u32)(iVar3 * 0x10000) >> 31;
    if (bit == 0) {
        goto A;
    }
    if (bit == 1) {
        goto B;
    }
    return;
A:
    func_0203e908(param_1, 0x2cd);
    return;
B:
    func_0203e908(param_1, 0x2ce);
    return;
}
