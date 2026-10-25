#include "ctx.h"
extern u32 func_0205ebe0(u32 v);
u32 func_0207d2a4(u8 *p0, u32 p1)
{
    s32 align = func_0205ebe0(p1);
    u32 best_size = 0;
    u32 best_off = 0xffffffff;
    u32 n = *(u32 *)(p0 + 0x24);
    if (n != 0) {
        do {
            u32 data = n + 16;
            int start = ((align - 1) + data) & ~(align - 1);
            u32 end = *(u32 *)(n + 4) + data;
            if (start < end) {
                u32 len = end - start;
                u32 off = start - data;
                if (best_size < len || (best_size == len && best_off > off)) {
                    best_size = len;
                    best_off = off;
                }
            }
            n = *(u32 *)(n + 12);
        } while (0 != n);
    }
    return best_size;
}
