#include "ctx.h"

s32 func_020385e4(u8 *p);
void func_0203e908(u8 *p, s32 v);
void func_02029504(u8 *p);
s32 func_02022e14(u8 *p, s32 v);

u32 func_ov003_0218e5dc(u8 *param_1)
{
    s32 iVar2;

    iVar2 = func_020385e4(param_1);
    switch (iVar2) {
    case 0:
        func_0203e908(param_1, 0x30f);
        break;
    case 1:
        func_0203e908(param_1, 0x311);
        break;
    case 2:
        func_0203e908(param_1, 0x312);
        break;
    case 3:
        func_0203e908(param_1, 0x313);
        break;
    }
    if (*(s16 *)(param_1 + 0xf0) == 1) {
        func_02029504(param_1);
    } else {
        if (func_02022e14(param_1, 1) != 0) {
            func_02029504(param_1);
        }
    }
    return 1;
}
