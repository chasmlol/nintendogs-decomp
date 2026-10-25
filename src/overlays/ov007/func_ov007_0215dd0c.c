#include "ctx.h"

extern int data_ov007_02160d80;
extern void func_ov007_0215d860(void);
extern u32 func_020d6bb8(u32 n, s16 *buf);
extern u32 func_020d6a3c(void (*cb)(void), s16 *buf);

u32 func_ov007_0215dd0c(void)
{
    u8 *obj;
    s16 buf[2];

    obj = *(u8 **)&data_ov007_02160d80;
    if (*(u32 *)(obj + 0x28) != 0) goto ret0;
    *(u32 *)(obj + 0x34) = 0;
    *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x30) = 0;
    *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x32) = 0;
    if (func_020d6bb8(2, buf) != 0) {
        return func_020d6a3c(func_ov007_0215d860, buf);
    }
    return 0;
ret0:
    return 0;
}
