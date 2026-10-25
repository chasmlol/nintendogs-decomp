#include "ctx.h"

extern u32 data_02159060;
extern u32 func_020ad77c(u8 *p);
extern u32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u16 *func_020b47b4(u8 *param_1)
{
    u32 t;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return (u16 *)func_020ad77c(param_1);
    case 1:
        t = *(u32 *)(*(u8 **)&data_02159060 + 0xa4);
        if (t == 0) {
            return (u16 *)t;
        }
        *(s16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 0x30) = 0;
        *(u16 *)(param_1 + 0x100) = 2;
        return (u16 *)(param_1 + 0x100);
    case 2:
        break;
    case 3:
        break;
    case 4:
        t = func_020ad690(param_1);
        if (t == 0) {
            return (u16 *)t;
        }
        return (u16 *)func_020ad8f0(param_1);
    }
}
