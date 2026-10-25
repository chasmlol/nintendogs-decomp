#include "ctx.h"

extern u32 func_0206c9b8(u16 *a, u16 *b, u32 c);

u32 func_0206f0a0(u16 *param_1, u16 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u8 local_20[2];
    u16 local_1e;
    u8 *p;

    local_20[0] = 2;
    local_1e = param_2;
    func_0206c9b8((u16 *)local_20, param_1, 1);
    p = (u8 *)param_1 + 1;
    func_0206c9b8(&local_1e, (u16 *)p, 2);
    p = (u8 *)((u32)p + 2);
    func_0206c9b8((u16 *)&param_3, (u16 *)p, 1);
    p = (u8 *)((u32)p + 1);
    func_0206c9b8((u16 *)&param_4, (u16 *)p, 2);
    p = (u8 *)((u32)p + 2);
    func_0206c9b8((u16 *)&param_5, (u16 *)p, 2);
    return (u32)(p + 2) - (u32)param_1;
}
