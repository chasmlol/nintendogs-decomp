#include "ctx.h"

extern int func_020c8164(u32 a, int b);
extern void func_020c6300(void *obj, int a, int b, int c, int d, void *e, void *f, int g, void *h, void *i);
extern void func_020eb4c0(void);
extern void func_020eb45c(void);
extern void func_020eb448(void);
extern void func_020eb43c(void);

void func_020eb280(int param_1)
{
    int iVar1;

    iVar1 = func_020c8164((u16)*(u16 *)(param_1 + 0xa0), *(int *)(param_1 + 0xf8));
    func_020c6300((void *)param_1, *(int *)(param_1 + 0xf8), 0, 0, iVar1,
                  (void *)func_020eb4c0, (void *)func_020eb45c, 0,
                  (void *)func_020eb448, (void *)func_020eb43c);
}
