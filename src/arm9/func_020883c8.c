#include "ctx.h"
void func_020883c8(u32 *a, u32 *list)
{
    u32 *prev = (u32 *)a[0];
    u32 *next = (u32 *)a[1];
    u32 *cur;
    u32 *last;
    if (prev != NULL) {
        prev[1] = (u32)next;
    }
    if (next != NULL) {
        next[0] = (u32)prev;
    }
    cur = (u32 *)list[1];
    last = list;
    if (cur != NULL) {
        do {
            last = cur;
            cur = (u32 *)cur[1];
        } while (cur != NULL);
    }
    last[1] = (u32)a;
    a[0] = (u32)last;
    a[1] = 0;
}
