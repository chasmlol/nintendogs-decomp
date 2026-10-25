#include "ctx.h"

void func_02074394(u8 **p0, u8 *n)
{
    u8 *head = *p0;
    u8 *prev;
    u8 *cur;
    u8 *w;
    u8 *t;
    if (head == 0) {
        *p0 = n;
        return;
    }
    if (*(u8 **)(head + 0x10) != 0) {
        goto general;
    }
    if (head[0x18] <= n[0x18]) {
        goto store_head;
    }
    w = *(u8 **)(n + 0x10);
    t = n;
    while (w != 0) {
        t = *(u8 **)(t + 0x10);
        w = *(u8 **)(t + 0x10);
    }
    *(u8 **)(t + 0x10) = head;
    *p0 = n;
    return;
store_head:
    *(u8 **)(head + 0x10) = n;
    return;
general:
    prev = head;
    cur = *(u8 **)(head + 0x10);
    if (cur == 0) {
        goto end_store;
    }
body:
    if (!(cur[0x18] >= n[0x18])) {
        goto adv;
    }
    w = *(u8 **)(n + 0x10);
    t = n;
    while (w != 0) {
        t = *(u8 **)(t + 0x10);
        w = *(u8 **)(t + 0x10);
    }
    *(u8 **)(prev + 0x10) = n;
    *(u8 **)(t + 0x10) = cur;
    return;
adv:
    prev = cur;
    cur = *(u8 **)(cur + 0x10);
    if (cur != 0) {
        goto body;
    }
end_store:
    *(u8 **)(prev + 0x10) = n;
    return;
}
