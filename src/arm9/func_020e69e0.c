#include "ctx.h"

typedef struct {
    u8 pad[0xc0];
    u32 field_c0;
} Obj;

void func_020e69e0(Obj *p)
{
    p->field_c0 = 0;
}
