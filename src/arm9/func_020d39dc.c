#include "ctx.h"

typedef struct {
    u8 pad[0x58];
    u32 field_58;
} Obj;

void func_020d39dc(Obj *p)
{
    p->field_58 = 0;
}
