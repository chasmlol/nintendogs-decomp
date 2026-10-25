#include "ctx.h"

extern u8 *data_0214e778;
extern void (*data_0213695c)(void);
extern u64 func_02080858(void);
extern void func_0206a514(void);

void func_0200413c(void)
{
    u8 *p = data_0214e778;
    *(u64 *)(p + 0xc4) = func_02080858();
    if (*(u16 *)(p + 10) == 1) {
        func_0206a514();
    }
    data_0213695c();
}
