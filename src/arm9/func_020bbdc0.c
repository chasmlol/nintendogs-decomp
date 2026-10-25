#include "ctx.h"

extern u8 *data_02159464;
extern void func_020ced70(u8 *a);

void func_020bbdc0(void)
{
    ((void (*)(u8 *))func_020ced70)(data_02159464 + 0x144);
}
