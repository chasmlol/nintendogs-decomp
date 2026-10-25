#include "ctx.h"

extern s32 data_0213e4dc;
extern s32 func_02069c04(void);
extern void func_0206c360(s32 h, void *dst, s32 src, u32 n);
extern void func_0206c804(void *dst, void *src, u32 n);

void func_0206b174(u32 *param_1, s32 param_2, u32 param_3)
{
    s32 iVar1;
    iVar1 = func_02069c04();
    if (data_0213e4dc != -1 && param_3 > 0x30) {
        func_0206c360(data_0213e4dc, param_1, iVar1 + param_2, param_3);
        return;
    }
    func_0206c804(param_1, (void *)(iVar1 + param_2), param_3);
}
