#include "ctx.h"

extern u32 data_0215ad40;
extern s32 func_020d5298(void);
extern u32 func_020d5318(void);
extern s32 func_020d52ac(void);

u32 func_020d7d34(void)
{
    s32 r;
    u32 u;

    r = func_020d5298();
    if (r != 0) {
        return 5;
    }
    u = func_020d5318();
    switch (u) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
    case 3:
        goto search;
    case 4:
        goto r3;
    default:
        goto r5;
    }
search:
    r = func_020d52ac();
    if (r != 0) {
        if (*(u32 *)(*(u8 **)&data_0215ad40 + 4) == 0) {
            return 2;
        }
        return 4;
    }
    return 3;
r3:
    return 3;
r5:
    return 5;
}
