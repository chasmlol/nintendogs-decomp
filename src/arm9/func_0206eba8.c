#include "ctx.h"

extern u32 func_0206c9b8(u16 *a, u16 *b, u32 c);

u32 func_0206eba8(u16 *param_1, u16 param_2, u32 param_3, u16 *param_4, u32 param_5)
{
    u8 local_28[2];
    u16 local_26;
    u8 *p;

    local_28[0] = 10;
    local_26 = param_2;
    func_0206c9b8((u16 *)local_28, param_1, 1);
    p = (u8 *)param_1 + 1;
    func_0206c9b8(&local_26, (u16 *)p, 2);
    p = (u8 *)((u32)p + 2);
    func_0206c9b8((u16 *)&param_3, (u16 *)p, 1);
    p = (u8 *)((u32)p + 1);
    func_0206c9b8((u16 *)&param_5, (u16 *)p, 1);
    p = (u8 *)((u32)p + 1);
    func_0206c9b8(param_4, (u16 *)p, 9);
    return (u32)(p + 9) - (u32)param_1;
}
