#include "ctx.h"
extern u8 data_0215be48[];
extern u16 *func_0210f100(s32 a, s32 b);
extern u8 *func_01ffdb08(s32 a);
extern u8 func_02028100(u8 *p);
extern s32 func_0208fc60(u32 a, u32 b);
extern s32 func_020fc938(s32 a, s32 b, u32 c, s32 d);

s32 func_0211ea50(s32 param_1, u32 param_2)
{
    s32 iVar4;
    u8 bVar1;
    u16 *psVar2;
    s32 iVar3;
    u8 *puVar4;
    s32 sv;

    puVar4 = *(u8 **)data_0215be48 + 0x1d84;
    iVar3 = 0;
    iVar4 = 0;
    psVar2 = func_0210f100((s16)*(s16 *)(puVar4 + 8), (s16)*(s16 *)(puVar4 + 10));
    if (param_1 == 0x30005) {
        goto C5;
    }
    if (param_1 != 0x30006) {
        goto END;
    }
    sv = *(s32 *)puVar4;
    switch (sv) {
    case 0:
    case 1:
    case 2:
        goto L012;
    case 3:
        goto L3;
    case 4:
        goto L4;
    default:
        goto END;
    }

L012:
    iVar4 = func_020fc938(2, iVar4, (u32)(u16)psVar2[3], iVar4);
    goto END;
L4:
    iVar4 = func_020fc938(2, 1, (u32)(u16)psVar2[3], iVar4);
    goto END;
L3:
    iVar4 = func_020fc938(2, 2, (u32)(u16)psVar2[3] + 0xffffe0e8u, iVar4);
    goto END;
C5:
    iVar3 = (s32)func_01ffdb08((s16)*(s16 *)(*(u8 **)data_0215be48 + 0x1dac));
    bVar1 = func_02028100((u8 *)iVar3);
    iVar4 = func_0208fc60((u32)bVar1, param_2);
END:
    return iVar4;
}
