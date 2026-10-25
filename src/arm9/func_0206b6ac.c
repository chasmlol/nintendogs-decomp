#include "ctx.h"

extern u32 data_0213e4dc;

void func_0206c360(u32 a, u32 b, u32 c, u32 d);
void func_0206c804(u32 *a, u32 b, u32 c);

void func_0206b6ac(u32 *param_1, u32 param_2, u32 param_3)
{
    if ((data_0213e4dc != 0xffffffff) && (param_3 > 0x30)) {
        func_0206c360(data_0213e4dc, (u32)param_1, param_2 + 0x07000400, param_3);
        return;
    }
    func_0206c804(param_1, param_2 + 0x07000400, param_3);
}
