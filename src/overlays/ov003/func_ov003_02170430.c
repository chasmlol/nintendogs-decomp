#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202687c(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02034198(u8 *p);
extern void func_02107ea0(void);
extern u16 *data_0215942c;

void func_ov003_02170430(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 22;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(param_1 + 147) = 5;
    *(param_1 + 152) = 1;
    func_0202687c(param_1);
    func_020255a4(param_1);
    *(vu32 *)(param_1 + 0x948) = *(vu32 *)(param_1 + 0x948) | 1;
    func_02034198(param_1);
    if (*data_0215942c == 1) {
        func_02107ea0();
    }
}
