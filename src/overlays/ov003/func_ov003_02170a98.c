#include "ctx.h"

s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0203e908(u8 *p, s32 v);
s32 func_02023780(u8 *p);
u16 *func_02024114(u8 *p, s32 v);
u32 func_02029290(u8 *p, s32 a, s32 b);

u32 func_ov003_02170a98(u8 *param_1)
{
    s32 iVar2;
    u16 *psVar3;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1f0, 0x1f1, 0x1fc, 0x1fd, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 0xef);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == 0) {
        return (u32)psVar3;
    }
    return func_02029290(param_1, (s16)(*psVar3 + 12), *((u8 *)psVar3 + 0x28));
}
