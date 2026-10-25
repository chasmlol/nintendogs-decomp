#include "ctx.h"

typedef struct {
    u8 pad[0xf0];
    s16 field_f0;
} Obj;

u32 func_0202d9e0(Obj *p)
{
    s16 x = p->field_f0;
    if (x >= 91) {
        if (x < 111) {
            return 1;
        }
    }
    return 0;
}
