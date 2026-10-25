#include "ctx.h"

extern u32 data_02155f4c;
extern u32 data_02155f44;
extern u32 func_0207fb7c(void);
extern void func_0208060c(void);

void func_020807ac(void)
{
    u32 v = *(u32 *)0x027ffd9c;
    u32 w;
    vu32 *pf;

    if (v >= 0x2600000 && v < 0x2800000) {
        data_02155f4c = v;
    } else {
        data_02155f4c = 0;
    }
    if (data_02155f4c == 0 || (func_0207fb7c() & 0x40000000) == 0) {
        w = (u32)func_0208060c;
        *(u32 *)0x027ffd9c = w;
        pf = (vu32 *)0x027c3000;
        pf[1015] = w;
    }
    data_02155f44 = 0;
}
