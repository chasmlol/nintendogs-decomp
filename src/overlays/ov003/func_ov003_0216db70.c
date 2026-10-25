#pragma avoid_byte strb
#include "ctx.h"
extern void func_020266f8(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern void func_0202db24(u8 *p, s32 b);

void func_ov003_0216db70(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 17;
    param_1[147] = 5;
    func_020266f8(param_1);
    func_020255a4(param_1);
    func_01ff832c(0xfffff4ca, (s32 *)(param_1 + 396), (s32 *)(param_1 + 672), (s32 *)(param_1 + 620));
    func_01ff832c(0x701c, (s32 *)(param_1 + 396), (s32 *)(param_1 + 672), (s32 *)(param_1 + 632));
    func_01ff832c(0xffffe7fa, (s32 *)(param_1 + 420), (s32 *)(param_1 + 620), (s32 *)(param_1 + 620));
    func_01ff832c(0xffff0fc4, (s32 *)(param_1 + 420), (s32 *)(param_1 + 632), (s32 *)(param_1 + 632));
    func_0202db24(param_1, 0);
}
