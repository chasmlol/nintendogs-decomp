#include "ctx.h"

extern u8 data_0215be48[];
extern u8 data_0214f130[];
extern u8 data_02157cc4[];
extern void func_020ae5e4(void);

u32 func_020bc14c(void);
s32 func_01ffdb08(u32 a);
s32 func_0202817c(s32 a);
s32 func_02094df8(s32 a, u32 *b, s32 *c);
void func_02028184(s32 a);
s64 func_020219d8(s32 a);
void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_020ad34c(u8 *param_1)
{
    s32 iVar4;
    s32 iVar5;
    u32 uVar3;
    s64 lVar7;
    u8 *base;
    u8 *p4;

    *(u16 *)(param_1 + 0x38) = 0;
    *(u16 *)(param_1 + 0x3a) = 0;
    if (*(s16 *)(param_1 + 0x46) > 0) {
        *(s16 *)(param_1 + 0x46) = *(s16 *)(param_1 + 0x46) - 1;
        if (*(s16 *)(param_1 + 0x46) <= 0) {
            *(u16 *)(param_1 + 0x44) = 0;
        }
    }
    base = *(u8 **)data_0215be48;
    if (base == 0) goto LAB_indirect;
    base += 0x4000;
    if (*(s32 *)(base + 0x8bc) != 3) goto LAB_indirect;
    uVar3 = func_020bc14c();
    if ((s32)uVar3 < 0) goto LAB_check;
    iVar4 = func_01ffdb08(uVar3);
    iVar5 = func_0202817c(iVar4);
    iVar5 = func_02094df8(iVar5, (u32 *)(*(u8 **)data_0214f130 + 0x1c), (s32 *)(*(u8 **)data_0214f130 + 0x2c));
    func_02028184(iVar4);
    if (iVar5 != -1) goto SW;
    lVar7 = func_020219d8(iVar4);
    if ((s32)lVar7 == 0) goto LAB_check;
    *(s32 *)(param_1 + 0x34) = -4;
    *(u16 *)(param_1 + 0x38) = *(u16 *)(param_1 + 0x38) | (1 << uVar3);
    goto LAB_check;
SW:
    if (iVar5 == 0) goto C0;
    if (iVar5 != 1) goto LAB_check;
    goto C1;
C0:
    if ((((s32)*(vu16 *)0x04000304 & 0x8000) >> 15) != 1) goto C0b;
    func_02097b94(2, 0xc1c, 0, (u32)func_020ae5e4, 0);
    goto LAB_check;
C0b:
    func_02097b94(2, 0xc1c, 0, (u32)func_020ae5e4, 1);
    goto LAB_check;
C1:
    if ((((s32)*(vu16 *)0x04000304 & 0x8000) >> 15) != 1) goto C1b;
    func_02097b94(2, 0xc1c, 1, (u32)func_020ae5e4, 0);
    goto LAB_check;
C1b:
    func_02097b94(2, 0xc1c, 1, (u32)func_020ae5e4, 1);
    goto LAB_check;
LAB_indirect:
    iVar4 = ((s32 (*)(u8 *))(*(u32 *)(param_1 + 0x4c)))(param_1);
    if (iVar4 == 0) goto LAB_check;
    iVar4 = -1;
    p4 = *(u8 **)data_02157cc4;
    iVar5 = (p4 != 0) ? *(s32 *)p4 : iVar4;
    if (iVar5 == iVar4) goto IM1;
    iVar4 = (p4 != 0) ? *(s32 *)p4 : iVar4;
    *(s32 *)(param_1 + 0x34) = iVar4;
    if (*(s16 *)(*(u8 **)data_02157cc4 + 8) >= 0) {
        *(u16 *)(param_1 + 0x38) = *(u16 *)(param_1 + 0x38) | (1 << *(s16 *)(*(u8 **)data_02157cc4 + 8));
    }
    goto LAB_check;
IM1:
    if (*(s32 *)(p4 + 0x10) == 0) goto LAB_check;
    *(s32 *)(param_1 + 0x34) = -5;
    *(u16 *)(param_1 + 0x38) = 0xffff;
    *(u16 *)(param_1 + 0x3a) = 1;
    *(u16 *)(param_1 + 0x44) = *(u16 *)(param_1 + 0x38);
    *(u16 *)(param_1 + 0x46) = 0x3c;
LAB_check:
    if (*(s32 *)(param_1 + 0x34) != -1) {
        return;
    }
    iVar4 = ((s32 (*)(u8 *))(*(u32 *)(param_1 + 0x48)))(param_1);
    if (iVar4 < 0) {
        return;
    }
    *(s32 *)(param_1 + 0x34) = -2;
    *(u16 *)(param_1 + 0x38) = 0xffff;
    if (*(u16 *)(param_1 + 0x44) != 0) {
        *(u16 *)(param_1 + 0x3a) = 1;
    } else {
        *(u16 *)(param_1 + 0x3a) = (u16)iVar4;
    }
    *(u16 *)(param_1 + 0x44) = *(u16 *)(param_1 + 0x38);
    *(u16 *)(param_1 + 0x46) = 0x3c;
}
