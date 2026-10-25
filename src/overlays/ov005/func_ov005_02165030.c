#include "ctx.h"

extern void func_020264f4(u8 *);
extern u8 func_020255a4(u8 *);

u8 func_ov005_02165030(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x1a1;
    func_020264f4(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
