#include "ctx.h"

typedef s32 fx32;
typedef union {
    struct { fx32 _00, _01, _02; fx32 _10, _11, _12; fx32 _20, _21, _22; } s;
    fx32 a[9];
} MtxFx33;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { u32 header; u16 numFrame; u16 numNode; u32 flag; u32 ofsRot3; u32 ofsRot5; } JntAnm;

extern BOOL func_020785f4(MtxFx33 *pRot, const void *pArrayRot3, const void *pArrayRot5, u32 info);
extern void func_02067af0(const VecFx32 *pSrc, VecFx32 *pDst);

void func_02078794(MtxFx33 *pRot, fx32 Frame, const u32 *pData, const JntAnm *pJntAnm)
{
    u32 idx0;
    const void *pArrayRot3;
    u32 info;
    const void *pArrayRot5;
    u32 idx1;
    fx32 remainder;
    u32 frame;
    s32 step;
    const u16 *pArray;

    pArrayRot3 = (const u8 *)pJntAnm + pJntAnm->ofsRot3;
    pArrayRot5 = (const u8 *)pJntAnm + pJntAnm->ofsRot5;
    frame = (u32)(Frame >> 12);
    pArray = (const u16 *)((const u8 *)pJntAnm + pData[1]);
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
            idx0 = frame;
            idx1 = 0;
            goto step1;
        }
        if (func_020785f4(pRot, pArrayRot3, pArrayRot5, pArray[frame])) {
            fx32 x = (pRot->s._01 * pRot->s._12 - pRot->s._02 * pRot->s._11) >> 12;
            fx32 y = (pRot->s._02 * pRot->s._10 - pRot->s._00 * pRot->s._12) >> 12;
            fx32 z = (pRot->s._00 * pRot->s._11 - pRot->s._01 * pRot->s._10) >> 12;
            pRot->s._20 = x;
            pRot->s._21 = y;
            pRot->s._22 = z;
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
        }
    } else {
        idx0 = frame;
        idx1 = frame + 1;
step1:
        remainder = Frame & 0xfff;
        step = 1;
    }

    {
        MtxFx33 r0, r1;
        BOOL p = FALSE;

        p |= func_020785f4(&r0, pArrayRot3, pArrayRot5, pArray[idx0]);
        p |= func_020785f4(&r1, pArrayRot3, pArrayRot5, pArray[idx1]);

        pRot->s._00 = r0.s._00 * step + ((remainder * (r1.s._00 - r0.s._00)) >> 12);
        pRot->s._01 = r0.s._01 * step + ((remainder * (r1.s._01 - r0.s._01)) >> 12);
        pRot->s._02 = r0.s._02 * step + ((remainder * (r1.s._02 - r0.s._02)) >> 12);
        pRot->s._10 = r0.s._10 * step + ((remainder * (r1.s._10 - r0.s._10)) >> 12);
        pRot->s._11 = r0.s._11 * step + ((remainder * (r1.s._11 - r0.s._11)) >> 12);
        pRot->s._12 = r0.s._12 * step + ((remainder * (r1.s._12 - r0.s._12)) >> 12);

        func_02067af0((VecFx32 *)&pRot->s._00, (VecFx32 *)&pRot->s._00);
        func_02067af0((VecFx32 *)&pRot->s._10, (VecFx32 *)&pRot->s._10);

        if (!p) {
            pRot->s._20 = r0.s._20 * step + ((remainder * (r1.s._20 - r0.s._20)) >> 12);
            pRot->s._21 = r0.s._21 * step + ((remainder * (r1.s._21 - r0.s._21)) >> 12);
            pRot->s._22 = r0.s._22 * step + ((remainder * (r1.s._22 - r0.s._22)) >> 12);
            func_02067af0((VecFx32 *)&pRot->s._20, (VecFx32 *)&pRot->s._20);
        } else {
            fx32 x = (pRot->s._01 * pRot->s._12 - pRot->s._02 * pRot->s._11) >> 12;
            fx32 y = (pRot->s._02 * pRot->s._10 - pRot->s._00 * pRot->s._12) >> 12;
            fx32 z = (pRot->s._00 * pRot->s._11 - pRot->s._01 * pRot->s._10) >> 12;
            pRot->s._20 = x;
            pRot->s._21 = y;
            pRot->s._22 = z;
        }
    }
}
