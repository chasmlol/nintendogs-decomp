#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_0203e908(u8 *p, s32 n);
extern void func_ov003_0218e360(u8 *p, s32 n);

void func_ov003_0217100c(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_ov003_02174844(param_1, 0, 0x1f0, 0x1f1, 0x1fc, 0x1fd, 100);
    if (iVar1 == 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xf4) >= 0x4f && *(u16 *)(param_1 + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 3);
}
