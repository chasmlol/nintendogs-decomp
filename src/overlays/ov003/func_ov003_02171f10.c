#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern s32 func_02023780(u8 *p);
extern u8 *func_02024114(u8 *p, s32 a);
extern u8 func_020293d8(u8 *p, u32 a, u32 b);

u32 func_ov003_02171f10(u8 *param_1)
{
    s32 iVar2;
    u8 *psVar3;

    iVar2 = func_ov003_02174844(param_1, 1, 0x55, 0x56, 0x57, 0x58, 10);
    if (iVar2 == 0) {
        return (u32)iVar2;
    }
    iVar2 = func_02039cc4(param_1);
    if (iVar2 != 0) {
        u8 *q;
        q = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, (s8)param_1[0x88]);
    }
    func_0203e908(param_1, 10);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == NULL) {
        return (u32)psVar3;
    }
    return func_020293d8(param_1, (u32)(s16)(*(u16 *)psVar3 + 12), *(u8 *)(psVar3 + 0x28));
}
