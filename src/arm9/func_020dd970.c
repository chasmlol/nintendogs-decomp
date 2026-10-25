#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;

extern fx32 data_027c0930[32];
extern fx32 data_027c0730[32];
extern s32 data_027c0b30[32];
extern s16 data_02126868[];
extern s32 data_027c042c[16];
extern s32 data_027c03ac[16];

extern void func_0206c7f0(u32 data, void *dest, u32 size);
extern fx32 func_0206782c(fx32 x);

#define re data_027c0930
#define im data_027c0730

#define FX_Mul(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

void func_020dd970(s16 *wave)
{
    s32 m;
    s32 w;
    s32 step;
    s32 i;
    s32 j;
    s32 q;
    fx32 c;
    fx32 s;
    s32 k;
    fx32 tr;
    fx32 ti;
    fx32 t;
    vu32 vz;

    for (i = 0; i < 32; i++) {
        re[i] = (wave[i] >> 8) << 12;
    }
    vz = 0;
    func_0206c7f0(vz, im, sizeof(im));
    for (i = 0; i < 32; i++) {
        j = data_027c0b30[i];
        if (i < j) {
            t = re[i];
            re[i] = re[j];
            re[j] = t;
        }
    }

    for (m = 1; m < 32; m = step) {
        step = m * 2;
        w = 0;
        q = 32 / step;
        for (i = 0; i < m; i++, w += q) {
            s32 idx = (w << 11) >> 4;
            c = data_02126868[idx * 2 + 1];
            s = data_02126868[idx * 2];
            for (j = i; j < 32; j += step) {
                k = j + m;
                tr = FX_Mul(s, im[k]) + FX_Mul(c, re[k]);
                ti = FX_Mul(c, im[k]) - FX_Mul(s, re[k]);
                re[k] = re[j] - tr;
                re[j] += tr;
                im[k] = im[j] - ti;
                im[j] += ti;
            }
        }
    }

    for (i = 0; i < 15; i++) {
        re[i] /= 32;
        im[i] /= 32;
    }

    {
        s32 best = 0;
        s32 bestIdx = 1;
        s32 mag;

        data_027c042c[0] = 0;
        for (i = 1; i < 15; i++) {
            data_027c042c[i] = (func_0206782c(FX_Mul(re[i], re[i]) + FX_Mul(im[i], im[i])) << 3) >> 12;
            if (i > 1) {
                mag = data_027c042c[i];
                if (mag > 5) {
                    if (i - bestIdx < 0) {
                        if (best < mag) goto set;
                    }
                    if (i % bestIdx > (i / bestIdx) * 2 && bestIdx - i % bestIdx > (i / bestIdx) * 2) {
                        if ((best * 3) / 2 < mag) goto set;
                    }
                    if (best * 16 < mag) {
                    set:
                        best = mag;
                        bestIdx = i;
                    }
                }
            }
        }
    }

    {
        s32 sum;
        for (i = 0, j = 0; i < 14; i++) {
            sum = 0;
            sum += data_027c042c[j++];
            data_027c03ac[i] = sum;
        }
    }
    for (i = 14; i < 16; i++) {
        data_027c03ac[i] = data_027c03ac[13];
    }
}
