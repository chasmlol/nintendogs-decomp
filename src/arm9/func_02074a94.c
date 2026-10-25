#include "ctx.h"

typedef struct Node Node;
struct Node {
    u8 pad0[0xc];
    void (*cb)(u32 *out, Node *n, u32 v);
    Node *next;
    u8 pad14[6];
    u16 flags[1];
};

u32 func_02074a94(u32 *out, Node *n, s32 idx)
{
    u32 buf[2];
    u32 ret;
    u16 v;

    ret = 0;
    *out = ret;
    do {
        v = n->flags[idx];
        if (v & 0x100) {
            n->cb(buf, n, v & 0xff);
            *out |= buf[0];
            ret = 1;
        }
        n = n->next;
    } while (n != 0);
    return ret;
}
