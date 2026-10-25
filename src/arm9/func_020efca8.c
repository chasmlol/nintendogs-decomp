#include "ctx.h"

extern void func_020efed4(void);
extern void func_020efea0(void);
extern void func_020efe84(void);
extern void func_020efe78(void);
extern int func_020c8164(u32 a, u32 b);
extern void func_020c6300(void *a, u32 b, void *c, void *d, int e, void *f, void *g, void *h, void *i, void *j);

void func_020efca8(int param_1)
{
    int iVar1;

    iVar1 = func_020c8164((u32)*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
    func_020c6300((void *)param_1, *(u32 *)(param_1 + 0xf8), (void *)(param_1 + 0xfc), (void *)(param_1 + 0x108),
                  iVar1, (void *)func_020efed4, (void *)0, (void *)func_020efea0, (void *)func_020efe84,
                  (void *)func_020efe78);
}
