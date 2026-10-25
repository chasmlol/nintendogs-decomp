#include "ctx.h"

void func_02069f4c(u32 addr, s32 v);

void func_02099920(u8 *param_1)
{
    vu32 *r;
    vu32 *s;

    if (*(u16 *)(param_1 + 0x78) & 1) {
        r = (vu32 *)0x04000000;
        *r = *r & ~0x800;
        *r = *r & ~0xe000;
        *(vu32 *)0x0400001c = 0;
    }
    if (*(u16 *)(param_1 + 0x78) & 2) {
        s = (vu32 *)0x04001000;
        *s = *s & ~0x100;
        *s = *s & ~0xe000;
        *(vu32 *)0x04001010 = 0;
    }
    if (*(s16 *)(param_1 + 0x74) != 0) {
        func_02069f4c(0x04000050, *(s16 *)(param_1 + 0x90));
        return;
    }
    func_02069f4c(0x04001050, *(s16 *)(param_1 + 0x90));
}
