#include "ctx.h"

typedef struct {
    u8 pad[0x9e8];
    u8 *inner;
} Obj;

u16 func_02027c58(Obj *p)
{
    u8 *q = p->inner + 0x600;
    return *(vu16 *)(q + 0x4e);
}
