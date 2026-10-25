#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, s32 a, s32 b, s32 c);
extern void func_0203e908(u8 *p, s32 v);
extern void func_ov003_0218e360(u8 *p, s32 v);

void func_ov003_02171400(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_ov003_02174904(param_1, 0x11e, 0x70, 0xe000);
    if (*(s16 *)(param_1 + 0xea) >= 0x119 && *(s16 *)(param_1 + 0xea) <= 0x121) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xf4) >= 0x4f && *(u16 *)(param_1 + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 5);
}
