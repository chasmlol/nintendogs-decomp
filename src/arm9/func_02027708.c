#include "ctx.h"

typedef struct {
    u8 pad[0x88];
    s8 field_88;
} Obj;

s32 func_02027708(Obj *p)
{
    return p->field_88;
}
