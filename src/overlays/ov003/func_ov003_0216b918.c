#pragma avoid_byte strb
#include "ctx.h"
extern s32 func_02020824(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 a);

void func_ov003_0216b918(u8 *param_1)
{
    s32 iVar1;
    *(u16 *)(param_1 + 256 + 82) = 0;
    iVar1 = func_02020824(param_1);
    *(s16 *)(param_1 + 256 + 84) = (s16)iVar1;
    param_1[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 26, 1);
    func_0202db24(param_1, 0);
}
