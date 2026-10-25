#include "ctx.h"

extern u32 func_020c49ac(u8 *p);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02034808(s32 a);
extern s32 func_020c81d4(s32 a, void *b, u32 c, s32 *d);
extern s32 func_020bd824(u8 *p, s32 a, s32 b, s32 c);

u32 func_020c48b8(u8 *param_1)
{
    s32 local_28[3];
    s32 iVar4;
    s32 iVar5;
    u32 uVar2;
    s32 iVar3;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
    case 1:
        break;
    case 2:
        return func_020c49ac(param_1);
    case 3:
        func_020c49ac(param_1);
        iVar3 = *(s32 *)(param_1 + 0x214);
        iVar5 = 0;
        local_28[0] = 0;
        local_28[1] = 0;
        local_28[2] = 0;
        do {
            iVar4 = func_01ffdb08(iVar5);
            if (iVar4 != 0) {
                if (func_02034808(iVar4) != 0) {
                    if (func_020c81d4(iVar4, (u8 *)iVar3 + 0x78, 0x4000, local_28) != 0) {
                        return (u32)func_020bd824(param_1, 6, iVar5, -1);
                    }
                }
            }
            uVar2 = (u32)(iVar5 + 1) << 16;
            iVar5 = (s32)uVar2 >> 16;
        } while (iVar5 < 3);
        return uVar2;
    case 4:
    case 5:
        break;
    case 6:
        func_020c49ac(param_1);
        break;
    default:
        break;
    }
    return;
}
