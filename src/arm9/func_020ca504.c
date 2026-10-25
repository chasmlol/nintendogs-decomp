#include "ctx.h"

extern s32 data_02142c98;
extern s16 data_02159490;
extern u32 data_021594a0;
extern u8 *data_02159428;
extern u32 data_02142c94;
extern u8 *func_01ffdb08(s32 a);
extern void func_020c8e4c(u8 *p, s32 *q);
extern s32 func_02028130(u8 *p);
extern void func_020cdc04(s32 *a, s32 *b, s32 c, s32 d, u16 e);
extern s32 func_0206782c(s32 v);

void func_020ca504(s32 *param_1, s32 param_2)
{
    s64 lVar1;
    s64 lVar2;
    s32 iVar4;
    s32 iVar5;

    iVar4 = (s32)func_01ffdb08(param_2);
    func_020c8e4c((u8 *)iVar4, param_1 + 3);
    iVar5 = data_02142c98;
    iVar4 = func_02028130((u8 *)iVar4);
    lVar1 = (s64)iVar4 * (s64)iVar5 + 0x800;
    func_020cdc04(param_1, param_1 + 3, (u32)(lVar1 >> 12), 0, (u16)data_02159490);
    param_1[1] = data_021594a0;
    iVar5 = *(s32 *)(data_02159428 + 0xc);
    lVar2 = (s64)param_1[0] * (s64)param_1[0] + 0x800;
    lVar1 = (s64)param_1[2] * (s64)param_1[2] + 0x800;
    iVar4 = func_0206782c((u32)(lVar2 >> 12) + (u32)(lVar1 >> 12));
    if (iVar4 > iVar5) {
        if (param_1[1] < 0x8000) {
            param_1[1] = 0x8000;
        }
    } else if (param_1[1] < 0x1000) {
        param_1[1] = 0x1000;
    }
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142c94;
}
