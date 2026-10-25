#include "ctx.h"
extern void (*data_ov019_02161488[])(u8 *obj);
void func_ov019_0215e2d8(u8 *obj)
{
    s16 idx = *(s16 *)(obj + 0x1e);
    data_ov019_02161488[idx](obj);
}
