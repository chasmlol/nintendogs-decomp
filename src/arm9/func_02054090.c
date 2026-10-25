#include "ctx.h"

extern u8 data_0214f464[];
extern u8 *func_02036578(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_0202fcc0(u8 *p);
extern s32 func_0203567c(u8 *v);
extern s32 func_02027710(u8 *p, u8 *v);
extern u32 func_020449bc(void);
extern void func_020362ec(u8 *a, s32 b);
extern void func_0202707c(u8 *a, int b);
extern void func_0203e908(u8 *p, int v);

s32 func_02054090(u8 *param_1)
{
    u8 *iVar1;
    s32 iVar3;
    u32 uVar4;
    s32 iVar5;

    iVar1 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        func_020362f8(param_1);
        return func_0202fd7c(param_1);
    }
    if (iVar1 == 0) {
        func_020362f8(param_1);
        return func_0202fcc0(param_1);
    }
    iVar3 = func_0203567c(iVar1);
    if (iVar3 != 0) {
        iVar3 = func_02027710(param_1, iVar1);
        if (iVar3 == -1) {
            goto Lneg;
        }
        if (iVar3 == 0) {
            goto Lneg;
        }
        if (iVar3 != 1) {
            goto Ldef;
        }
        iVar5 = *(s32 *)*(u8 **)data_0214f464 * 0x10dcd + 1;
        *(s32 *)*(u8 **)data_0214f464 = iVar5;
        iVar3 = (s32)(u16)(((u32)iVar5 << 16) >> 31);
        switch (iVar3) {
        case 0:
            uVar4 = func_020449bc();
            if ((uVar4 & 0x100) == 0) {
                return func_0202fd7c(param_1);
            }
            if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1 || (u8)(s8)(*(s8 *)(iVar1 + 0x8b) - 4) <= 1) {
                return 0;
            }
            func_020362ec(param_1, (s16)(s32)*(s8 *)(iVar1 + 0x88));
            func_0203e908(param_1, 0x26f);
            func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
            func_0202707c(iVar1, 0x18);
            return 1;
        case 1:
            iVar1 = func_02036578(param_1);
            uVar4 = func_020449bc();
            if ((uVar4 & 0x20) == 0) {
                return func_0202fd7c(param_1);
            }
            if (iVar1 == 0) {
                return 0;
            }
            iVar5 = *(s32 *)*(u8 **)data_0214f464 * 0x10dcd + 1;
            *(s32 *)*(u8 **)data_0214f464 = iVar5;
            iVar5 = (s32)(u16)(((u32)iVar5 << 16) >> 31);
            switch (iVar5) {
            case 0:
                func_0203e908(param_1, 0x2cd);
                return 1;
            case 1:
                func_0203e908(param_1, 0x2ce);
                return 1;
            }
            break;
        default:
            goto Ldef;
        }
        return 0;
Lneg:
        iVar5 = *(s32 *)*(u8 **)data_0214f464 * 0x10dcd + 1;
        *(s32 *)*(u8 **)data_0214f464 = iVar5;
        iVar3 = (s32)(u16)(((u32)iVar5 << 16) >> 31);
        switch (iVar3) {
        case 0:
            func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
            func_0202707c(iVar1, 0x11);
            return 1;
        case 1:
            uVar4 = func_020449bc();
            if ((uVar4 & 0x100) == 0) {
                return func_0202fd7c(param_1);
            }
            if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1 || (u8)(s8)(*(s8 *)(iVar1 + 0x8b) - 4) <= 1) {
                return 0;
            }
            func_020362ec(param_1, (s16)(s32)*(s8 *)(iVar1 + 0x88));
            func_0203e908(param_1, 0x273);
            func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
            func_0202707c(iVar1, 0x16);
            return 1;
        }
        goto Ldef;
    }
Ldef:
    return 0;
}
