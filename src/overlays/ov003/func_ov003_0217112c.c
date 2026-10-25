#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 v);
extern void func_ov003_0218e360(u8 *p, u32 v);

void func_ov003_0217112c(u8 *param_1)
{
    s32 iVar1;
    u16 x;

    iVar1 = func_ov003_02174844(param_1, 1, 0x49, 0x4a, 0x4b, 0x4c, 100);
    if (iVar1 == 0) {
        return;
    }
    x = *(u16 *)(param_1 + 0xf4);
    if (x >= 79 && x < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 1);
}
