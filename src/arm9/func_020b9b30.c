#include "ctx.h"

extern u8 *data_02159060;

extern u32 func_020ad77c(s16 *p);
extern s16 *func_020b9d98(s16 *p);
extern u32 func_020ad690(s16 *p);
extern s16 *func_020ad8f0(s16 *p);

s16 *func_020b9b30(s16 *p)
{
    u32 b;

    switch (p[23]) {
    case 0:
        return (s16 *)func_020ad77c(p);
    case 1:
        return func_020b9d98(p);
    case 2:
        break;
    case 3:
        break;
    case 4:
        if (*(s16 *)(data_02159060 + 108) != 0) {
            return p;
        }
        b = func_020ad690(p);
        if (b == 0) {
            return (s16 *)b;
        }
        return func_020ad8f0(p);
    }
}
