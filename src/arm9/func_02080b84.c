#include "ctx.h"

extern void func_02080b08(void);
extern void func_02080b6c(void);

void func_02080b84(void)
{
    for (;;) {
        func_02080b08();
        func_02080b6c();
    }
}
