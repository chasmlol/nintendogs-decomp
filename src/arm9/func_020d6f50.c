#include "ctx.h"

extern u32 data_0215ad3c;
extern u32 data_0215ad38;

u32 func_020d6f50(void)
{
    if (data_0215ad3c == 0) {
        if (data_0215ad38 == 0) {
            return 1;
        }
    }
    return 0;
}
