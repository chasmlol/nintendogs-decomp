#include "ctx.h"
extern u8 data_02159074[];
extern u8 data_0212fdc6[];
extern u8 data_02132484[];
extern s32 func_020a091c(void);
u8 func_020a366c(void)
{
    u16 k = *(u16 *)(data_02159074 + 0x18);
    if (k == 24) {
        s32 i = func_020a091c();
        return data_02132484[i];
    }
    return data_0212fdc6[k * 6];
}
