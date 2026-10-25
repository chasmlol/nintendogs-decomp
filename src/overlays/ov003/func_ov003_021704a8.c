#pragma avoid_byte strb
#include "ctx.h"
extern void func_020268dc(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02034198(u8 *p);
extern void func_02107ea0(void);
extern u8 data_0215942c[];

void func_ov003_021704a8(u8 *param_1)
{
    u32 flags;
    *(u16 *)(param_1 + 256 + 82) = 21;
    *(u16 *)(param_1 + 256 + 86) = 1;
    param_1[147] = 5;
    param_1[152] = 1;
    func_020268dc(param_1);
    func_020255a4(param_1);
    flags = *(u32 *)(param_1 + 0x948);
    *(u32 *)(param_1 + 0x948) = flags | 1;
    func_02034198(param_1);
    if (**(u16 **)data_0215942c == 1) {
        func_02107ea0();
        return;
    }
}
