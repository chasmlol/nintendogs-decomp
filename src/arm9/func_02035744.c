#include "ctx.h"
u32 func_02035744(u8 *obj, s32 limit)
{
    if (*(s16 *)(obj + 0x162) == *(s16 *)(obj + 0x152) && *(s16 *)(obj + 0x14e) <= limit) {
        return 1;
    }
    return 0;
}
