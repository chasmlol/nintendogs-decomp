#include "ctx.h"

typedef struct {
    u8 pad[0xa0];
    u16 field_a0;
    u8 pad2[0xc0 - 0xa2];
    s32 field_c0;
} Obj;

u32 func_020c466c(Obj *p)
{
    if (p->field_a0 > 120 && p->field_c0 > 40960) {
        return 1;
    }
    return 0;
}
