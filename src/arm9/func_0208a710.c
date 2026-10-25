#include "ctx.h"

extern void func_02089c08(void);
extern void func_02089bf4(void);

u32 func_0208a710(s32 param_1, s32 param_2)
{
    u32 uVar1;
    u8 *base = (u8 *)param_1;
    func_02089c08();
    uVar1 = *(u32 *)(param_1 + param_2 * 4 + 0x3c);
    if (uVar1 == 0) {
        goto ZERO;
    }
    if (uVar1 < 0x2000000) {
        uVar1 = (u32)(base + uVar1);
    }
    goto JOIN;
ZERO:
    uVar1 = 0;
JOIN:
    func_02089bf4();
    return uVar1;
}
