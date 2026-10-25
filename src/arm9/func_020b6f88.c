#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_020ad77c(u8 *p);
extern s32 func_020ab4c0(u8 *p);
extern void func_020ad7c8(u8 *p, u32 a);
extern u32 func_020ad6fc(u8 *p, u32 a);
extern s32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b6f88(u8 *param_1)
{
    u32 uVar2;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        {
            s32 rr = func_020ab4c0(param_1);
            if (rr != 0) {
                return rr;
            }
        }
        uVar2 = *(s32 *)(*(u8 **)&data_0215be48 + 0x1d5c) + 1;
        switch (uVar2) {
        case 0:
            func_020ad7c8(param_1, 12);
            uVar2 = func_020ad6fc(param_1, 0);
            return uVar2;
        case 1:
            break;
        case 2:
            func_020ad7c8(param_1, 14);
            uVar2 = func_020ad6fc(param_1, 0);
            return uVar2;
        case 3:
            break;
        case 4:
            func_020ad7c8(param_1, 15);
            uVar2 = func_020ad6fc(param_1, 0);
            return uVar2;
        }
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        {
            s32 rr = func_020ad690(param_1);
            if (rr == 0) {
                return rr;
            }
        }
        uVar2 = func_020ad8f0(param_1);
        break;
    }
    return uVar2;
}
