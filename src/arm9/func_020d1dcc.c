#include "ctx.h"

extern u16 data_0214efdc;
extern void func_020be1d8(int a);
extern void func_020cf9c8(int a, int b, int c, int d);
extern void func_020cf9bc(int a);

void func_020d1dcc(int param_1)
{
    u16 t;

    func_020be1d8(1);
    if (*(int *)(param_1 + 0x34) == 2) {
        func_020cf9c8(param_1, 3, -1, 0);
    }
    t = data_0214efdc & 0x200;
    if (t == 0) {
        return;
    }
    if (*(int *)(param_1 + 0x34) == 3) {
        func_020cf9c8(param_1, 0x1b, -1, 0);
        func_020cf9bc(param_1);
        return;
    }
    if (*(int *)(param_1 + 0x34) == 0x1b) {
        func_020cf9c8(param_1, 3, -1, 0);
        func_020cf9bc(param_1);
        return;
    }
}
