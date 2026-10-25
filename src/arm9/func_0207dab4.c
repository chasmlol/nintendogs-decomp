#include "ctx.h"

u32 func_0207dab4(u32 *list, u8 *node)
{
    u32 prev;
    u32 next;
    prev = *(u32 *)(node + 8);
    next = *(u32 *)(node + 0xc);
    if (prev != 0) {
        *(u32 *)(prev + 0xc) = next;
    } else {
        list[0] = next;
    }
    if (next != 0) {
        *(u32 *)(next + 8) = prev;
    } else {
        list[1] = prev;
    }
    return prev;
}
