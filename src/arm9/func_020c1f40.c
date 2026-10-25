#include "ctx.h"
extern u16 data_02159470;
extern void func_020bd500(void);
extern void func_020c1f68(void);
extern void func_020c1fc4(void);
void func_020c1f40(u16 param_1)
{
    void (*fp)(void *, void *) = (void (*)(void *, void *))func_020bd500;
    data_02159470 = param_1;
    fp((void *)func_020c1fc4, (void *)func_020c1f68);
}
