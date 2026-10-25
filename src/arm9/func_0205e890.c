#include "ctx.h"
typedef struct { u32 w[2]; } Pair;
extern void func_0205ea64(void *out, Pair a, Pair b, u32 e);
u32 func_0205e890(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    Pair a;
    Pair b;
    u32 local[2];
    a.w[0] = param_1;
    a.w[1] = param_2;
    b.w[0] = param_3;
    b.w[1] = param_4;
    func_0205ea64(local, a, b, param_5);
    return local[0];
}
