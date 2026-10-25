#include "ctx.h"

extern s32 data_0213e4dc;
extern u32 data_02150e78;
void func_0206c0d8(s32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0206c804(u32 *a, u32 b, u32 c);

void func_0206b9d0(u32 *param_1, u32 param_2)
{
    s32 v1;
    u32 v2;

    v1 = data_0213e4dc;
    v2 = data_02150e78;
    if (v1 != -1) {
        func_0206c0d8(v1, (u32)param_1, v2, param_2, 0, 0);
        return;
    }
    func_0206c804(param_1, v2, param_2);
}
