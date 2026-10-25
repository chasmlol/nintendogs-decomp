#include "ctx.h"

extern int func_020c8164(u32 a, int b);
extern void func_020c6300(void *obj, int a, void *b, void *c, int d, void *e, void *f, void *g, void *h, void *i);
extern void func_020dadb8(void);
extern void func_020dad84(void);
extern void func_020dad68(void);
extern void func_020dad5c(void);

void func_020da9e4(int param_1)
{
    int iVar1;

    iVar1 = func_020c8164((u16)*(u16 *)(param_1 + 0xa0), *(int *)(param_1 + 0xf8));
    func_020c6300((void *)param_1, *(int *)(param_1 + 0xf8), (void *)(param_1 + 0xfc), (void *)(param_1 + 0x108),
                  iVar1, (void *)func_020dadb8, 0, (void *)func_020dad84, (void *)func_020dad68, (void *)func_020dad5c);
}
