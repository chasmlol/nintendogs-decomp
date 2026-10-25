#include "ctx.h"

extern void func_02022b7c(u8 *p);
extern u32 func_02027540(u8 *p);
extern void func_0209c084(u32 p, u32 v);
extern void func_0203e908(u8 *p, s32 v);

void func_0200df88(u8 *param_1)
{
    u32 piVar1;

    func_02022b7c(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 1 && *(u32 *)(param_1 + 0x464) == 0 && *(u32 *)(param_1 + 0x2a4) == 0) {
        piVar1 = func_02027540(param_1);
        func_0209c084(piVar1, 0x44);
        piVar1 = func_02027540(param_1);
        func_0209c084(piVar1, 0x43);
        *(u32 *)(param_1 + 0x464) = 1;
    }
    if (*(u16 *)(param_1 + 0xfc) > 0x3c) {
        if (*(u32 *)(param_1 + 0x2a4) == 0) {
            func_0203e908(param_1, (s16)0x412);
        }
    }
}
