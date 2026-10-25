#include "ctx.h"

typedef struct {
    u16 a;
    s16 b;
    u32 c;
} Obj;

extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020ae408(void);

void func_020ab630(u8 *param_1)
{
    Obj *o;

    o = (Obj *)(param_1 + 0x128);
    if (o->a == 0xffff) {
        return;
    }
    if (o->b != 0) {
        func_02097b94(o->a, o->c, 0, (u32)func_020ae408, 1);
    } else {
        func_02097b94(o->a, o->c, 0, (u32)func_020ae408, 0);
    }
    o->a = 0xffff;
    o->b = 0;
    o->c = 0xffffffff;
}
