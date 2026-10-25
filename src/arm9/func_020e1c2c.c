#include "ctx.h"

extern u32 data_0215b660;
extern u32 data_02144a80;
typedef struct { u16 a; u16 b; } TE;
extern TE data_0215b678[];

void func_0206c9b8(u8 *p, u16 *out, s32 n);
void func_020dfe88(u8 *p, u16 *q, s32 n, u16 *d);

void func_020e1c2c(u8 *param_1)
{
    u32 i;
    u8 *p;
    u32 n;
    u16 buf[6];

    i = 0;
    p = param_1 + 12;
    if (data_0215b660 != 0) {
        return;
    }
    func_0206c9b8(p, buf, 4);
    p += 4;
    for (; i < data_02144a80; i += 2) {
        n = data_02144a80 / 40;
        if (i % n == 0) {
            data_0215b678[i / n] = *(TE *)buf;
        }
        func_020dfe88(p, buf + 2, 2, buf);
        p++;
    }
    data_0215b660 = 1;
}
