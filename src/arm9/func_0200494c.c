#include "ctx.h"

void func_02069fd4(u32 dst, s32 *src, s32 a, s32 b, s32 c, s32 d);

#define CFG_BASE(P) \
    do { \
        *(P) = (*(P) & ~3) | p[0]; \
        if (p[1] != 0) \
            *(P) = *(P) | 0x40; \
        else \
            *(P) = *(P) & ~0x40; \
    } while (0)

void func_0200494c(u32 *param_1, s32 param_2)
{
    s32 local_18[4];
    u16 *p;

    local_18[0] = 0x1000;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0x1000;
    p = (u16 *)(param_1 + 1);
    switch (*param_1) {
    case 0:
        break;
    case 1:
        if (param_2 != 0) {
            *(vu32 *)0x0400001c = 0;
            CFG_BASE((vu16 *)0x0400000e);
            *(vu16 *)0x0400000e = p[2] << 14 | (*(vu16 *)0x0400000e & 0x43)
                | p[3] << 7 | p[4] << 8 | p[5] << 2;
            return;
        }
        *(vu32 *)0x0400101c = 0;
        CFG_BASE((vu16 *)0x0400100e);
        *(vu16 *)0x0400100e = p[2] << 14 | (*(vu16 *)0x0400100e & 0x43)
            | p[3] << 7 | p[4] << 8 | p[5] << 2;
        return;
    case 2:
        if (param_2 != 0) {
            func_02069fd4(0x04000030, local_18, 0, 0, 0, 0);
            CFG_BASE((vu16 *)0x0400000e);
            *(vu16 *)0x0400000e = p[2] << 14 | (*(vu16 *)0x0400000e & 0x43)
                | p[4] << 8 | p[5] << 2 | p[3] << 13;
            return;
        }
        func_02069fd4(0x04001030, local_18, 0, 0, 0, 0);
        CFG_BASE((vu16 *)0x0400100e);
        *(vu16 *)0x0400100e = p[2] << 14 | (*(vu16 *)0x0400100e & 0x43)
            | p[4] << 8 | p[5] << 2 | p[3] << 13;
        return;
    case 3:
        if (param_2 != 0) {
            func_02069fd4(0x04000030, local_18, 0, 0, 0, 0);
            CFG_BASE((vu16 *)0x0400000e);
            {
                u16 t4 = *(vu16 *)(p + 4);
                *(vu16 *)0x0400000e = p[2] << 14 | (*(u16 *)0x0400000e & 0x43)
                    | t4 << 8 | p[3] << 13;
            }
            return;
        }
        func_02069fd4(0x04001030, local_18, 0, 0, 0, 0);
        CFG_BASE((vu16 *)0x0400100e);
        {
            u16 t4 = *(vu16 *)(p + 4);
            *(vu16 *)0x0400100e = p[2] << 14 | (*(u16 *)0x0400100e & 0x43)
                | t4 << 8 | p[3] << 13;
        }
        return;
    case 4:
        if (param_2 != 0) {
            func_02069fd4(0x04000030, local_18, 0, 0, 0, 0);
            CFG_BASE((vu16 *)0x0400000e);
            {
                u16 t4 = *(vu16 *)(p + 4);
                *(vu16 *)0x0400000e = p[2] << 14 | (*(u16 *)0x0400000e & 0x43)
                    | 0x80 | t4 << 8 | p[3] << 13;
            }
            return;
        }
        func_02069fd4(0x04001030, local_18, 0, 0, 0, 0);
        CFG_BASE((vu16 *)0x0400100e);
        {
            u16 t4 = *(vu16 *)(p + 4);
            *(vu16 *)0x0400100e = p[2] << 14 | (*(u16 *)0x0400100e & 0x43)
                | 0x80 | t4 << 8 | p[3] << 13;
        }
        return;
    case 5:
        if (param_2 != 0) {
            func_02069fd4(0x04000030, local_18, 0, 0, 0, 0);
            CFG_BASE((vu16 *)0x0400000e);
            {
                u16 t4 = *(vu16 *)(p + 4);
                *(vu16 *)0x0400000e = p[2] << 14 | (*(u16 *)0x0400000e & 0x43)
                    | 0x84 | t4 << 8 | p[3] << 13;
            }
            return;
        }
        func_02069fd4(0x04001030, local_18, 0, 0, 0, 0);
        CFG_BASE((vu16 *)0x0400100e);
        {
            u16 t4 = *(vu16 *)(p + 4);
            *(vu16 *)0x0400100e = p[2] << 14 | (*(u16 *)0x0400100e & 0x43)
                | 0x84 | t4 << 8 | p[3] << 13;
        }
    }
    return;
}
