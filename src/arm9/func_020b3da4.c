#include "ctx.h"

extern u8 *data_02159468;
extern u8 *data_0215be48;
extern u8 *data_02159444;
extern u8 *data_02159060;
extern BOOL func_020ad77c(u8 *p);
extern s32 func_ov005_0216722c(u32 a);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020b40d8(void);

void func_020b3da4(u8 *param_1)
{
    s32 iVar3;
    u32 uVar2;
    BOOL bVar1;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        bVar1 = func_020ad77c(param_1);
        if (bVar1) {
            *(s16 *)(param_1 + 0x2a) = 0;
        }
        return;
    case 1:
        break;
    case 2:
        goto done;
    default:
        goto done;
    }
    if (*(s16 *)(param_1 + 0x2a) == 0) {
        goto A;
    }
    if (*(s16 *)(param_1 + 0x2a) == 1) {
        goto B;
    }
    return;
A:
    if (*(s16 *)(data_02159468 + 0x20) <= 0) {
        uVar2 = 0;
    } else {
        uVar2 = *(u32 *)(data_02159468 + 4);
    }
    if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
        *(s16 *)(param_1 + 0x2e) = 2;
        *(s16 *)(param_1 + 0x30) = 0;
        *(s16 *)(param_1 + 0x100) = 7;
        return;
    }
    iVar3 = func_ov005_0216722c(uVar2);
    if (iVar3 != 0) {
        *(s16 *)(param_1 + 0x2a) = 1;
        *(s16 *)(param_1 + 0x30) = 0;
        func_02097b94(2, 0xdba, 0, (u32)func_020b40d8, 1);
        *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) & ~1;
        return;
    }
    return;
B:
    if (*(s32 *)(data_02159060 + 0xa4) != 0) {
        *(s16 *)(param_1 + 0x2e) = 2;
        *(s16 *)(param_1 + 0x30) = 0;
        *(s16 *)(param_1 + 0x100) = 7;
        return;
    }
    return;
done:
    return;
}
