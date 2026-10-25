#include "ctx.h"

extern void func_02077e04(u32 a);

typedef struct {
    u8 pad[0x8];
    u32 field_8;
} Inner;

typedef struct {
    u8 pad[0x1c];
    Inner *field_1c;
} Obj;

void func_0208f7d0(Obj *p)
{
    ((void (*)(u32))func_02077e04)(p->field_1c->field_8);
}
