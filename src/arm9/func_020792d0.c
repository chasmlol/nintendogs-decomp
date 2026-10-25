#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef struct { u32 header; u16 numFrame; u16 numNode; u32 flag; } JntAnm;

void func_020792d0(fx32 *pVal, fx32 Frame, const u32 *pData, const JntAnm *pJntAnm)
{
    const void *pArray;
    fx32 remainder;
    s32 shift;
    fx32 v0;
    u32 info;
    fx32 v1;
    u32 frame;
    u32 idx;
    s32 step;

    pArray = (const u8 *)pJntAnm + pData[1];
    frame = (u32)(Frame >> 12);
    info = pData[0];

    if (frame == pJntAnm->numFrame - 1) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                frame = (frame >> 1) + (frame & 1);
            } else {
                frame = (frame >> 2) + (frame & 3);
            }
        }
        if (pJntAnm->flag & 2) {
            remainder = Frame & 0xfff;
            if (info & 0x20000000) {
                v0 = ((const fx16 *)pArray)[frame];
                v1 = ((const fx16 *)pArray)[0];
            } else {
                v0 = ((const fx32 *)pArray)[frame];
                v1 = ((const fx32 *)pArray)[0];
            }
            *pVal = v0 + ((remainder * (v1 - v0)) >> 12);
            return;
        }
        if (info & 0x20000000) {
            *pVal = ((const fx16 *)pArray)[frame];
        } else {
            *pVal = ((const fx32 *)pArray)[frame];
        }
        return;
    }

    if (info & 0xc0000000) {
        u32 last_interp = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (frame >= last_interp) {
                idx = last_interp >> 1;
                goto step1;
            }
            idx = frame >> 1;
            remainder = Frame & 0x1fff;
            step = 2;
            shift = 1;
        } else {
            if (frame >= last_interp) {
                idx = (frame >> 2) + (frame & 3);
                goto step1;
            }
            idx = frame >> 2;
            remainder = Frame & 0x3fff;
            step = 4;
            shift = 2;
        }
    } else {
        idx = frame;
step1:
        remainder = Frame & 0xfff;
        step = 1;
        shift = 0;
    }

    {
        fx32 a, b;
        if (info & 0x20000000) {
            const fx16 *p = &((const fx16 *)pArray)[idx];
            a = ((const fx16 *)pArray)[idx];
            b = p[1];
        } else {
            const fx32 *p = &((const fx32 *)pArray)[idx];
            a = p[0];
            b = p[1];
        }
        *pVal = (a * step + ((remainder * (b - a)) >> 12)) >> shift;
    }
}
