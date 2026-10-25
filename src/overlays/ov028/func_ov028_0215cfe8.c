#include "ctx.h"

typedef void (*FnP)(s32 a);

extern u8 *data_ov028_0215df90;

void func_ov028_0215cfe8(s32 param_1)
{
    *(s32 *)(data_ov028_0215df90 + 0x30) = 1;
    {
        FnP fn = *(FnP *)(data_ov028_0215df90 + 0x18);
        if (fn != 0) {
            fn(param_1);
        }
    }
}
