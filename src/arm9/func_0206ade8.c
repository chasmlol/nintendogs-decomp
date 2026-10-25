#include "ctx.h"

extern u32 data_02150e5c;
extern u32 data_02150e58;
extern u32 data_0213e4dc;
extern void func_0206c0d8(u32 a, u32 b, u32 *c, u32 d, u32 e, u32 f);
extern void func_0206c804(u32 *a, u32 *b, u32 c);

void func_0206ade8(u32 *param_1, s32 param_2, u32 param_3)
{
    u32 *puVar1;

    puVar1 = (u32 *)((data_02150e5c + param_2) - data_02150e58);
    if (data_0213e4dc != 0xffffffff) {
        func_0206c0d8(data_0213e4dc, (u32)param_1, puVar1, param_3, 0, 0);
        return;
    }
    func_0206c804(param_1, puVar1, param_3);
    return;
}
