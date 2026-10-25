#include "ctx.h"

extern u32 data_02155c70;
extern u32 data_02155c74;
extern void func_0207d0ac(u32 *p, u32 n);
extern u32 *func_0207d188(u32 p);
extern void func_0207d018(u32 *p, u32 v);

void func_0207d0f8(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5)
{
    param_1[0] = param_2;
    param_1[6] = param_3;
    param_1[7] = param_4;
    param_1[8] = 0;
    param_1[8] = param_1[8] & 0xffffff00;
    param_1[8] = param_1[8] | (param_5 & 0xff);
    func_0207d0ac(param_1 + 3, 4);
    if (data_02155c70 == 0) {
        func_0207d0ac(&data_02155c74, 4);
        data_02155c70 = 1;
    }
    func_0207d018(func_0207d188((u32)param_1), (u32)param_1);
}
