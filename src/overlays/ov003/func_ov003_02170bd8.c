#include "ctx.h"

extern u32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 v);
extern u32 func_02023780(u8 *p);
extern u8 *func_02024114(u8 *p, u32 v);
extern u8 func_02029290(u8 *p, s32 a, u32 b);

u32 func_ov003_02170bd8(u8 *param_1)
{
    u32 iVar2;
    u16 *psVar3;
    iVar2 = func_ov003_02174844(param_1, 1, 73, 74, 75, 76, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 237);
    iVar2 = func_02023780(param_1);
    psVar3 = (u16 *)func_02024114(param_1, iVar2);
    if (psVar3 == 0) {
        return (u32)psVar3;
    }
    return func_02029290(param_1, (s16)(*psVar3 + 12), *(u8 *)((u8 *)psVar3 + 0x28));
}
