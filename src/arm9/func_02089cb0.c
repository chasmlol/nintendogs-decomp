#include "ctx.h"

extern u32 *data_0215617c;
extern u32 *data_0215618c;
extern u32 func_02080b08(u32 p);
extern void func_02080b1c(u32 x);

u32 *func_02089cb0(u32 p)
{
    u32 r;
    u32 *head;
    u32 n;
    r = func_02080b08(p);
    head = data_0215617c;
    if (head == 0) {
        func_02080b1c(r);
        return 0;
    }
    n = *head;
    data_0215617c = (u32 *)n;
    if (n == 0) {
        data_0215618c = 0;
    }
    func_02080b1c(r);
    return head;
}
