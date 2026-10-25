#include "ctx.h"

extern u32 data_02159444;
extern s32 func_01ffdb08(u32 a);
extern s32 func_020c736c(u8 *p, u32 v);
extern s32 func_02034250(s32 a);
extern s32 func_02034208(s32 a);
extern void func_020ab178(u32 a);
extern s32 func_020c5fbc(u8 *p);
extern void func_020c5f4c(u8 *p, u32 v);

u32 func_020c2b4c(u8 *param_1, u32 param_2)
{
    s32 iVar2;
    s32 iVar3;
    u32 uVar4;
    iVar2 = func_01ffdb08(param_2);
    if (iVar2 == 0) {
        return iVar2;
    }
    iVar3 = func_020c736c(param_1, param_2);
    if (iVar3 == 0) {
        return iVar3;
    }
    uVar4 = (u32)(s32)*(s16 *)(param_1 + 144);
    switch (uVar4) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 8:
        break;
    case 1:
    case 3:
        goto B;
    default:
        goto RET;
    }
    return (u32)func_020c5fbc(param_1);
B:
    iVar3 = func_02034250(iVar2);
    if (iVar3 != 0 || func_02034208(iVar2) != 0) {
        func_020ab178(2);
    } else {
        func_020ab178(1);
    }
    func_020c5f4c(param_1, param_2);
    uVar4 = *(u32 *)&data_02159444;
    *(u32 *)(uVar4 + 0x50) = 0;
    return uVar4;
RET:
    return uVar4;
}
