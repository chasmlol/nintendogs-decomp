#include "ctx.h"
extern u32 func_02069e18(void);
extern void func_0206c258(u32 a, u32 b, u32 c, u32 d);
extern void func_0206c7d4(u32 a, u32 b, u32 c);
extern u32 data_0213e4dc;
void func_0206b3e4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 iVar1;
    iVar1 = func_02069e18();
    if (data_0213e4dc != 0xffffffff && param_3 > 0x1c) {
        func_0206c258(data_0213e4dc, param_1, iVar1 + param_2, param_3);
        return;
    }
    func_0206c7d4(param_1, iVar1 + param_2, param_3);
}
