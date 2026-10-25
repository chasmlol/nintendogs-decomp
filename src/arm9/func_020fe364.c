#include "ctx.h"

extern void func_02111b3c(void);
extern void func_02003c10(u32);

void func_020fe364(u32 *param_1)
{
    func_02111b3c();
    *param_1 = 0;
    func_02003c10(0x10);
}
