#include "ctx.h"

extern void func_020cfd4c(void);
extern u32 data_021594a8;

void func_020cfd34(void)
{
    void (*fp)(u32) = (void (*)(u32))func_020cfd4c;
    fp(data_021594a8);
}
