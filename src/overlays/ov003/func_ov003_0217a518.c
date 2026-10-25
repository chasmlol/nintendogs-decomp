#include "ctx.h"

s32 func_0203567c(u8 *p);
void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02039818(u8 *p);

void func_ov003_0217a518(u8 *param_1)
{
    s32 iVar1;
    s32 uVar2;

    if (*(s8 *)(param_1 + 0x8b) == 4) {
        goto yes;
    }
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        goto no;
    }
yes:
    uVar2 = 20;
    goto done;
no:
    uVar2 = 19;
done:
    iVar1 = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, 5, 25, 1, 1, iVar1, uVar2, uVar2);
    func_02039818(param_1);
}
