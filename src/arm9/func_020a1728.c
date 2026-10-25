#include "ctx.h"

typedef struct {
    u8 pad0[0x18];
    u16 status;
    u8 pad1[0xe];
    u32 arr[4];
} Obj;

extern Obj data_021592e4;
extern s32 func_020a1624(u32 *p, u32 a, u32 b, s32 *c);

s32 func_020a1728(u32 param_1, u32 param_2, s32 *param_3)
{
    Obj *o;
    s32 i;
    u16 bit;

    o = &data_021592e4;
    i = 0;
    do {
        bit = (u16)(1 << i);
        if ((o->status & bit) == 0) {
            *(vu16 *)&o->status = *(vu16 *)&o->status | bit;
            goto found;
        }
        i = (s16)(i + 1);
    } while (i < 4);
    i = -1;
found:
    if (i != -1) {
        if (func_020a1624(&o->arr[i], param_1, param_2, param_3) != 0) {
            return i;
        }
    }
    return -1;
}
