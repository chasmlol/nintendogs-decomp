#include "ctx.h"
extern u32 data_02150e70;
extern u32 data_0213e4dc;
extern void func_0206c0d8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0206c804(u32 a, u32 b, u32 c);

void func_0206bb60(u32 *param_1, int param_2, u32 param_3)
{
    u32 r4 = data_02150e70 + param_2;
    if (data_0213e4dc != 0xffffffff) {
        func_0206c0d8(data_0213e4dc, (u32)param_1, r4, param_3, 0, 0);
        return;
    }
    func_0206c804((u32)param_1, r4, param_3);
}
