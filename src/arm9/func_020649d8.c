#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32);
extern s32 func_0206419c(void);
extern u8 *func_020641b8(void);

s32 func_020649d8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r5;
    s32 iVar1;
    r5 = func_02080b08();
    iVar1 = func_0206419c();
    if (iVar1 != 0) {
        func_02080b1c(r5);
        return iVar1;
    }
    {
        u8 *p = func_020641b8();
        u32 *slot = (u32 *)(p + param_1 * 4);
        *(u32 *)((u8 *)slot + 0xc0) = param_2;
        *(u32 *)((u8 *)slot + 0x100) = param_3;
    }
    func_02080b1c(r5);
    return 0;
}
