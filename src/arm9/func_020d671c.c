#include "ctx.h"

extern u8 data_02144954;
extern void func_02064f68(void);
extern void func_020d6a60(void *p, void *q, u32 a, u32 b);

void func_020d671c(u32 a, u32 b)
{
    void (*fp)(void *, void *, u32, u32) = func_020d6a60;
    fp(&data_02144954, (void *)func_02064f68, a, b);
}
