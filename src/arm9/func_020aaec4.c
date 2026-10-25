#include "ctx.h"

extern u32 data_02159444;
extern s32 func_0200b8a0(void *a, void *b, void *c);

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

u32 func_020aaec4(u8 *param_1, void *param_2, s32 param_3)
{
    u8 *obj;
    Triple local;
    s32 r;
    obj = *(u8 **)&data_02159444;
    if ((*(u16 *)(obj + 0x84) & 2) != 0) {
        local = *(Triple *)(obj + 0x9c);
        r = func_0200b8a0(param_2, (void *)(*(u8 **)(param_1 + 0x1c) + 0x30), &local);
        if (r < param_3) {
            return 1;
        }
    }
    return 0;
}
