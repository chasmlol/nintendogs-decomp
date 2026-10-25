#include "ctx.h"

extern void func_0200277c(void);
extern void func_020660bc(s32 a, s32 b);
extern void func_02080b84(void);

void func_02066120(void)
{
    if (((s32)(*(u16 *)0x027fffa8 & 0x8000)) >> 15) {
        func_0200277c();
    }
    func_020660bc(1, 1);
    func_02080b84();
}
