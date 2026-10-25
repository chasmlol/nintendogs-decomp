#include "ctx.h"

extern u32 func_0207def8(u32 start, u32 end, u16 v);

u32 func_0207dd68(u32 param_1, u32 param_2, u16 param_3)
{
    u32 end;
    u32 start;
    end = (param_2 + param_1) & 0xfffffffc;
    start = (param_1 + 3) & 0xfffffffc;
    if (start > end) {
        goto ret0;
    }
    if (end - start >= 48) {
        goto body;
    }
ret0:
    return 0;
body:
    return func_0207def8(start, end, param_3);
}
