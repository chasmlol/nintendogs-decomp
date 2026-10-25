#include "ctx.h"
u32 *func_0207da84(u32 *list, u32 *node, u32 *after)
{
    u32 *x;
    node[2] = (u32)after;
    if (after != NULL) {
        x = (u32 *)after[3];
        after[3] = (u32)node;
    } else {
        x = (u32 *)list[0];
        list[0] = (u32)node;
    }
    node[3] = (u32)x;
    if (x != NULL) {
        x[2] = (u32)node;
    } else {
        list[1] = (u32)node;
    }
    return node;
}
