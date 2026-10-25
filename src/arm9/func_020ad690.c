#include "ctx.h"
extern u8 *data_0215be48;
extern s32 func_02003a7c(void);
extern s32 func_02003a44(void);
u32 func_020ad690(u8 *p)
{
    u32 r4 = 1;
    u16 fl = *(u16 *)(p + 44);
    if ((fl & 1) != 0) {
        if (func_02003a7c() == 0) {
            r4 = 0;
        }
    } else if ((fl & 2) != 0) {
        if (func_02003a44() == 0) {
            r4 = 0;
        }
    } else {
        u8 *q = data_0215be48;
        if (q != NULL) {
            s32 bc = *(volatile s32 *)(q + 0xbc);
            s32 b8 = *(volatile s32 *)(q + 0xb8);
            if (b8 == bc) {
                r4 = 0;
            }
        }
    }
    return r4;
}
