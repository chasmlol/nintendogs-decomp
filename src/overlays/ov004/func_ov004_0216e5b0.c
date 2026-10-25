#include "ctx.h"

typedef struct Obj {
    u32 f0;
    u32 f4;
    u32 f8;
    u8 pad[0x44 - 12];
    s16 f44;
    s16 f46;
} Obj;

extern Obj *data_ov004_02170324;

u32 func_ov004_0216e5b0(s32 param_1)
{
    Obj *p = data_ov004_02170324;
    if (param_1 == p->f44) {
        return p->f0;
    }
    if (param_1 == p->f46) {
        return p->f8;
    }
    return 0;
}
