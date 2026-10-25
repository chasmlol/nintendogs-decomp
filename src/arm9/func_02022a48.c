#include "ctx.h"

extern u8 *data_0214f464;
extern void func_02022a90(void);

void func_02022a48(void)
{
    s8 t = (s8)(*(s8 *)(data_0214f464 + 12) - 2);
    u8 v = (u8)t;
    if (v <= 1) {
        func_02022a90();
    }
}
