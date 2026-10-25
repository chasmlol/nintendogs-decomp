#include "ctx.h"

typedef struct {
    u8 pad[0x1c];
    s16 field_1c;
} Obj;

s32 func_0200c0fc(Obj *p)
{
    return p->field_1c;
}
