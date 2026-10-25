#include "ctx.h"

typedef struct {
    u32 vt;
    u16 a;
    u16 b;
    u32 c;
    u32 d;
} Obj;

extern u32 data_021408dc;
extern void *func_020038b8(void *heap, u32 size);
extern void func_0200658c(void *p);
extern u8 *func_02078214(u32 x);

void *func_0208f2d0(void *param_1, u32 param_2)
{
    Obj *p;
    u8 *q;

    p = func_020038b8(param_1, 0x18);
    p->vt = (u32)&data_021408dc;
    p->a = 0;
    p->b = 0;
    p->c = 0;
    p->d = 0;
    func_0200658c((u8 *)p + 16);
    p->c = param_2;
    p->d = 0;
    if (param_2 != 0) {
        q = func_02078214(param_2);
        p->d = (u32)(q + *(u32 *)(q + *(u16 *)(q + 14) + 12));
    }
    return p;
}
