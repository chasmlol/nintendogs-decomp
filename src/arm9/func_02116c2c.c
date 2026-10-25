#include "ctx.h"

extern void func_02112610(void);
extern u8 data_02149f58;

void func_02116c2c(void)
{
    void (*fp)(u32, void *, u32, u32) = (void (*)(u32, void *, u32, u32))func_02112610;
    fp(2, &data_02149f58, 2, 2);
}
