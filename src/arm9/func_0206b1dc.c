#include "ctx.h"

extern s32 data_0213e4dc;
extern s32 func_02069c38(void);
extern void func_0206c360(s32 a, u32 b, s32 c, u32 d);
extern void func_0206c804(u32 *dst, u32 *src, u32 n);

void func_0206b1dc(u32 *param_1, s32 param_2, u32 param_3)
{
    s32 iVar1;

    iVar1 = func_02069c38();
    if (data_0213e4dc != -1 && param_3 > 0x30) {
        func_0206c360(data_0213e4dc, (u32)param_1, iVar1 + param_2, param_3);
        return;
    }
    func_0206c804(param_1, (u32 *)(iVar1 + param_2), param_3);
    return;
}
