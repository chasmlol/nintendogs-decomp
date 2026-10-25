#include "ctx.h"
typedef struct Node { u8 pad[0xc]; void (*fn)(u32, struct Node *, u32); struct Node *next; u8 pad2[6]; u16 flags[1]; } Node;
u32 func_02074e7c(u32 param_1, Node *param_2, s32 param_3)
{
    u32 r = 0;
    do {
        u16 v = param_2->flags[param_3];
        if (v & 0x100) {
            param_2->fn(param_1, param_2, v & 0xff);
            r = 1;
        }
        param_2 = param_2->next;
    } while (param_2 != 0);
    return r;
}
