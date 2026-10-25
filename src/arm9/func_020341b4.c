#include "ctx.h"

typedef struct {
    u8 pad[0x948];
    u32 field_948;
} Obj;

u32 func_020341b4(Obj *p)
{
    return p->field_948 & 0x10;
}
