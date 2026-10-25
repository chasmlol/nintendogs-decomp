#include "ctx.h"

typedef struct { s32 x; s32 y; } P2;

extern void func_02088064(s32 a, P2 s);

void func_0208c98c(s32 a, s32 b, s32 c, s32 d)
{
    func_02088064(a, *(P2 *)&b);
}
