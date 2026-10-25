#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef struct { u32 header; u16 numFrame; u16 numNode; u32 flag; } JntAnm;
typedef struct { fx16 s; fx16 invs; } ScaleFx16;
typedef struct { fx32 s; fx32 invs; } ScaleFx32;

void func_02078ee8(fx32 *s_invs, fx32 Frame, const u32 *pData, const JntAnm *pJntAnm)
{
    const void *pArray = (const u8 *)pJntAnm + pData[1];
    u32 frame = (u32)(Frame >> 12);
    u32 info = pData[0];
    u32 idx0, idx1;
    fx32 remainder;
    s32 step;
    s32 shift;
    fx32 s0, invs0, s1, invs1;

    if (frame == pJntAnm->numFrame - 1) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                frame = (frame >> 1) + (frame & 1);
            } else {
                frame = (frame >> 2) + (frame & 3);
            }
        }
        if (pJntAnm->flag & 2) {
            idx0 = frame;
            idx1 = 0;
            goto step1;
        }
        if (info & 0x20000000) {
            s_invs[0] = ((const ScaleFx16 *)pArray)[frame].s;
            s_invs[1] = ((const ScaleFx16 *)pArray)[frame].invs;
        } else {
            s_invs[0] = ((const ScaleFx32 *)pArray)[frame].s;
            s_invs[1] = ((const ScaleFx32 *)pArray)[frame].invs;
        }
        return;
    }

    if (info & 0xc0000000) {
        u32 last_interp = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (frame >= last_interp) {
                idx0 = last_interp >> 1;
                idx1 = idx0 + 1;
                goto step1;
            }
            idx0 = frame >> 1;
            idx1 = idx0 + 1;
            remainder = Frame & 0x1fff;
            step = 2;
            shift = 1;
        } else {
            if (frame >= last_interp) {
                idx0 = (frame >> 2) + (frame & 3);
                idx1 = idx0 + 1;
                goto step1;
            }
            idx0 = frame >> 2;
            idx1 = idx0 + 1;
            remainder = Frame & 0x3fff;
            step = 4;
            shift = 2;
        }
    } else {
        idx0 = frame;
        idx1 = frame + 1;
step1:
        remainder = Frame & 0xfff;
        step = 1;
        shift = 0;
    }

    if (info & 0x20000000) {
        s0 = ((const ScaleFx16 *)pArray)[idx0].s;
        invs0 = ((const ScaleFx16 *)pArray)[idx0].invs;
        s1 = ((const ScaleFx16 *)pArray)[idx1].s;
        invs1 = ((const ScaleFx16 *)pArray)[idx1].invs;
    } else {
        s0 = ((const ScaleFx32 *)pArray)[idx0].s;
        invs0 = ((const ScaleFx32 *)pArray)[idx0].invs;
        s1 = ((const ScaleFx32 *)pArray)[idx1].s;
        invs1 = ((const ScaleFx32 *)pArray)[idx1].invs;
    }
    s_invs[0] = (s0 * step + ((remainder * (s1 - s0)) >> 12)) >> shift;
    s_invs[1] = (invs0 * step + ((remainder * (invs1 - invs0)) >> 12)) >> shift;
}
