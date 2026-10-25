#include "ctx.h"

void func_02038138(u8 *param_1, u32 param_2)
{
    s32 c;
    s32 cls;
    u32 v;
    switch (param_2) {
    case 0:
        *(u16 *)(param_1 + 256 + 72) = 17;
        return;
    case 1:
        *(u16 *)(param_1 + 256 + 72) = 18;
        return;
    case 2:
        *(u16 *)(param_1 + 256 + 72) = 19;
        return;
    case 3:
        c = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 12);
        if (c < 0xccd) {
            cls = 0;
        } else {
            if (c <= 0x119a) {
                cls = 1;
            } else {
                cls = 2;
            }
        }
        if (cls == 0) {
            goto b22;
        }
        if (cls == 1) {
            goto b21;
        }
        if (cls != 2) {
            goto b21;
        }
        goto b20;
    b22:
        v = 22;
        goto st;
    b21:
        v = 21;
        goto st;
    b20:
        v = 20;
    st:
        *(u16 *)(param_1 + 256 + 72) = (u16)v;
        return;
    default:
        return;
    }
}
