#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_020364cc(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_ov003_02197dd8(u8 *p);
extern void func_ov003_021985e0(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_02196214(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar2;
    s32 iVar3;
    u32 uVar4;

    iVar2 = func_020364cc(param_1);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    iVar3 = func_020289d0(param_1, param_2, 1);
    if (iVar3 != 0) {
        return;
    }
    if (func_0203592c(param_1, iVar2) != 0) {
        return;
    }
    iVar3 = func_ov003_02197dd8(param_1);
    if (iVar3 != 0) {
        return;
    }
    if (param_3 != 0 && *(u16 *)(param_1 + 0xfc) > 200) {
        uVar4 = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uVar4;
        if ((u16)(((u32)(u16)uVar4 * 200u) >> 16) == 0) {
            func_ov003_021985e0(param_1, iVar2);
            return;
        }
    }
    if (*(u16 *)(param_1 + 0xfc) <= 200) {
        return;
    }
    uVar4 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar4;
    if ((u16)(((u32)(u16)uVar4 * 200u) >> 16) == 0) {
        *(s32 *)(param_1 + 0x948) = 0;
        func_0203e908(param_1, (s16)(*(s16 *)(param_1 + 0xea) + 4));
    }
}
