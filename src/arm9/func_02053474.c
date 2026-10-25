#include "ctx.h"

extern s32 *data_0214f464;
extern u8 *func_02036578(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_0202fcc0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_02027710(u8 *p, u8 *q);
extern u32 func_020449bc(void);
extern void func_020362ec(u8 *p, s16 v);
extern void func_0202707c(u8 *p, s32 v);
extern void func_0203e908(u8 *p, s16 v);

s32 func_02053474(u8 *param_1)
{
    u8 *iVar1;
    s32 iVar3;
    s32 nv;
    u32 uVar4;
    u16 bit;

    iVar1 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        func_020362f8(param_1);
        return func_0202fd7c(param_1);
    }
    if (iVar1 == 0) {
        func_020362f8(param_1);
        return func_0202fcc0(param_1);
    }
    if (func_0203567c(iVar1) == 0) goto RET0;
    iVar3 = func_02027710(param_1, iVar1);
    if (iVar3 == -1) goto CM1;
    if (iVar3 == 0) goto C0L;
    if (iVar3 != 1) goto RET0;

    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    bit = (u16)((u32)(nv << 16) >> 31);
    if (bit == 0) goto C1A;
    if (bit != 1) goto RET0;
    goto C1B;

C1A:
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) != 0) goto C1A_nz;
    return func_0202fd7c(param_1);
C1A_nz:
    if (iVar1 == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    bit = (u16)((u32)(nv << 16) >> 31);
    if (bit == 0) goto C1A_A;
    if (bit != 1) goto C1A_R0;
    goto C1A_B;
C1A_A:
    func_0203e908(param_1, 717);
    return 1;
C1A_B:
    func_0203e908(param_1, 718);
    return 1;
C1A_R0:
    return 0;

C1B:
    uVar4 = func_020449bc();
    if ((uVar4 & 0x100) != 0) goto C1B_nz;
    return func_0202fd7c(param_1);
C1B_nz:
    if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1) goto C1B_R0;
    if ((u8)(s8)(*(s8 *)(iVar1 + 0x8b) - 4) > 1) goto C1B_body;
C1B_R0:
    return 0;
C1B_body:
    func_020362ec(param_1, (s16)(s32)*(s8 *)(iVar1 + 0x88));
    func_0203e908(param_1, 623);
    func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
    func_0202707c(iVar1, 24);
    return 1;

C0L:
    func_020362f8(param_1);
    return func_0202fd7c(param_1);

CM1:
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    bit = (u16)((u32)(nv << 16) >> 31);
    if (bit == 0) goto M0;
    if (bit != 1) goto RET0;
    goto M1;
M0:
    func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
    func_0202707c(iVar1, 17);
    return 1;
M1:
    uVar4 = func_020449bc();
    if ((uVar4 & 0x100) != 0) goto M1_nz;
    return func_0202fd7c(param_1);
M1_nz:
    if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1) goto M1_R0;
    if ((u8)(s8)(*(s8 *)(iVar1 + 0x8b) - 4) > 1) goto M1_body;
M1_R0:
    return 0;
M1_body:
    func_020362ec(param_1, (s16)(s32)*(s8 *)(iVar1 + 0x88));
    func_0203e908(param_1, 627);
    func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
    func_0202707c(iVar1, 22);
    return 1;

RET0:
    return 0;
}
