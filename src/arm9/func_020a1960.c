#include "ctx.h"

extern u32 data_021592ac;
extern u32 func_02070888(u32 *p);
extern void func_0209f848(u32 a, u32 b);
extern void func_02072fe4(u32 *p, u32 a, u32 b);

u32 func_020a1960(void)
{
    u32 v;

    v = (data_021592ac != 0);
    if (v == 0) {
        goto L3c;
    }
    if (v == 0) {
        goto ret0;
    }
    if (func_02070888(&data_021592ac) == 123) {
        goto ret0;
    }
L3c:
    func_0209f848(0, 0);
    func_02072fe4(&data_021592ac, 19, 123);
    return 1;
ret0:
    return 0;
}
