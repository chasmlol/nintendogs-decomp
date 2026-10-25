#include "ctx.h"

extern void (*data_ov019_021611d8[])(u8 *);

void func_ov019_02160c54(u8 *param_1)
{
    s16 i = *(s16 *)(param_1 + 0x1e);
    void (*cb)(u8 *) = data_ov019_021611d8[i];
    cb(param_1);
}
