#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s16 d, s16 e, s16 f);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_02172ad0(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;

    iVar1 = func_ov003_02174844(param_1, 1, 0x55, 0x56, 0x57, 0x58, 100);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        iVar2 = (s32)func_020bc3c4() + 136;
        *(u32 *)(iVar2 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
    }
    if (*(u16 *)(param_1 + 0xf4) >= 0x4f && *(u16 *)(param_1 + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 10);
}
