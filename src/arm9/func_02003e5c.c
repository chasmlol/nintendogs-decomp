#include "ctx.h"

typedef struct {
    u8 pad0[0x28];
    u32 cnt;
    u8 pad1[0xc4 - 0x2c];
    u32 lo_c4;
    u32 hi_c8;
    u32 lo_cc;
    u32 hi_d0;
    u32 pad_d4;
    u32 out_d8;
    u32 out_dc;
} Obj;

extern u64 func_02080858(void);
extern u64 func_0205e068(u64 a, u64 b);
extern Obj *data_0214e778;

void func_02003e5c(void)
{
    u64 t;
    u64 d;
    Obj *o;

    t = func_02080858();
    data_0214e778->cnt = data_0214e778->cnt + 1;
    o = data_0214e778;
    d = t - *(u64 *)&o->lo_cc;
    o->out_d8 = (u32)func_0205e068(d * 64000, 0x82ea);
    o = data_0214e778;
    d = t - *(u64 *)&o->lo_c4;
    o->out_dc = (u32)func_0205e068(d * 64000, 0x82ea);
}
