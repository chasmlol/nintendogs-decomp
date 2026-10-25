#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s16 d, s16 e, s16 f);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_02023780(u8 *p);
extern u16 *func_02024114(u8 *p, s32 v);
extern u8 func_020293d8(u8 *p, s32 a, s32 b);

u32 func_ov003_02172700(u8 *param_1)
{
    s32 iVar2;
    u16 *psVar3;
    u8 bVar1;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1ee, 0x1ef, 0x1fa, 0x1fb, 10);
    if (iVar2 == 0) {
        return (u32)iVar2;
    }
    iVar2 = func_02039cc4(param_1);
    if (iVar2 != 0) {
        iVar2 = (s32)func_020bc3c4() + 136;
        *(u32 *)(iVar2 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
    }
    func_0203e908(param_1, 0);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == NULL) {
        return (u32)(u32)psVar3;
    }
    bVar1 = func_020293d8(param_1, (s16)(psVar3[0] + 0xc), *((u8 *)psVar3 + 0x28));
    return bVar1;
}
