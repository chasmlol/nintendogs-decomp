#pragma avoid_byte strb
#include "ctx.h"

extern u16 *data_0215942c;
extern void func_020266f8(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02034198(u8 *p);
extern void func_02107ea0(void);

void func_ov003_02170688(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 17;
    *(u16 *)(param_1 + 256 + 86) = 1;
    *(u8 *)(param_1 + 147) = 5;
    *(u8 *)(param_1 + 152) = 1;
    func_020266f8(param_1);
    func_020255a4(param_1);
    *(u32 *)(param_1 + 0x948) |= 1;
    func_02034198(param_1);
    if (*data_0215942c == 1) {
        func_02107ea0();
    }
}
