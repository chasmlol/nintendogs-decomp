#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

void func_020092f4(u8 *p, s32 id)
{
    u8 *fl;
    u8 *h;
    u32 z;
    u32 *node;
    u32 *s;

    s = *(u32 **)(p + id * 4 + 0x8fc);
    if (s == 0) {
        return;
    }
    fl = p + 0x83f + id;
    if (*(s8 *)fl != 0) {
        node = *(u32 **)((u8 *)s + 8);
        if (node != 0) {
            do {
                *(u16 *)((u8 *)node + 0x2e) = *(u16 *)((u8 *)node + 0x2c);
                node = (u32 *)*node;
            } while (node != 0);
        }
        node = *(u32 **)((u8 *)s + 0x10);
        if (node != 0) {
            do {
                *(u16 *)((u8 *)node + 0x2e) = *(u16 *)((u8 *)node + 0x2c);
                node = (u32 *)*node;
            } while (node != 0);
        }
    }
    *(u32 *)((u8 *)s + 0x1c) = (*(u32 *)((u8 *)s + 0x1c) & 0xfffffffeu) | 1;
    z = 0;
    *(u32 *)(p + id * 4 + 0x8fc) = z;
    h = p + id * 2;
    h = h + 0x800;
    *(s16 *)(h + 28) = -1;
    *(s8 *)(p + id + 0x838) = -1;
    *(s8 *)(p + id + 0x831) = -1;
    *(s8 *)(p + id + 0x82a) = -1;
    *fl = 1;
    *(u16 *)(h + 70) = z;
    *(u32 *)(p + id * 12 + 0x8a8) = z;
    *(u32 *)(p + id * 12 + 0x8ac) = z;
    *(u32 *)(p + id * 12 + 0x8b0) = z;
    *(u32 *)(p + id * 12 + 0x854) = z;
    *(u32 *)(p + id * 12 + 0x858) = z;
    *(u32 *)(p + id * 12 + 0x85c) = z;
}
