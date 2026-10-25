#include "ctx.h"
extern void func_0206c9b8(u16 *a, u16 *b, u32 c);
u32 func_0206f134(u16 *param_1, u16 param_2, u32 param_3, u32 param_4)
{
    u8 local_20[2];
    u16 local_1e;
    u8 *q;
    local_20[0] = 1;
    local_1e = param_2;
    func_0206c9b8((u16 *)local_20, param_1, 1);
    q = (u8 *)param_1 + 1;
    func_0206c9b8(&local_1e, (u16 *)q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8((u16 *)&param_3, (u16 *)q, 1);
    return (u32)(q + 1) - (u32)param_1;
}
