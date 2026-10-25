#include "ctx.h"

s32 func_020df0d4(s32 *p);
void func_02070c18(s32 *p, s32 v);
s32 func_0209b878(s32 *p);

u32 func_0209c084(s32 *param_1, s32 param_2)
{
    s32 iVar2;
    u32 uVar3;
    u32 uVar4;
    u16 uVar1;

    iVar2 = func_020df0d4(param_1);
    if (iVar2 != -11) goto body;
    goto fail;
body:
    uVar4 = 0xff;
    uVar3 = 0;
    if (0 < param_1[0]) {
        do {
            if ((param_1 + uVar3)[6] != 0 && param_2 == *(s16 *)((u8 *)param_1 + uVar3 * 2 + 0x12)) {
                uVar4 = uVar3;
                func_02070c18(param_1 + 6 + uVar3, 0);
                break;
            }
            uVar3 = (s16)(uVar3 + 1);
        } while ((s32)uVar3 < param_1[0]);
    }
    if (uVar4 == 0xff) {
        uVar4 = func_0209b878(param_1);
    }
    if (uVar4 != 0xffffffff) {
        *(s16 *)((u8 *)param_1 + uVar4 * 2 + 0x12) = (s16)param_2;
        uVar1 = (u16)(1 << uVar4);
        *(u16 *)(param_1 + 2) = *(u16 *)(param_1 + 2) | uVar1;
        (param_1 + uVar4)[11] = 0;
        (param_1 + uVar4)[14] = 0;
        *(u16 *)((u8 *)param_1 + 0x2a) = *(u16 *)((u8 *)param_1 + 0x2a) & ~uVar1;
    }
    return uVar4;
fail:
    return 0xffffffff;
}
