#include "ctx.h"

typedef struct { u32 w[8]; } Ent32;
extern s16 data_0214b3a4[];
extern u16 func_02093e0c(void);
extern void func_0210f038(void);

s32 func_0211b718(u32 *param_1, u32 param_2, s32 param_3)
{
    s32 iVar7;
    u16 uVar3;
    s16 sVar1;
    s16 *psVar2;

    iVar7 = 0;
    uVar3 = func_02093e0c();
    psVar2 = data_0214b3a4;
    func_0210f038();
    sVar1 = psVar2[2];
    while (sVar1 != -1) {
        if (((*psVar2 == param_3) && (((u16 *)psVar2)[6] != 0)) &&
            ((((u16 *)psVar2)[10] & 0x100) == 0 || ((s32)uVar3 != psVar2[1]))) {
            *(Ent32 *)param_1 = *(Ent32 *)psVar2;
            param_1 = param_1 + 8;
            iVar7 = iVar7 + 1;
        }
        psVar2 = psVar2 + 0x10;
        sVar1 = psVar2[2];
    }
    return iVar7;
}
