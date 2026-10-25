#include "ctx.h"

extern u8 *data_02159464;
extern void func_020ced24(u8 *p);

void func_020bbdf8(void)
{
    void (*fp)(u8 *) = func_020ced24;
    fp(data_02159464 + 0x144);
}
