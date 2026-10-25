#include "ctx.h"

extern u8 *data_02157cc4;
extern u8 data_0214efdc[];
extern u8 data_0214f004[];
extern s32 func_020e2350(void);
extern void func_020de098(void);
extern s32 func_020dde0c(s32 a);
extern u32 *func_020df960(void);

void func_0208afac(void)
{
    s16 sVar1;
    s32 iVar3;
    s32 iVar4;
    s16 uVar6;
    u32 *puVar5;

    iVar3 = func_020e2350();
    sVar1 = *(s16 *)(data_02157cc4 + 10);
    if (sVar1 > 0) {
        *(s16 *)(data_02157cc4 + 10) = sVar1 - 1;
    }
    if ((u16)(*(u16 *)data_0214efdc & 0xc0f) != 0) {
        *(s16 *)(data_02157cc4 + 10) = 10;
    } else {
        if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
            *(s16 *)(data_02157cc4 + 10) = 10;
        }
    }
    if (data_02157cc4 != 0) {
        *(s32 *)data_02157cc4 = -1;
        *(s16 *)(data_02157cc4 + 8) = -1;
    }
    func_020de098();
    uVar6 = 0;
    do {
        iVar4 = func_020dde0c(uVar6);
        if (iVar4 >= 0) {
            *(s32 *)data_02157cc4 = iVar4;
            *(s16 *)(data_02157cc4 + 8) = uVar6;
            break;
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    *(s32 *)(data_02157cc4 + 0x10) = 0;
    if (*(s32 *)data_02157cc4 < 0 && iVar3 != 0) {
        *(s32 *)(data_02157cc4 + 0x10) = 1;
    }
    puVar5 = func_020df960();
    *(u32 **)(data_02157cc4 + 0xc) = puVar5;
    iVar3 = *(s32 *)data_02157cc4;
    if (iVar3 != -1) {
        *(s32 *)(data_02157cc4 + 4) = iVar3;
    }
}
