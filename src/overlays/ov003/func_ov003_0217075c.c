#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 n);
extern s32 func_02023780(u8 *p);
extern u16 *func_02024114(u8 *p, s32 n);
extern u8 func_02029290(u8 *p, s16 a, u8 b);

u32 func_ov003_0217075c(u8 *param_1)
{
    u16 *psVar3;
    s32 iVar2;
    u8 bVar1;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1f8, 0x1f9, 0x204, 0x205, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 0xf4);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == NULL) {
        return (u32)psVar3;
    }
    bVar1 = func_02029290(param_1, (s16)(psVar3[0] + 12), *((u8 *)psVar3 + 0x28));
    return bVar1;
}
