#include "ctx.h"

#pragma opt_propagation off

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct { fx16 s; fx16 invs; } ScaleFx16;
typedef struct { fx32 s; fx32 invs; } ScaleFx32;

void func_020790a0(fx32 *s_invs, fx32 Frame, const u32 *pData, const void *pArrayBase)
{
    u32 frame = (u32)(Frame >> 12);
    const void *pArray = (const u8 *)pArrayBase + pData[1];
    u32 info = pData[0];
    u32 idx;
    u32 idx_sub;

    if (info & 0xc0000000) {
        u32 last_interp = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (frame & 1) {
                if (frame > last_interp) {
                    idx = (last_interp >> 1) + 1;
                    goto noninterp;
                }
                idx_sub = frame >> 1;
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
                    if (info & 0x20000000) {
                        const ScaleFx16 *p = (const ScaleFx16 *)pArray;
                        s_invs[0] = ((p[idx].s << 1) + p[idx].s + p[idx_sub].s) >> 2;
                        s_invs[1] = ((p[idx].invs << 1) + p[idx].invs + p[idx_sub].invs) >> 2;
                    } else {
                        const ScaleFx32 *p = (const ScaleFx32 *)pArray;
                        fx64 two;
                        fx32 v;
                        fx32 v_sub;
                        v = p[idx].s;
                        v_sub = p[idx_sub].s;
                        two = ((fx64)v << 1) + v;
                        s_invs[0] = (fx32)((two + v_sub) >> 2);
                        two = (fx64)p[idx].invs << 1;
                        s_invs[1] = (fx32)((two + p[idx].invs + p[idx_sub].invs) >> 2);
                    }
                    return;
                }
                idx_sub = frame >> 2;
                goto interp2;
            }
            idx = frame >> 2;
            goto noninterp;
        }
    }
    idx = frame;
noninterp:
    if (info & 0x20000000) {
        s_invs[0] = ((const ScaleFx16 *)pArray)[idx].s;
        s_invs[1] = ((const ScaleFx16 *)pArray)[idx].invs;
    } else {
        s_invs[0] = ((const ScaleFx32 *)pArray)[idx].s;
        s_invs[1] = ((const ScaleFx32 *)pArray)[idx].invs;
    }
    return;
interp2:
    if (info & 0x20000000) {
        const ScaleFx16 *p = &((const ScaleFx16 *)pArray)[idx_sub];
        s_invs[0] = (p[0].s + p[1].s) >> 1;
        s_invs[1] = (p[0].invs + p[1].invs) >> 1;
    } else {
        const ScaleFx32 *p = &((const ScaleFx32 *)pArray)[idx_sub];
        s_invs[0] = (p[0].s + p[1].s) >> 1;
        s_invs[1] = (p[0].invs + p[1].invs) >> 1;
    }
}
