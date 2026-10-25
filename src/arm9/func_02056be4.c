#include "ctx.h"

extern s32 *data_0214f464;

s32 func_0202775c(u8 *p, u8 *q);
s32 func_02036578(u8 *p);
u32 func_020449bc(void);
u32 func_0202fd7c(u8 *p);
void func_0203e908(u8 *p, u32 a);
s32 func_02057a84(u8 *p, u8 *q, u32 a);
void func_020362ec(u8 *p, s32 a);
void func_0202707c(u8 *p, u32 a);

u32 func_02056be4(u8 *param_1, u8 *param_2)
{
    s32 iVar1;
    u32 uVar3;

    iVar1 = func_0202775c(param_1, param_2);
    if (iVar1 == 0) goto LAB_case0;
    if (iVar1 == 1) goto LAB_case1;
    if (iVar1 == 2) {
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        uVar3 = (u16)(((u16)uVar3 * 3u) >> 16);
        switch (uVar3) {
        case 0:
            iVar1 = func_02036578(param_1);
            uVar3 = func_020449bc();
            if ((uVar3 & 2) == 0) {
                return func_0202fd7c(param_1);
            }
            if (iVar1 == 0) {
                return 0;
            }
            func_0203e908(param_1, 0x282);
            return 1;
        case 1:
            iVar1 = func_02036578(param_1);
            uVar3 = func_020449bc();
            if ((uVar3 & 4) == 0) {
                return func_0202fd7c(param_1);
            }
            if (iVar1 == 0) {
                return 0;
            }
            func_0203e908(param_1, 0x289);
            return 1;
        case 2:
            uVar3 = func_020449bc();
            if ((uVar3 & 0x80) == 0) {
                return func_0202fd7c(param_1);
            }
            if ((u8)(s8)((s8)param_1[0x8b] - 4) <= 1) goto LAB_c2ret0;
            if ((u8)(s8)((s8)param_2[0x8b] - 4) > 1) goto LAB_c2body;
LAB_c2ret0:
            return 0;
LAB_c2body:
            func_020362ec(param_1, (s16)(s32)(s8)param_2[0x88]);
            func_0203e908(param_1, 0x26e);
            func_020362ec(param_2, (s16)(s32)(s8)param_1[0x88]);
            func_0202707c(param_2, 0x17);
            return 1;
        }
    }
    goto LAB_ret0;
LAB_case1:
    return func_02057a84(param_1, param_2, 0);
LAB_case0:
    iVar1 = func_02036578(param_1);
    uVar3 = func_020449bc();
    if ((uVar3 & 2) == 0) {
        return func_0202fd7c(param_1);
    }
    if (iVar1 == 0) {
        return 0;
    }
    func_0203e908(param_1, 0x282);
    return 1;
LAB_ret0:
    return 0;
}
