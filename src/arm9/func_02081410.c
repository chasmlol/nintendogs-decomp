#include "ctx.h"

extern void func_02081a7c(void);
extern void func_02081438(u32 a, void *f);

void func_02081410(u32 a)
{
    func_02081438(a, (void *)func_02081a7c);
}
