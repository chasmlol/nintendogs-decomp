#include "ctx.h"

typedef struct {
    u8 pad[0xf0];
    s16 field_f0;
} Obj;

s32 func_02022dd0(Obj *p)
{
    s32 r = 0;
    s16 x = p->field_f0;
    if (x <= 12) {
        return r;
    }
    if (x < 111) {
        r = 1;
    }
    return r;
}
