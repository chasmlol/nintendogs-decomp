#include "ctx.h"

s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0203e908(u8 *p, u32 v);
s32 func_02023780(u8 *p);
u8 *func_02024114(u8 *p, s32 v);
u32 func_02029290(u8 *p, s16 a, u8 b);

u32 func_ov003_02170950(u8 *param_1)
{
    s32 iVar2;
    u8 *psVar3;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1f2, 0x1f3, 0x1fe, 0x1ff, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 0xf1);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == 0) {
        return (u32)psVar3;
    }
    return func_02029290(param_1, (s16)(*(u16 *)psVar3 + 12), *(u8 *)(psVar3 + 0x28));
}
