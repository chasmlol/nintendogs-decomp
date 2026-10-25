#include "ctx.h"

extern u32 data_021425e8[];
extern u8 *data_02159444;
extern u8 *func_01ffdb08(s32 a);
extern s32 func_0202817c(u8 *p);
extern u8 func_02028100(u8 *p);
extern s32 func_0208fc60(u32 a, u32 b);
extern s32 func_0210befc(void);

s32 func_020b9880(s32 param_1, u32 param_2)
{
    s32 iVar3;
    u8 *iVar2;
    u8 bVar1;

    iVar3 = (s32)data_021425e8;
    switch (param_1) {
    case 0x30002:
        iVar2 = func_01ffdb08((s32)*(s16 *)(*(u8 **)&data_02159444 + 0x112));
        iVar3 = func_0202817c(iVar2) + 0x78;
        break;
    case 0x30005:
        iVar2 = func_01ffdb08((s32)*(s16 *)(*(u8 **)&data_02159444 + 0x112));
        if (iVar2 != NULL) {
            bVar1 = func_02028100(iVar2);
            iVar3 = func_0208fc60((u32)bVar1, param_2);
        }
        break;
    case 0x3000d:
        iVar3 = func_0210befc();
        break;
    }
    return iVar3;
}
