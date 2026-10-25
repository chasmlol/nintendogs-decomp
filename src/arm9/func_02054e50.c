#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_02027710(s32, s32);
extern s32 func_02036578(s32);
extern u32 func_020449bc(void);
extern s32 func_0202fd7c(s32);
extern s32 func_02027894(s32, s32);
extern void func_0203e908(s32, s16);
extern void func_020362ec(s32, s16);
extern void func_0202707c(s32, s32);
extern void func_020362f8(s32);
extern s32 func_0202fcc0(s32);

s32 func_02054e50(s32 param_1, s32 param_2)
{
    s32 iVar1;
    u32 uVar2;
    s32 uVar3;

    if (*(s16 *)(param_2 + 0xea) != 0x27e && *(s16 *)(param_2 + 0xea) != 0x27f) {
        return 0;
    }
    iVar1 = func_02027710(param_1, param_2);
    if (iVar1 == -1) {
        goto M1;
    }
    if (iVar1 == 0) {
        goto Z;
    }
    if (iVar1 != 1) {
        goto END;
    }
    iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar1;
    switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
    case 0:
        goto C0;
    case 1:
        goto C1;
    case 2:
        goto C2;
    case 3:
        goto C3;
    }
    goto END;
C0:
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 2) == 0) {
        uVar3 = func_0202fd7c(param_1);
        return uVar3;
    }
    if (iVar1 == 0) {
        return 0;
    }
    func_0203e908(param_1, (s16)0x282);
    return 1;
C1:
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 4) == 0) {
        uVar3 = func_0202fd7c(param_1);
        return uVar3;
    }
    if (iVar1 == 0) {
        return 0;
    }
    func_0203e908(param_1, (s16)0x289);
    return 1;
C2:
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 8) == 0) {
        uVar3 = func_0202fd7c(param_1);
        return uVar3;
    }
    if (iVar1 == 0) {
        return 0;
    }
    func_0203e908(param_1, (s16)0x28f);
    return 1;
C3:
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 0x10) == 0) {
        uVar3 = func_0202fd7c(param_1);
        return uVar3;
    }
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02027894(param_1, iVar1);
    *(s32 *)(param_1 + 0x484) = iVar1;
    func_0203e908(param_1, (s16)0x295);
    return 1;
Z:
    func_020362f8(param_1);
    return func_0202fcc0(param_1);
M1:
    iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar1;
    switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
    case 0:
        func_020362ec(param_2, (s16)(s32)*(s8 *)(param_1 + 0x88));
        func_0202707c(param_2, 9);
        return 1;
    case 1:
        func_020362ec(param_2, (s16)(s32)*(s8 *)(param_1 + 0x88));
        func_0202707c(param_2, 11);
        return 1;
    case 2:
        func_020362ec(param_2, (s16)(s32)*(s8 *)(param_1 + 0x88));
        func_0202707c(param_2, 13);
        return 1;
    case 3:
        func_020362ec(param_2, (s16)(s32)*(s8 *)(param_1 + 0x88));
        func_0202707c(param_2, 15);
        return 1;
    }
END:
    return 0;
}
