#include "ctx.h"

typedef struct {
    u8 b0;
    u8 pad0;
    u16 h;
} Loc;

extern void func_0206c9b8(u16 *a, u16 *b, u32 c);

u32 func_0206eb3c(u16 *param_1, u16 param_2, u32 param_3, ...)
{
    Loc f;
    u8 *r4p;
    f.b0 = 11;
    f.h = param_2;
    func_0206c9b8((u16 *)&f.b0, param_1, 1);
    r4p = (u8 *)param_1 + 1;
    func_0206c9b8((u16 *)&f.h, (u16 *)r4p, 2);
    r4p = (u8 *)((u32)r4p + 2);
    func_0206c9b8((u16 *)&param_3, (u16 *)r4p, 1);
    return (u32)(r4p + 1) - (u32)param_1;
}
