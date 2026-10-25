#include "ctx.h"

extern void func_0207d354(u32 a);

typedef struct {
    u32 pad;
    u32 field_4;
} Obj;

void func_0207e1e8(Obj *p)
{
    ((void (*)(u32))func_0207d354)(p->field_4);
}
