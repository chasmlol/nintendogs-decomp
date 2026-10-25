#include "ctx.h"
extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 a);
extern void func_ov003_0218e360(u8 *p, u32 a);
void func_ov003_02170d20(u8 *param_1)
{
    s32 iVar1;
    iVar1 = func_ov003_02174844(param_1, 0, 0x1f8, 0x1f9, 0x204, 0x205, 100);
    if (iVar1 == 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xf4) >= 0x4f && *(u16 *)(param_1 + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 8);
}
