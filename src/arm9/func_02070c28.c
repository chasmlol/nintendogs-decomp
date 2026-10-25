#include "ctx.h"

extern u32 func_020700e4;
extern u8 data_02151c44;
extern s32 *func_02071f78(s32 *a, u32 b, u32 c, u32 d, u32 e);
extern s32 func_020720c4(u8 *a, s32 b);
extern void func_0207d018(s32 *a, s32 *b);

u32 func_02070c28(s32 param_1, s32 *param_2, s32 param_3)
{
    s32 *iVar1;
    s32 iVar2;
    s32 iVar4;

    iVar1 = func_02071f78(param_2, param_3 + 0x14, (u32)&func_020700e4, 0, 0);
    if (iVar1 == NULL) {
        return 0;
    }
    iVar1[3] = 0;
    iVar1[4] = param_1;
    iVar1[2] = 0;
    iVar2 = func_020720c4((u8 *)iVar1 + 0x14, param_3);
    if (iVar2 != 0) {
        iVar4 = param_1 * 0x24 + (s32)&data_02151c44;
        iVar1[2] = iVar2;
        func_0207d018((s32 *)(iVar4 + 0xc), iVar1);
        return 1;
    }
    return 0;
}
