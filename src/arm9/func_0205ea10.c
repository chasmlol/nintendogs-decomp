#include "ctx.h"

typedef struct { u32 w[2]; } Pair;

extern u32 func_0205ea64(u32 *out, Pair a, Pair b, u32 c);

u32 func_0205ea10(u32 param_1, u32 param_2)
{
    Pair s;
    Pair t;
    u32 out[2];
    s.w[0] = param_1;
    t = s;
    func_0205ea64(out, s, t, param_2);
    return out[0];
}
