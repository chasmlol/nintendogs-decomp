#include "ctx.h"

extern u8 func_020ad77c(u8 *p);
extern u8 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b4fdc(u8 *param_1)
{
    u8 bVar2;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        return (u32)param_1;
    case 4:
        bVar2 = func_020ad690(param_1);
        if (bVar2 != 0) {
            return func_020ad8f0(param_1);
        }
        return bVar2;
    }
    return (u32)param_1;
}
