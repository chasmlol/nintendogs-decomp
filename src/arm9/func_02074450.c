#include "ctx.h"

extern u32 data_0213e514;
extern u32 data_0213e510;
extern u32 data_0213e50c;
extern void func_0206c7f0(u32 a, u32 *b, u32 c);

void func_02074450(u32 *param_1, u32 param_2)
{
    vu32 tmp = 0;
    func_0206c7f0(tmp, param_1, 0x54);
    param_1[3] = data_0213e514;
    param_1[5] = data_0213e510;
    param_1[7] = data_0213e50c;
    param_1[1] = param_2;
}
