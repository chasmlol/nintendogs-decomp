#include "ctx.h"

typedef struct {
    u32 w0;
    u32 w4;
} Pair;

typedef struct {
    u8 pad[0xac];
    Pair *field_ac;
} Obj;

void func_ov019_02160918(Obj *p)
{
    p->field_ac->w0 = 0;
    p->field_ac->w4 = 0;
}
