#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026938(s32 a);
extern void func_020255a4(s32 a);
extern void func_02034198(s32 a);
extern void func_02107ea0(void);
extern u16 *data_0215942c;

void func_ov003_02170520(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 20;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    ((u8 *)param_1)[147] = 5;
    ((u8 *)param_1)[152] = 1;
    func_02026938(param_1);
    func_020255a4(param_1);
    *(vu32 *)((u8 *)param_1 + 0x948) = *(vu32 *)((u8 *)param_1 + 0x948) | 1;
    func_02034198(param_1);
    if (*data_0215942c == 1) {
        func_02107ea0();
    }
}
