#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern s32 data_ov005_02167ee0;
extern s32 data_ov005_02167ee4;
extern u8 *data_02159444;
extern s32 data_ov005_02167edc;

extern void func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern s32 func_020678b4(s32 *a, s32 *b);
extern void func_020c8b40(u8 *p, s32 v);
extern void func_ov005_02166cc0(u8 *p);
extern void func_ov005_02166e74(u8 *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

void func_ov005_02166b80(u8 *param_1)
{
    s32 unaff_r4;
    s32 iVar3;
    s32 iVar4;
    u8 *psVar5;
    s32 iStack_28[3];
    s32 aiStack_1c[3];

    if (*(s16 *)(param_1 + 0x90) == 0) {
        return;
    }
    if (*(s16 *)(param_1 + 0x90) == 2) {
        goto A;
    }
    if (*(s16 *)(param_1 + 0x90) == 3) {
        goto B;
    }
    return;
A:
    psVar5 = *(u8 **)(param_1 + 0x214);
    func_02044ca0(*(s16 *)(param_1 + 0x9c));
    iVar3 = func_01ffdb08(*(s16 *)psVar5);
    iVar4 = func_01ffdb08(*(s16 *)(*(u8 **)(param_1 + 0x214)));
    if (*(s16 *)(param_1 + 0x94) == 63) {
        unaff_r4 = data_ov005_02167ee0;
    } else if (*(s16 *)(param_1 + 0x94) == 62) {
        unaff_r4 = data_ov005_02167ee4;
    }
    iVar4 = func_02028130(iVar4);
    *(s32 *)(param_1 + 0x120) = FX_Mul(unaff_r4, iVar4);
    func_02027668(iVar3, aiStack_1c);
    *(T3 *)iStack_28 = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
    iVar4 = func_020678b4(iStack_28, aiStack_1c);
    iVar3 = func_02028130(iVar3);
    iVar4 = iVar4 - FX_Mul(data_ov005_02167edc, iVar3);
    func_020c8b40(param_1, iVar4);
    func_ov005_02166e74(param_1);
    return;
B:
    func_ov005_02166cc0(param_1);
}
