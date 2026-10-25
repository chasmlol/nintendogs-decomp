#include "ctx.h"

extern s32 data_0213e4dc;
extern s32 func_02069ec4(void);
extern void func_0206c258(s32 a, u32 b, s32 c, u32 d);
extern void func_0206c7d4(u32 dst, u32 src, u32 n);

void func_0206b4b4(u32 param_1, s32 param_2, u32 param_3)
{
    s32 iVar1;

    iVar1 = func_02069ec4();
    if (data_0213e4dc != -1 && param_3 > 0x1c) {
        func_0206c258(data_0213e4dc, param_1, iVar1 + param_2, param_3);
        return;
    }
    func_0206c7d4(param_1, iVar1 + param_2, param_3);
    return;
}
