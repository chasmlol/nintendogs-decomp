#include "ctx.h"

extern void func_02068a84(void);
extern u8 data_02150e32;

void func_02068a70(void)
{
    void (*fp)(void *) = (void (*)(void *))func_02068a84;
    fp(&data_02150e32);
}
