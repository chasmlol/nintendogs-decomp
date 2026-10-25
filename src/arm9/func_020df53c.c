#include "ctx.h"
extern u32 data_0215ae78;
extern void func_020df9cc(void);
void func_020df53c(u32 param_1)
{
    u32 r;
    data_0215ae78 = 0;
    r = 3;
    switch (param_1) {
    case 0:
        r = 0;
        break;
    case 1:
        r = 1;
        break;
    case 2:
        r = 2;
        break;
    case 3:
        data_0215ae78 = 1;
    }
    ((void (*)(u32))func_020df9cc)(r);
}
