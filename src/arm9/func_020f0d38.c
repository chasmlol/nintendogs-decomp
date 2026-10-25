#include "ctx.h"

extern void func_020f10f8(void);
extern void func_020f10c4(void);
extern void func_020f10a8(void);
extern void func_020f109c(void);
u32 func_020c8164(u32 a, u32 b);
void func_020c6300(void *a, u32 b, void *c, void *d, u32 e, void *f, void *g, void *h, void *i, void *j);

void func_020f0d38(int param_1)
{
    u32 iVar1;

    iVar1 = func_020c8164((u16)*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
    func_020c6300((void *)param_1, *(u32 *)(param_1 + 0xf8), (void *)(param_1 + 0xfc), (void *)(param_1 + 0x108),
                  iVar1, (void *)func_020f10f8, (void *)0, (void *)func_020f10c4, (void *)func_020f10a8, (void *)func_020f109c);
}
