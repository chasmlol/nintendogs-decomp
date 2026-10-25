#include "ctx.h"

typedef struct {
    u8 pad[0x14];
    u32 *field_14;
} Obj;

BOOL func_0206e8e8(Obj *p, s32 param_2)
{
    u32 *arr = p->field_14;
    u32 w = arr[param_2 >> 5];
    u32 bit = 1u << (param_2 & 31);
    return (w & bit) != 0;
}
