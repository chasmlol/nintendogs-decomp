#include "ctx.h"
extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_02023780(u8 *p);
extern u8 *func_02024114(u8 *p, s32 a);
extern u32 func_02029290(u8 *p, u32 a, u32 b);
u32 func_ov003_021709fc(u8 *param_1)
{
    s32 iVar2;
    u8 *psVar3;
    iVar2 = func_ov003_02174844(param_1, 1, 0x49, 0x4a, 0x4b, 0x4c, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 0xf0);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 != NULL) {
        return func_02029290(param_1, (s16)(*(u16 *)psVar3 + 12), *(u8 *)(psVar3 + 0x28));
    }
    return (u32)psVar3;
}
