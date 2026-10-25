#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s16 d, s16 e, s16 f);
extern void func_0203e908(u8 *p, s32 v);
extern void func_ov003_0218e360(u8 *p, s32 v);

void func_ov003_02170db4(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_ov003_02174844(param_1, 0, 0x1f6, 0x1f7, 0x202, 0x203, 100);
    if (iVar1 == 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xf4) >= 0x4f && *(u16 *)(param_1 + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 7);
}
