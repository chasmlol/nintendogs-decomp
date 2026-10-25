#include "ctx.h"

extern u32 data_021592ac;
extern u32 func_02070888(u32 a);

u32 func_020a191c(void)
{
    if (data_021592ac != 0) {
        if (func_02070888((u32)&data_021592ac) == 123) {
            return 1;
        }
    }
    return 0;
}
