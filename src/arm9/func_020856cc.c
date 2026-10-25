#include "ctx.h"

#define COPY_BLOCK(p1, p2, vv, ii) \
    do { \
        *(s32 *)((p2) + 0x18) = (vv) - (ii); \
        *(s32 *)((p2) + 0x24) = -(s32)(((s64)*(s32 *)((p2) + 0x24) * (s16)*(u16 *)((u8 *)(p1) + 4) + 0x800) >> 12); \
    } while (0)

void func_020856cc(s32 *param_1, u8 *param_2)
{
    u32 mode = ((u32)(*(u16 *)((u8 *)param_1 + 6) << 30)) >> 30;
    if (mode == 0) {
        goto m0;
    }
    if (mode == 1) {
        goto m1;
    }
    return;
m0:
    {
        s32 iv3;
        s32 v;
        s32 len;
        v = param_1[0];
        iv3 = *(s32 *)(param_2 + 0xc);
        if (iv3 < v) {
            len = *(s32 *)(param_2 + 0x18);
            if (iv3 + len > v) {
                *(u16 *)(param_2 + 46) = *(u16 *)(param_2 + 44);
                return;
            }
        }
        if (iv3 < v) {
            return;
        }
        len = *(s32 *)(param_2 + 0x18);
        if (iv3 + len < v) {
            *(u16 *)(param_2 + 46) = *(u16 *)(param_2 + 44);
        }
        return;
    }
m1:
    {
        s32 iv3;
        s32 v;
        s32 len;
        v = param_1[0];
        iv3 = *(s32 *)(param_2 + 0xc);
        if (iv3 >= v) {
            goto b8;
        }
        len = *(s32 *)(param_2 + 0x18);
        if (iv3 + len <= v) {
            goto b8;
        }
        COPY_BLOCK(param_1, param_2, v, iv3);
        return;
    b8:
        if (iv3 < v) {
            return;
        }
        len = *(s32 *)(param_2 + 0x18);
        if (iv3 + len >= v) {
            return;
        }
        COPY_BLOCK(param_1, param_2, v, iv3);
        return;
    }
}
