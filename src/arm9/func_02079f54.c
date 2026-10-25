#include "ctx.h"

typedef u16 GXRgb;

GXRgb func_02079f54(const void *pArrayBase, u32 info, u32 frame)
{
    const GXRgb *p;
    u32 last_interp;
    u32 idx;
    u32 idx_sub;

    if (info & 0x20000000) {
        return (GXRgb)info;
    }
    p = (const GXRgb *)((const u8 *)pArrayBase + (info & 0xffff));
    if (!(info & 0xc0000000)) {
        return p[frame];
    }
    last_interp = (info & 0x1fff0000) >> 16;
    if (info & 0x40000000) {
        if (frame & 1) {
            if (frame > last_interp) {
                return *(p + (last_interp >> 1) + 1);
            }
            info = frame >> 1;
            goto interp2;
        }
        return p[frame >> 1];
    } else {
        if (frame & 3) {
            if (frame > last_interp) {
                return *(p + (last_interp >> 2) + (frame & 3));
            }
            if (frame & 1) {
                u32 c0, c1;
                u32 g0, rb0;
                if (frame & 2) {
                    idx_sub = frame >> 2;
                    idx = idx_sub + 1;
                } else {
                    idx = frame >> 2;
                    idx_sub = idx + 1;
                }
                c0 = p[idx];
                c1 = p[idx_sub];
                g0 = c0 & 0x3e0;
                rb0 = c0 & 0x7c1f;
                return (GXRgb)(((((rb0 + rb0 + rb0 + (c1 & 0x7c1f)) >> 2) & 0x7c1f)) |
                               ((((g0 + g0 + g0 + (c1 & 0x3e0)) >> 2) & 0x3e0)));
            }
            info = frame >> 2;
            goto interp2;
        }
        return p[frame >> 2];
    }
interp2:
    {
        const GXRgb *pp = p + info;
        u32 c0 = pp[0];
        u32 c1 = pp[1];
        return (GXRgb)(((((c0 & 0x7c1f) + (c1 & 0x7c1f)) >> 1) & 0x7c1f) |
                       ((((c0 & 0x3e0) + (c1 & 0x3e0)) >> 1) & 0x3e0));
    }
}
