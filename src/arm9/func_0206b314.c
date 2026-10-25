#include "ctx.h"

extern u32 data_0213e4dc;
extern s32 func_02069d0c(void);
extern void func_0206c258(u32 a, u32 b, u32 c, u32 d);
extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_0206b314(u32 param_1, s32 param_2, u32 param_3)
{
    s32 iVar1;

    iVar1 = func_02069d0c();
    if (data_0213e4dc != -1 && param_3 > 28) {
        func_0206c258(data_0213e4dc, param_1, iVar1 + param_2, param_3);
        return;
    }
    func_0206c7d4(param_1, iVar1 + param_2, param_3);
}
