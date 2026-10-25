#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern T3 data_02139eec;
extern u32 func_01ffdb08(u8 *p);
extern void func_020090cc(u32 a, u32 b, u8 *c, T3 *d);

void func_02008b84(u8 *param_1, u32 param_2)
{
    u32 r;
    T3 local;
    r = func_01ffdb08(param_1);
    if (r != 0) {
        local = data_02139eec;
        func_020090cc(r, param_2, (u8 *)r + 0x2dc, &local);
    }
}
