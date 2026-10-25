#include "ctx.h"

typedef s16 fx16;
typedef s32 fx32;

/* packed (s, t) fx16 pair of a texture SRT animation */
typedef struct { fx16 s, t; } Pair;

/* NitroSystem G3D texture SRT animation: fetch the packed vector value for a frame */
u32 func_0207a310(const void *pArrayBase, u32 info, u32 data, u32 frame)
{
    const Pair *p;
    u32 last_interp;
    u32 idx;
    u32 idx_sub;

    if (info & 0x20000000) {
        return data;
    }
    p = (const Pair *)((const u8 *)pArrayBase + data);
    if (!(info & 0xc0000000)) {
        idx = frame;
        goto noninterp;
    }
    last_interp = info & 0xffff;
    if (info & 0x40000000) {
        if (frame & 1) {
            if (frame > last_interp) {
                idx = (last_interp >> 1) + 1;
                goto noninterp;
            }
            idx = frame >> 1;
            goto interp2;
        }
        idx = frame >> 1;
        goto noninterp;
    } else {
        if (frame & 3) {
            if (frame > last_interp) {
                idx = (last_interp >> 2) + (frame & 3);
                goto noninterp;
            }
            if (frame & 1) {
                if (frame & 2) {
                    idx_sub = frame >> 2;
                    idx = idx_sub + 1;
                } else {
                    idx = frame >> 2;
                    idx_sub = idx + 1;
                }
                {
                    /* 3:1 blend */
                    fx32 x0 = p[idx].s;
                    fx32 x1 = p[idx].t;
                    fx32 y0 = p[idx_sub].s;
                    fx32 y1 = p[idx_sub].t;
                    fx32 s = 0L + x0 + x0 + x0;
                    fx32 t = 0L + x1 + x1 + x1;
                    s += y0;
                    t += y1;
                    return ((s >> 2) & 0xffff) | ((u32)(t >> 2) << 16);
                }
            }
            idx = frame >> 2;
            goto interp2;
        }
        idx = frame >> 2;
        goto noninterp;
    }
noninterp:
    return *(const u32 *)&p[idx];
interp2:
    {
        fx32 s = (p[idx].s + (p + 1)[idx].s) >> 1;
        fx32 t = (p[idx].t + (p + 1)[idx].t) >> 1;
        return (s & 0xffff) | ((u32)t << 16);
    }
}
