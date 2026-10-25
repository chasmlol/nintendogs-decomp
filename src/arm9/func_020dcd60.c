#include "ctx.h"

extern void func_02080b84(void);

void func_020dcd60(s32 *tab, s32 n)
{
    s32 i;
    s32 j;
    s32 k;
    s32 half;

    if (n > 128)
        func_02080b84();
    j = 0;
    i = 0;
    half = n / 2;
    for (;;) {
        tab[i] = j;
        i++;
        if (i >= n)
            break;
        k = half;
        if (k <= j) {
            do {
                if (k == 0)
                    func_02080b84();
                j -= k;
                k /= 2;
            } while (k <= j);
        }
        j += k;
    }
}
