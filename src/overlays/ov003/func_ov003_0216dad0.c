#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
extern void func_0202db24(u8 *p, s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216dad0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x11;
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    func_020266f8(param_1);
    func_020255a4(param_1);
    func_01ff832c(0xb36, param_1 + 0x18c, param_1 + 0x2a0, param_1 + 0x26c);
    func_01ff832c(0xffff8fe4, param_1 + 0x18c, param_1 + 0x2a0, param_1 + 0x278);
    func_01ff832c(0xffffe7fa, param_1 + 0x1a4, param_1 + 0x26c, param_1 + 0x26c);
    func_01ff832c(0xffff0fc4, param_1 + 0x1a4, param_1 + 0x278, param_1 + 0x278);
    func_0202db24(param_1, 0);
}
