#include "ctx.h"

extern u8 data_021517f8[];
extern u8 *func_0207ceb0(u8 *a, u8 *b);
extern void func_0207cf34(u8 *a, u8 *b, u8 *c);

void func_02070288(u8 *param_1)
{
    u8 *it;
    it = func_0207ceb0(data_021517f8, (u8 *)0);
    if (it == (u8 *)0) {
        goto done;
    }
top:
    if (param_1[0x3d] < it[0x3d]) {
        goto done;
    }
    it = func_0207ceb0(data_021517f8, it);
    if (it != (u8 *)0) {
        goto top;
    }
done:
    func_0207cf34(data_021517f8, it, param_1);
}
