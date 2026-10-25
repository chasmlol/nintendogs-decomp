#include "ctx.h"

extern s32 func_02042938(void);
extern void func_020df32c(void);
extern void func_020df3e8(void);

u32 func_020ad128(u8 *param_1)
{
    u32 uVar3;
    s32 iVar2;
    s32 bVar1;

    uVar3 = 1;
    if ((((*(u16 *)0x04000304) & 0x8000) >> 15) == 1 && (iVar2 = func_02042938(), iVar2 != 0)) {
        uVar3 = 0;
    }
    iVar2 = *(s16 *)(param_1 + 0x7c);
    bVar1 = 1;
    switch (iVar2) {
    case 48:
    case 50:
    case 51:
    case 52:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 75:
    case 78:
    case 100:
        bVar1 = 0;
        break;
    }
    if (bVar1 != 0) {
        func_020df32c();
    } else {
        func_020df3e8();
    }
    return uVar3;
}
