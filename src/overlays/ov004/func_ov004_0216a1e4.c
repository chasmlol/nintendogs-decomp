#include "ctx.h"
extern void func_02027f40(u8 *p, u32 a, u32 b);
extern s32 func_02022dd0(u8 *p);
extern s16 func_0203bc40(u8 *p);
extern u32 func_0202dc50(u8 *p, u32 a, u32 b, s32 c, u32 d, u32 e);
extern u8 func_02029504(u8 *p);
s32 func_ov004_0216a1e4(u8 *param_1)
{
    s32 bVar1;
    u8 uVar2;
    s16 sVar3;
    s32 iVar4;
    if (*(s16 *)(param_1 + 0xf0) == 0x52) {
        func_02027f40(param_1, 1, 0x2710);
        func_02027f40(param_1, 5, 0);
        *(u32 *)(param_1 + 0x2a0) = 0;
        *(u32 *)(param_1 + 0x2a4) = 0;
        *(u32 *)(param_1 + 0x2a8) = 0;
    }
    iVar4 = *(u16 *)(param_1 + 0x112);
    if (iVar4 != 0) {
        iVar4 = 0;
        goto tail;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0:
        goto body;
    case 0x6f:
        iVar4 = 0;
        goto tail;
    default:
        goto body;
    }
body:
    bVar1 = func_02022dd0(param_1);
    if (bVar1) {
        sVar3 = func_0203bc40(param_1);
        iVar4 = func_0202dc50(param_1, 0, 0, (s32)sVar3, *(u8 *)(param_1 + 0xa5), 1);
    } else {
        func_02029504(param_1);
        iVar4 = 0;
    }
    goto tail;
zero:
    iVar4 = 0;
tail:
    if (iVar4 != 0) {
        uVar2 = func_02029504(param_1);
        return uVar2;
    }
    return iVar4;
}
