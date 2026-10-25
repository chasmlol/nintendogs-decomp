#include "ctx.h"
extern void (*data_ov019_02161428[])(u8 *obj);
void func_ov019_021608b4(u8 *obj)
{
    s16 idx = *(s16 *)(obj + 0x1e);
    data_ov019_02161428[idx](obj);
}
