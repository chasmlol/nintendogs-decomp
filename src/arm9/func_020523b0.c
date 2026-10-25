#include "ctx.h"

extern s32 *data_0214f464;

s32 func_02036578(u8 *p);
s32 func_0202de0c(u8 *p);
s32 func_0202e304(u8 *p);
void func_0203e908(u8 *p, u32 a);
s32 func_02027894(u8 *p, s32 a);
s32 func_02027708(s32 a);
u32 func_020449bc(void);
u32 func_0202fd7c(u8 *p);

u32 func_020523b0(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    u32 uVar5;
    s32 *P;
    u32 sel;
    s32 f;

    iVar2 = func_02036578(param_1);
    if (iVar2 == 0) return 0;
    iVar3 = func_0202de0c(param_1);
    if (iVar3 >= 13) return 0;
    bVar1 = func_0202e304(param_1);
    if (bVar1 == 0) goto L6c;
    func_0203e908(param_1, 0x292);
    return 1;
L6c:
    iVar3 = func_02027894(param_1, iVar2);
    if (iVar3 == 0) goto L26c;
    if (iVar3 == 1) goto case1;
    if (iVar3 != 2) goto L288;
    P = data_0214f464;
    iVar3 = *P * 0x10dcd + 1;
    sel = (u16)(((u32)iVar3 << 16) >> 31);
    *P = iVar3;
    if (sel == 0) goto L293;
    if (sel != 1) goto L288;
    goto case2b;
L293:
    func_0203e908(param_1, 0x293);
    return 1;
case2b:
    iVar2 = func_02036578(param_1);
    uVar5 = func_020449bc();
    if ((uVar5 & 4) != 0) goto L114;
    return func_0202fd7c(param_1);
L114:
    if (iVar2 == 0) return 0;
    func_0203e908(param_1, 0x289);
    return 1;
case1:
    iVar2 = func_02027708(iVar2);
    iVar3 = (s32)*(s16 *)(param_1 + 0xea);
    if (iVar3 < 0x26c) goto A_F;
    if (iVar3 > 0x26f) goto A_F;
    if (*(s16 *)(param_1 + 0x13e) == iVar2) {
        f = 1;
        goto A_J;
    }
A_F:
    f = 0;
A_J:
    if (f != 0) {
        bVar1 = 1;
        goto J;
    }
    if (iVar3 < 0x259) goto B_F;
    if (iVar3 <= 0x25f) {
        f = 1;
        goto B_J;
    }
B_F:
    f = 0;
B_J:
    if (f == 0) goto Z;
    iVar4 = (s32)*(s16 *)(param_1 + 0xee);
    if (iVar4 < 0x26c) goto C_F;
    if (iVar4 > 0x26f) goto C_F;
    if (*(s16 *)(param_1 + 0x13e) == iVar2) {
        f = 1;
        goto C_J;
    }
C_F:
    f = 0;
C_J:
    if (f != 0) {
        bVar1 = 1;
        goto J;
    }
Z:
    bVar1 = 0;
J:
    if (bVar1 == 0) goto CNT;
    func_0203e908(param_1, 0x291);
    return 1;
CNT:
    P = data_0214f464;
    iVar3 = *P * 0x10dcd + 1;
    sel = (u16)(((u32)iVar3 << 16) >> 31);
    *P = iVar3;
    if (sel == 0) return 0;
    func_0203e908(param_1, 0x292);
    return 1;
L26c:
    func_0203e908(param_1, 0x294);
    return 1;
L288:
    return 0;
}
