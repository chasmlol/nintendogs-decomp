#include "ctx.h"
typedef struct {
    u8 pad0[0x34];
    vu32 f34;
    u8 pad1[0xd0 - 0x38];
    vu32 fd0;
} Obj;
extern Obj data_02150600;
void func_0207f4ac(u32 a, Obj *b, u32 c, u32 d);
void func_020659a4(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    if (param_1 != 11) {
        return;
    }
    if (param_3 != 0) {
        Obj *o = &data_02150600;
        o->f34 &= 0xffffffdfu;
        func_0207f4ac(o->fd0, o, param_3, param_4);
    }
}
