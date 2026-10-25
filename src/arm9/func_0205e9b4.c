#include "ctx.h"
typedef struct { u32 w[2]; } Pair;
void func_0205ea64(u64 *r, Pair a, Pair b, u32 e);
u64 func_0205e9b4(u32 param_1, u32 param_2, u32 param_3)
{
    Pair p;
    u64 local;
    p.w[0] = param_1;
    p.w[1] = param_2;
    func_0205ea64(&local, p, p, param_3);
    return local;
}
