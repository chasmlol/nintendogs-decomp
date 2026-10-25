#include "ctx.h"

extern void (*data_0213e690[])(u32 *, u32);

void func_02077470(u32 *param_1)
{
    do {
        param_1[2] = param_1[2] & 0xffffffbf;
        {
            u8 b = *(u8 *)(*param_1);
            data_0213e690[b & 0x1f](param_1, b & 0xe0);
        }
    } while ((param_1[2] & 0x20) == 0);
}
