#include "ctx.h"

u32 func_0203541c(u8 *p);
s32 func_0202d108(u8 *p, u32 a, u32 b, u32 c);
void func_0202fcc0(u8 *p);
void func_0203e908(u8 *p, s16 v);

void func_ov003_0217c6f0(u8 *param_1)
{
    s32 iVar1;

    if (*(u16 *)(param_1 + 0xfc) <= 30) {
        return;
    }
    iVar1 = func_0203541c(param_1);
    iVar1 = func_0202d108(param_1, 0, iVar1, 0);
    if (iVar1 == 0) {
        goto zero;
    }
    func_0203e908(param_1, (s16)0x31f);
    return;
zero:
    func_0202fcc0(param_1);
}
