#include "ctx.h"

extern BOOL func_020d5aa0(void);
extern u32 data_ov007_02160e6c;

u32 func_ov007_02160358(void)
{
    if (func_020d5aa0() && data_ov007_02160e6c == 4) {
        return 1;
    }
    return 0;
}
