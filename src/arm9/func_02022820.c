#include "ctx.h"

extern u8 *data_02159444;

void func_02022910(void *p, s32 *v);

void func_02022820(void *param_1)
{
    s32 local[3];
    u8 *g = data_02159444;

    local[0] = (s32)(*(s16 *)(g + 0x86)) << 12;
    local[1] = (s32)(*(s16 *)(g + 0x88)) << 12;
    local[2] = -16384;
    func_02022910(param_1, local);
}
