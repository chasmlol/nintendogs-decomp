#include "ctx.h"
extern u8 *data_021594d0;
void func_020d3cb0(u32 a)
{
    u8 *p = data_021594d0;
    *(u32 *)(p + 0x34) = 1;
    p = data_021594d0;
    {
        void (*cb)(u32) = *(void (**)(u32))(p + 0x18);
        if (cb != NULL) {
            cb(a);
        }
    }
}
