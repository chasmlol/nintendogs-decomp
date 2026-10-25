#include "ctx.h"

extern void func_02068c64(void *p);
extern u8 data_02150e42[];

void func_02068bcc(void)
{
    void (*fp)(void *) = func_02068c64;
    fp(data_02150e42);
}
