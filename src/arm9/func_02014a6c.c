#include "ctx.h"

typedef void (*FnPtr)(u8 *, u32);

extern u32 data_0213b40c;
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 flag);

void func_02014a6c(u8 *p)
{
    u32 x;
    u32 flag;
    FnPtr *tab;

    func_0201d1f0(p);
    x = p[0x93];
    flag = 1;
    if (x <= 24) {
        if ((1u << x) & 0x01800003u) {
            flag = 0;
        }
    }
    func_02035c98(p, flag);
    tab = (FnPtr *)&data_0213b40c;
    tab[(s8)p[0x8c]](p, 1);
}
