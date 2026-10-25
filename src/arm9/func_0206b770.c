#include "ctx.h"

extern s32 data_0213e4dc;

void func_0206c258(s32 a, u32 b, u32 c, u32 d);
void func_0206c7d4(u32 a, u32 b, u32 c);

void func_0206b770(u32 param_1, u32 param_2, u32 param_3)
{
    if (data_0213e4dc != -1 && param_3 > 0x1c) {
        func_0206c258(data_0213e4dc, param_1, param_2 + 0x05000600, param_3);
        return;
    }
    func_0206c7d4(param_1, param_2 + 0x05000600, param_3);
}
