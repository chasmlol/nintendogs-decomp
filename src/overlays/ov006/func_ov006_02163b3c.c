#include "ctx.h"
extern u32 data_ov006_02166020[];
extern u8 data_ov006_02166040[];
typedef struct { u32 w[12]; } Blk48;
void func_ov006_02163b3c(u8 **pp, u32 *p2, u32 p3, s32 idx)
{
    s32 i = 0;
    u32 s9;
    u32 s10;
    u32 s11;
    Blk48 *src;
    do {
        if ((u32)(*pp)[1] == data_ov006_02166020[i]) {
            idx = i;
        }
        i = i + 1;
    } while (i < 8);
    src = (Blk48 *)(data_ov006_02166040 + idx * 48);
    s11 = p2[11];
    s10 = p2[10];
    s9 = p2[9];
    *(Blk48 *)p2 = *src;
    p2[9] = s9;
    p2[10] = s10;
    p2[11] = s11;
}
