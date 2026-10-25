#include "ctx.h"
extern u8 *func_01ffdb08(s32 x);
typedef struct { u32 w[3]; } Blk12;
void func_02007f98(u8 *p)
{
    u8 *a = func_01ffdb08(2);
    u32 loc[3];
    if (a == NULL) {
        return;
    }
    if (p == NULL) {
        return;
    }
    *(Blk12 *)loc = *(Blk12 *)(a + 0x2e8);
    loc[1] = 0;
    *(u32 *)(p + 0x20) = loc[0] + (*(u32 **)(*(u32 **)(p + 0x18)))[1];
    *(u32 *)(p + 0x24) = loc[1] + (*(u32 **)(*(u32 **)(p + 0x18)))[2];
    *(u32 *)(p + 0x28) = loc[2] + (*(u32 **)(*(u32 **)(p + 0x18)))[3];
}
