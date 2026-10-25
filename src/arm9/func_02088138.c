#include "ctx.h"

void func_02088364(u32 *buf);
u32 func_02088204(u32 *buf, u32 b, u32 c, u32 d);

u32 func_02088138(u32 param_1, u32 param_2)
{
    u32 aiStack_50[17];
    u32 r;

    func_02088364(aiStack_50);
    r = func_02088204(aiStack_50, param_2, param_1, 0);
    return r != 0;
}
