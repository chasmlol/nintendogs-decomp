#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_0202775c(s32, s32);
extern s32 func_02036578(s32);
extern u32 func_020449bc(void);
extern s32 func_0202fd7c(s32);
extern s32 func_02027894(s32, s32);
extern void func_0203e908(s32, s16);
extern s32 func_02057468(s32, s32, s32);

s32 func_02056430(s32 param_1, s32 param_2)
{
    s32 iVar1;
    s32 uVar2;
    s32 iVar3;
    u32 uVar4;

    iVar1 = func_0202775c(param_1, param_2);
    if (iVar1 == 0) {
        goto L0;
    }
    if (iVar1 == 1) {
        goto L1;
    }
    if (iVar1 != 2) {
        goto END;
    }
    uVar4 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar4;
    uVar4 = (u16)((((u16)uVar4) * 3u) >> 16);
    if (uVar4 == 0) {
        goto A2;
    }
    if (uVar4 == 1) {
        goto B2;
    }
    if (uVar4 != 2) {
        goto END;
    }
    goto C2;
A2:
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 4) == 0) {
        uVar2 = func_0202fd7c(param_1);
        return uVar2;
    }
    if (iVar1 == 0) {
        return 0;
    }
    func_0203e908(param_1, (s16)0x289);
    return 1;
B2:
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 8) == 0) {
        uVar2 = func_0202fd7c(param_1);
        return uVar2;
    }
    if (iVar1 == 0) {
        return 0;
    }
    func_0203e908(param_1, (s16)0x28f);
    return 1;
C2:
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x10) == 0) {
        uVar2 = func_0202fd7c(param_1);
        return uVar2;
    }
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02027894(param_1, iVar1);
    *(s32 *)(param_1 + 0x484) = iVar1;
    func_0203e908(param_1, (s16)0x295);
    return 1;
L1:
    iVar3 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar3;
    uVar4 = (u16)((u32)(iVar3 << 16) >> 31);
    if (uVar4 == 0) {
        goto L1z;
    }
    if (uVar4 != 1) {
        goto END;
    }
    goto L1o;
L1z:
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x10) == 0) {
        uVar2 = func_0202fd7c(param_1);
        return uVar2;
    }
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02027894(param_1, iVar1);
    *(s32 *)(param_1 + 0x484) = iVar1;
    func_0203e908(param_1, (s16)0x295);
    return 1;
L1o:
    uVar2 = func_02057468(param_1, param_2, 0);
    return uVar2;
L0:
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x10) == 0) {
        uVar2 = func_0202fd7c(param_1);
        return uVar2;
    }
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02027894(param_1, iVar1);
    *(s32 *)(param_1 + 0x484) = iVar1;
    func_0203e908(param_1, (s16)0x295);
    return 1;
END:
    return 0;
}
