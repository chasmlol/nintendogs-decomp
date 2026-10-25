#include "ctx.h"

extern void func_0208d640(void);
extern u32 data_02159468;

void func_020bc844(void)
{
    void (*fp)(u32) = (void (*)(u32))func_0208d640;
    fp(*(u32 *)(*(u8 **)&data_02159468 + 0x28));
}
