#include "ctx.h"

extern void *func_02027540(u8 *p);
extern void func_0209c084(void *p, u32 n);
extern void func_0203e908(u8 *p, u32 n);

void func_ov003_0218f23c(u8 *param_1)
{
    void *piVar1;

    if (*(s16 *)(param_1 + 0xfa) == 32) {
        *(u16 *)(param_1 + 0xfa) = 0;
    }
    if (*(u16 *)(param_1 + 0xfc) > 1 && *(s32 *)(param_1 + 0x464) == 0 && *(s32 *)(param_1 + 0x2a4) == 0) {
        piVar1 = func_02027540(param_1);
        func_0209c084(piVar1, 0x44);
        piVar1 = func_02027540(param_1);
        func_0209c084(piVar1, 0x43);
        *(s32 *)(param_1 + 0x464) = 1;
    }
    if (*(u16 *)(param_1 + 0xfc) > 0x3c) {
        if (*(s32 *)(param_1 + 0x2a4) == 0) {
            func_0203e908(param_1, 0x433);
        }
    }
}
