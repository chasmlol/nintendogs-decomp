#include "ctx.h"

void func_0206c9b8(void *dst, void *src, int n);

u32 func_0206ef64(u8 *param_1, u16 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u8 local_20[2];
    u16 local_1e;
    u8 *q;

    local_20[0] = 4;
    local_1e = param_2;
    func_0206c9b8(local_20, param_1, 1);
    q = param_1 + 1;
    func_0206c9b8(&local_1e, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8(&param_3, q, 1);
    q = (u8 *)((u32)q + 1);
    func_0206c9b8(&param_4, q, 4);
    q = (u8 *)((u32)q + 4);
    func_0206c9b8(&param_5, q, 4);
    return (u32)q + 4 - (u32)param_1;
}
