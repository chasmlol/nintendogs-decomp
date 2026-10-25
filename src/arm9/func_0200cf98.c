#include "ctx.h"

extern BOOL func_02022e14(u32, u32);
extern void func_02029504(u32);
extern void func_0202cd10(u32, u32);

void func_0200cf98(u32 param_1)
{
    BOOL bVar1;
    if (*(s16 *)((u8 *)param_1 + 0xf0) != 0x6f) {
        bVar1 = func_02022e14(param_1, 0x4d);
        if (!bVar1) {
            func_02029504(param_1);
        }
    }
    func_0202cd10(param_1, 0);
}
