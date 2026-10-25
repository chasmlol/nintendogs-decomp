#include "ctx.h"
typedef struct { u8 pad[72]; s16 tab[3][6]; } TabS;
extern TabS data_02136a14;

s32 func_02038834(u8 *o, s32 p2)
{
    s32 v = *(s32 *)(*(u8 **)(o + 0x9e8) + 0xc);
    s16 k;
    s16 i;

    if (v < 0xccd)
        k = 0;
    else if (v <= 0x119a)
        k = 1;
    else
        k = 2;
    for (i = 5; i > 0; i--) {
        if (data_02136a14.tab[k][i] >= 0 && data_02136a14.tab[k][i] <= p2)
            return i;
    }
    return i;
}
