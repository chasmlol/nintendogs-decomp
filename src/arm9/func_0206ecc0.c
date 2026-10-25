#include "ctx.h"

void func_0206c9b8(void *src, u8 *dst, u32 n);

u32 func_0206ecc0(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, ...)
{
    u8 buf[4];
    u8 *q;

    *(u16 *)(buf + 2) = (u16)param_2;
    buf[0] = 8;
    func_0206c9b8(buf, param_1, 1);
    q = param_1 + 1;
    func_0206c9b8(buf + 2, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8(&param_3, q, 1);
    q = (u8 *)((u32)q + 1);
    func_0206c9b8(&param_4, q, 4);
    return (u32)(q + 4) - (u32)param_1;
}
