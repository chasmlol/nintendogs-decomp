#include "ctx.h"

extern s32 data_0213e4dc;
void func_0206c0d8(s32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0206c804(u32 *a, u32 b, u32 c);

void func_0206aacc(u32 *param_1, u32 param_2, u32 param_3)
{
    s32 v1;

    v1 = data_0213e4dc;
    if (v1 != -1) {
        func_0206c0d8(v1, (u32)param_1, param_2 + 0x068a0000, param_3, 0, 0);
        return;
    }
    func_0206c804(param_1, param_2 + 0x068a0000, param_3);
}
