#include "ctx.h"

extern void *func_0203541c(void *p);
extern void func_0203e8cc(void *p, s32 a, s32 b);
extern u32 func_ov003_02198298(void *p);

u32 func_0200f8e0(void *param_1)
{
    u8 *p = (u8 *)param_1;
    u8 *o;
    s32 t;
    o = (u8 *)func_0203541c(param_1);
    if (o != NULL) {
        func_0203e8cc(param_1, 2, 1);
        t = *(s16 *)(o + 0x90);
        switch (t) {
        case 4:
            if ((s8)p[0x8b] != 5 && (s8)p[0x8b] != 4) {
                *(s32 *)(p + 0x948) = 1;
            }
            break;
        case 7:
            if ((s8)p[0x8b] != 5 && (s8)p[0x8b] != 4) {
                *(s32 *)(p + 0x948) = 8;
            }
            break;
        }
        return func_ov003_02198298(param_1);
    }
    return 0;
}
