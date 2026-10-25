#include "ctx.h"

extern u8 *data_02159424;
extern u8 *func_02044ccc(s32 i);

u32 func_020a4d2c(void)
{
    u32 r5 = 1;
    s32 i = 0;
    if (*(s16 *)(data_02159424 + 0x20) > 0) {
        do {
            u8 *e = func_02044ccc(i);
            if (e != 0) {
                if (*(u32 *)(e + 0x94) == 0) {
                    r5 = 0;
                    break;
                }
            }
            i = (s16)(i + 1);
        } while (i < *(s16 *)(data_02159424 + 0x20));
    }
    return r5;
}
