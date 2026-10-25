#include "ctx.h"

extern u8 *data_021594d0;

void func_020d508c(void);
s32 func_020d6978(void *cb, void *buf);

u32 func_020d5540(void)
{
    u32 buf;
    u8 *o = data_021594d0;

    if (*(u32 *)(o + 0x20) != 1) {
        goto ret0;
    }
    *(u32 *)(o + 0x20) = 4;
    if (func_020d6978((void *)func_020d508c, &buf) != 0) {
        *(u32 *)(data_021594d0 + 0x24) = 0;
        return 1;
    }
    return 0;

ret0:
    return 0;
}
