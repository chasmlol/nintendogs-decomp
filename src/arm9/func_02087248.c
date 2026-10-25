#include "ctx.h"

u32 func_02080b08(void);
void func_02088410(u32 *p);
void func_0207f4e0(u32 *p);
void func_02080b1c(u32 x);

void func_02087248(u32 *param_1, u32 param_2)
{
    u32 t;
    t = func_02080b08();
    func_02088410(param_1);
    param_1[3] = param_1[3] & 0xffffffb0;
    param_1[5] = param_2;
    func_0207f4e0(param_1 + 6);
    func_02080b1c(t);
}
