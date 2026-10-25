#include "ctx.h"
#pragma opt_strength_reduction off

extern u8 *data_0214f464;

typedef struct {
    u8 pad[0x140];
    s16 items[2];
} Dog;

void func_02036374(void)
{
    s16 i = 0;
    s16 j;
    u32 entry;
    s16 k;
    do {
        j = 0;
        do {
            if (j < 0 || j >= 3) {
                entry = 0;
            } else {
                entry = *(u32 *)(data_0214f464 + j * 4 + 0x54);
            }
            if (entry != 0) {
                Dog *d = (Dog *)entry;
                k = 0;
                do {
                    if ((s16)(i + 3) == d->items[k]) {
                        d->items[k] = -1;
                    }
                    k = (s16)(k + 1);
                } while (k < 2);
            }
            j = (s16)(j + 1);
        } while (j < 3);
        i = (s16)(i + 1);
    } while (i < 7);
}
