#include "ctx.h"

extern void func_020d39dc(void);
extern u32 data_02159464;

void func_020bbcdc(void)
{
    void (*fp)(void *) = (void (*)(void *))func_020d39dc;
    fp(*(u8 **)&data_02159464 + 0x21c);
}
