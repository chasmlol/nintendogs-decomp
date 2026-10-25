#include "ctx.h"

extern u32 data_0214f464;
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f, u32 g);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_02035584(u8 *p, u32 a);

void func_ov003_0217afd4(u8 *param_1)
{
    s16 sVar1;
    s32 iVar2;
    u32 uVar3;
    u32 *P;

    iVar2 = 0;
    if (*(u16 *)(param_1 + 0xfc) >= 60) {
        P = *(u32 **)&data_0214f464;
        uVar3 = *P * 0x10dcd + 1;
        *P = uVar3;
        if ((u16)((((u32)(u16)uVar3) * 30u) >> 16) == 0) {
            iVar2 = 1;
        }
    }
    func_ov003_0217b43c(param_1, -1, -1, 0, 1, iVar2, 23, 23);
    sVar1 = *(s16 *)(param_1 + 0x154);
    switch (sVar1) {
    case 0:
        P = *(u32 **)&data_0214f464;
        uVar3 = *P * 0x10dcd + 1;
        *P = uVar3;
        uVar3 = (u32)(u16)((((u32)(u16)uVar3) * 60u) >> 16);
        switch (uVar3) {
        case 0:
            func_0203e8cc(param_1, 1, 40);
            return;
        case 1:
            func_0203e8cc(param_1, 1, 41);
            return;
        }
        return;
    case 40:
        iVar2 = func_02035584(param_1, 1);
        if (iVar2 != 0) {
            func_0203e8cc(param_1, 1, 42);
        }
        return;
    case 41:
        iVar2 = func_02035584(param_1, 1);
        if (iVar2 != 0) {
            func_0203e8cc(param_1, 1, 43);
        }
        return;
    }
}
