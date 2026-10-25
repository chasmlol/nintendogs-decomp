#include "ctx.h"

typedef s32 fx32;
typedef union {
    struct { fx32 _00, _01, _02; fx32 _10, _11, _12; fx32 _20, _21, _22; } s;
    fx32 a[9];
} MtxFx33;

extern const u8 data_0212ac4c[9][4];

BOOL func_020785f4(MtxFx33 *pRot, const s16 *pArrayRot3, const s16 *pArrayRot5, u32 info)
{
    if (info & 0x8000) {
        u32 idxPivot;
        const s16 *data;

        pRot->s._00 = pRot->s._01 = pRot->s._02 =
        pRot->s._10 = pRot->s._11 = pRot->s._12 =
        pRot->s._20 = pRot->s._21 = pRot->s._22 = 0;

        info &= 0x7fff;
        data = &pArrayRot3[info * 3];

        {
            fx32 A = data[1];
            fx32 B = data[2];
            idxPivot = (u32)(data[0] & 15);
            pRot->a[idxPivot] = (data[0] & 16) ? -4096 : 4096;
            pRot->a[data_0212ac4c[idxPivot][0]] = A;
            pRot->a[data_0212ac4c[idxPivot][1]] = B;
            pRot->a[data_0212ac4c[idxPivot][2]] = (data[0] & 32) ? -B : B;
            pRot->a[data_0212ac4c[idxPivot][3]] = (data[0] & 64) ? -A : A;
        }
        return FALSE;
    } else {
        const s16 *data;
        s16 _12;

        info &= 0x7fff;
        data = &pArrayRot5[info * 5];

        _12 = (s16)(data[4] & 7);
        pRot->s._11 = data[4] >> 3;
        _12 = (s16)((_12 << 3) | (data[0] & 7));
        pRot->s._00 = data[0] >> 3;
        _12 = (s16)((_12 << 3) | (data[1] & 7));
        pRot->s._01 = data[1] >> 3;
        _12 = (s16)((_12 << 3) | (data[2] & 7));
        pRot->s._02 = data[2] >> 3;
        _12 = (s16)((_12 << 3) | (data[3] & 7));
        pRot->s._10 = data[3] >> 3;
        pRot->s._12 = ((s32)_12 << 19) >> 19;
        return TRUE;
    }
}
