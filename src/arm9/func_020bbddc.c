#include "ctx.h"

extern u32 data_02159464;
extern void func_020ced60(void);

void func_020bbddc(void)
{
    ((void (*)(u32))func_020ced60)(data_02159464 + 0x144);
}
