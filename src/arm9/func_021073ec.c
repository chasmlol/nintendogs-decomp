#include "ctx.h"

typedef struct {
    u16 sp;
    u8 *stack[2];
} Reader;

s32 func_021073ec(u8 *data, u32 key1, u32 key2)
{
    Reader r;
    BOOL loop;
    s32 count;
    BOOL found;
    u32 i;

    count = 0;
    found = FALSE;
    loop = TRUE;
    r.sp = 0;
    for (i = 0; i < 2; i++) {
        r.stack[i] = NULL;
    }
    r.stack[r.sp] = data;
    do {
        u32 step;
        u16 *p;

        step = 2;
        p = (u16 *)r.stack[r.sp];
        switch (*p) {
        case 0x1a: {
            u32 key;
            found = FALSE;
            step = p[1] & 0xff;
            key = ((u32)(u16)(p[1] >> 8) << 16) | p[2];
            if (key == key1 || key == key2) {
                found = TRUE;
                count++;
            }
            break;
        }
        case 0:
            loop = FALSE;
            if (found) {
                found = FALSE;
            } else {
                count++;
            }
            break;
        default:
            found = FALSE;
            break;
        }
        r.stack[r.sp] = (u8 *)(step + (u32)p);
    } while (loop);
    return count;
}
