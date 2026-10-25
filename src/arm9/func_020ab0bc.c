#include "ctx.h"

typedef struct {
    u8 pad[0x7c];
    s16 st;
} Obj;

extern Obj *data_02159444;
extern void func_020ae374(Obj *o);

void func_020ab0bc(s32 param_1)
{
    if (param_1 == 1) {
        goto c1;
    }
    if (param_1 == 2) {
        goto c2;
    }
    if (param_1 == 3) {
        data_02159444->st = 109;
    }
    goto join;
c1:
    data_02159444->st = 107;
    goto join;
c2:
    data_02159444->st = 108;
join:
    if (data_02159444->st == -1) {
        return;
    }
    func_020ae374(data_02159444);
}
