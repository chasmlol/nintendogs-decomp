#include "ctx.h"

extern void func_0208a51c(u32 bit);
extern void func_020895a8(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_020898f4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar2;
    u32 uVar1;

    iVar2 = 0;
    for (uVar1 = param_3; iVar2 < 8 && uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
            func_0208a51c(iVar2);
        }
        iVar2 = iVar2 + 1;
    }
    func_020895a8(0xd, param_1, param_2, param_3, param_4);
}
