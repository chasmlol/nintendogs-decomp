#include "ctx.h"

typedef struct {
    u32 base;
    s32 offset;
} Obj;

s32 func_ov009_0215ca54(Obj *p)
{
    return (s32)p + p->offset;
}
