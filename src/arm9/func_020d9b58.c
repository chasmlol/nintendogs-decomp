#include "ctx.h"
#pragma opt_propagation off

extern u32 data_02159428;
extern u32 data_021449ec;
extern u32 data_021449e0;
extern u32 data_021449e4;
extern u32 data_021449dc;
extern u32 data_021449c8;
extern u32 data_021449bc;
extern u32 data_021449c0;
extern u32 data_02144a00;
extern u32 func_02062164(void);
extern void func_020d9484(s32 a, s32 b);
extern s32 func_020be21c(void);
extern u32 func_020be20c(void);
extern s32 func_020c8db4(s32 a);
extern void func_020cb4c8(s32 *a, s32 *b, s32 c);

void func_020d9b58(s32 *param_1, s32 param_2)
{
    s64 lVar1;
    s32 iVar8;
    s32 iVar7;
    s32 jVar8;
    s32 jVar7;
    u32 uVar6;
    s32 tt;
    s32 tq;
    s32 dd;
    s32 blk[3];

    if (*param_1 == param_2) {
        return;
    }
    *param_1 = param_2;
    iVar7 = *param_1;
    switch (iVar7) {
    case 0:
        func_020d9484((s32)param_1, 1);
        return;
    case 1:
        iVar7 = func_020be21c();
        blk[1] = func_020be20c();
        blk[0] = 0;
        blk[2] = iVar7;
        iVar7 = func_020c8db4(-1);
        *(s16 *)((u8 *)param_1 + 0x42) = (s16)iVar7;
        func_020cb4c8(param_1 + 1, blk, *(s16 *)((u8 *)param_1 + 0x42));
        return;
    case 2:
        if (*(u16 *)(data_02159428 + 6) != 0x12) {
            param_1[13] = data_021449ec;
            iVar7 = data_021449e0;
            iVar8 = data_021449e4;
            uVar6 = func_02062164();
            tq = (s32)(uVar6 << 12) / 32767;
            dd = iVar7 - iVar8;
            *(s16 *)(param_1 + 14) = (s16)(((s64)(iVar8 + (s32)(((s64)dd * (s64)tq + 0x800) >> 12)) * 0xB60B60B60BLL + ((s64)0x800 << 32)) >> 44);
            param_1[15] = data_021449dc;
        } else {
        param_1[13] = data_021449c8;
        jVar7 = data_021449bc;
        jVar8 = data_021449c0;
        uVar6 = func_02062164();
        tq = (s32)(uVar6 << 12) / 32767;
        dd = jVar7 - jVar8;
        *(s16 *)(param_1 + 14) = (s16)(((s64)(jVar8 + (s32)(((s64)dd * (s64)tq + 0x800) >> 12)) * 0xB60B60B60BLL + ((s64)0x800 << 32)) >> 44);
        param_1[15] = data_02144a00;
        }
        return;
    }
}
