#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s16 d, s16 e, s16 f);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_02023780(u8 *p);
extern s16 *func_02024114(u8 *p, s32 v);
extern u8 func_020293d8(u8 *p, s32 a, s32 b);

u32 func_ov003_02171ca8(u8 *param_1)
{
    s32 iVar2;
    s32 iVar6;
    u8 *psVar3;
    u8 bVar1;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1f6, 0x1f7, 0x202, 0x203, 10);
    if (iVar2 == 0) {
        return (u32)iVar2;
    }
    iVar2 = func_02039cc4(param_1);
    if (iVar2 != 0) {
        iVar6 = (s32)func_020bc3c4() + 136;
        *(u32 *)(iVar6 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
    }
    func_0203e908(param_1, 0xd);
    iVar2 = func_02023780(param_1);
    psVar3 = (u8 *)func_02024114(param_1, iVar2);
    if (psVar3 != NULL) {
        bVar1 = func_020293d8(param_1, (s16)(*(u16 *)psVar3 + 12), *(psVar3 + 0x28));
        return bVar1;
    }
    return (u32)(u32)psVar3;
}
