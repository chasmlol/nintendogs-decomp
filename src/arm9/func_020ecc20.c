#include "ctx.h"

extern void func_020ec854(void);
extern void func_0208f544(u8 *p, u32 f);
extern u32 func_01ffdb08(s32 v);
extern void func_020276b4(u32 a, u32 b);

void func_020ecc20(u8 *param_1, u32 param_2, s32 param_3)
{
    u32 iVar2;
    *(u32 *)(param_1 + 0x88) = param_2;
    *(s16 *)(param_1 + 0x8c) = (s16)param_3;
    func_0208f544(param_1, (u32)func_020ec854);
    iVar2 = func_01ffdb08(param_3);
    func_020276b4(iVar2, 0);
    switch (*(u32 *)(param_1 + 0x88)) {
    case 0x23:
        break;
    case 0x24:
        break;
    case 0x25:
        break;
    case 0x26:
        break;
    case 0x27:
        break;
    case 0x28:
        break;
    case 0x29:
        goto END;
    case 0x2a:
        break;
    case 0x2b:
        goto END;
    case 0x2c:
        break;
    case 0x2d:
        break;
    case 0x2e:
        break;
    case 0x2f:
        break;
    case 0x30:
        break;
    case 0x31:
        break;
    case 0x32:
        break;
    case 0x33:
        break;
    case 0x34:
        goto END;
    case 0x35:
        goto END;
    case 0x36:
        goto END;
    case 0x37:
        goto END;
    case 0x38:
        goto END;
    case 0x39:
        goto END;
    case 0x3a:
        break;
    case 0x3b:
        break;
    case 0x3c:
        break;
    case 0x3d:
        break;
    default:
        goto END;
    }
    func_020276b4(iVar2, 1);
END:
    return;
}
