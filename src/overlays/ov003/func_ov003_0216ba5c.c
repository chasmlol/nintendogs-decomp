#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02020894(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 n);

void func_ov003_0216ba5c(u8 *param_1)
{
    s32 iVar1;
    *(s16 *)(param_1 + 256 + 82) = 0x70;
    iVar1 = func_02020894(param_1);
    *(s16 *)(param_1 + 256 + 84) = (s16)iVar1;
    param_1[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 5);
}
