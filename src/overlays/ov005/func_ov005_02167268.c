#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u8 *data_02159444;
extern u32 data_ov005_02167ed4;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);

u32 func_ov005_02167268(u8 *param_1, s32 *param_2)
{
    s64 lVar1;
    s32 iVar2;
    u32 uVar3;
    s32 iVar4;
    s32 loc[4];
    s32 t8;
    s32 t4;
    s32 t0;

    iVar2 = func_01ffdb08((s32)*(s16 *)*(u8 **)(param_1 + 0x214));
    if (iVar2 == 0) {
        return 0;
    }
    if (*(s16 *)(param_1 + 0x90) != 3) {
        return 0;
    }
    if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 1) != 0) {
        if (*(s16 *)(param_1 + 0x94) == 0x3f) {
            t8 = *(s32 *)(param_1 + 0xe8);
            t4 = *(s32 *)(param_1 + 0xe4);
            t0 = *(s32 *)(param_1 + 0xe0);
            loc[0] = t0;
            loc[1] = t4;
            loc[2] = t8;
            iVar4 = (s32)data_ov005_02167ed4;
            iVar2 = func_02028130(iVar2);
            lVar1 = (s64)iVar2 * iVar4 + 0x800;
            uVar3 = (u32)(lVar1 >> 12);
            lVar1 = (s64)(s32)uVar3 * (s32)0xfffff333 + 0x800;
            func_01ff832c((u32)(lVar1 >> 12), loc, (s32 *)(param_1 + 0xbc), param_2);
            return 1;
        }
        if (*(s16 *)(param_1 + 0x94) == 0x3e) {
            *(T3 *)param_2 = *(T3 *)(param_1 + 0xbc);
            return 1;
        }
    }
    return 0;
}
