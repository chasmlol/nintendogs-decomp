#include "ctx.h"
extern s32 func_02027f78(u32 a, s32 b);
void func_0211a604(u8 *param_1)
{
    s32 iVar2;
    u32 uVar1;
    iVar2 = func_02027f78(*(u32 *)(param_1 + 4), 7);
    if (iVar2 == 0) {
        uVar1 = 0;
        goto END;
    }
    if (iVar2 <= 3000) {
        uVar1 = 1;
        goto END;
    }
    if (iVar2 <= 6000) {
        uVar1 = 2;
        goto END;
    }
    uVar1 = (iVar2 <= 9000) ? 3 : 4;
END:
    *(u16 *)(param_1 + 2) = uVar1;
}
