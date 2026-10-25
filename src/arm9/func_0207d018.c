#include "ctx.h"

typedef struct {
    u32 head;
    u32 tail;
    u16 count;
    u16 off;
} List;

extern void func_0207d080(List *l, u8 *n);

void func_0207d018(List *l, u8 *n)
{
    u32 off;
    u32 tail;
    if (l->head == 0) {
        func_0207d080(l, n);
        return;
    }
    off = l->off;
    tail = l->tail;
    *(u32 *)(n + off) = tail;
    *(u32 *)(n + off + 4) = 0;
    *(u32 *)(l->tail + l->off + 4) = (u32)n;
    l->tail = (u32)n;
    l->count = l->count + 1;
}
