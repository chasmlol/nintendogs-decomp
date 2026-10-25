#include "ctx.h"

extern s32 data_0213e4dc;
extern void func_0206c0d8(s32 a, void *b, s32 c, u32 d, void *e, s32 f);
extern void func_0206c804(void *a, s32 b, u32 c);

void func_0206abb0(void *param_1, s32 param_2, u32 param_3)
{
    s32 h;
    h = data_0213e4dc;
    if (h != -1) {
        func_0206c0d8(h, param_1, param_2 + 0x06898000, param_3, NULL, 0);
        return;
    }
    func_0206c804(param_1, param_2 + 0x06898000, param_3);
}
