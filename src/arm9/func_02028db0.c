#include "ctx.h"

extern u8 data_0213c00c[];
extern u8 data_0213bc5c[];
extern u32 func_0202dc50(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e);

u32 func_02028db0(u8 *param_1, u32 param_2)
{
    s16 sVar1;
    s32 bVar2;
    u32 uVar3;
    s32 iVar4;
    u32 rv;

    if (*(u16 *)(param_1 + 0x112) != 0) {
        return 0;
    }
    sVar1 = *(s16 *)(param_1 + 0xf0);
    switch (sVar1) {
    case 111:
        return 0;
    case 0:
        break;
    case 10:
        sVar1 = *(s16 *)(param_2 * 2 + ((s16)(u16)param_1[0xa5] * 0x1e + (u32)data_0213c00c));
        bVar2 = (sVar1 != -1);
        asm { strneh sVar1, [r0, #234] }
        if (bVar2) {
            return 1;
        }
        asm { add r2, r0, #168 }
        asm { mov r3, #0 }
        asm { swpb r1, r3, [r2] }
        asm { add r2, r0, #163 }
        asm { add r1, r0, #256 }
        asm { strh r3, [r1, #18] }
        asm { mov r1, #111 }
        asm { strh r1, [r0, #240] }
        asm { add r1, r0, #165 }
        asm { swpb r0, r3, [r1] }
        asm { swpb r1, r3, [r2] }
        return 1;
    case 11:
        *(s16 *)(param_1 + 0xea) = *(s16 *)(param_2 * 2 + ((s16)(u16)param_1[0xa5] * 0x1e + (u32)data_0213bc5c));
        return 1;
    }
    iVar4 = (s32)*(s16 *)(param_1 + 0xf0);
    bVar2 = 0;
    if (iVar4 > 0xc && iVar4 < 0x6f) {
        bVar2 = 1;
    }
    if (bVar2) {
        uVar3 = func_0202dc50(param_1, 0, param_2, (u16)(iVar4 - 0xc), param_1[0xa5], 1);
        return uVar3;
    }
    asm { add r2, r0, #168 }
    asm { mov r3, #0 }
    asm { swpb r1, r3, [r2] }
    asm { add r1, r0, #256 }
    asm { strh r3, [r1, #18] }
    asm { mov r1, #111 }
    asm { strh r1, [r0, #240] }
    asm { add r1, r0, #165 }
    asm { add r2, r0, #163 }
    asm { swpb r0, r3, [r1] }
    asm { mov rv, r3 }
    asm { swpb r1, r3, [r2] }
    return rv;
}
