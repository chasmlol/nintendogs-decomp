#include "ctx.h"

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_020271b8(s32 a, s32 *b, s32 c);
extern s32 func_02028130(s32 a);

#pragma opt_propagation off
void func_ov005_02162804(u8 *param_1)
{
    s32 iVar3;
    s32 aiStack_48[12];
    s32 local_24;
    s32 local_20;
    s32 local_1c;
    u8 *pp;
    u8 **G;
    s32 uVar4;
    s32 uVar5;

    G = &data_ov005_02167f00;
    pp = param_1;
    iVar3 = func_01ffdb08(*(s16 *)(*G));
    if (*(s32 *)(data_ov005_02167f00 + 4) != 0) {
        func_020271b8(iVar3, aiStack_48, 4);
    } else {
        func_020271b8(iVar3, aiStack_48, 8);
    }
    local_20 = aiStack_48[10];
    local_24 = aiStack_48[9];
    local_1c = aiStack_48[11];
    uVar4 = func_02028130(iVar3);
    {
        s32 t28 = (s32)(((s64)uVar4 * 0x4cd + 0x800) >> 12);
        s32 sm;
        s32 x12;
        *(s32 *)(pp + 0x20) = local_24 + *(s32 *)(*(u8 **)(*(u8 **)(pp + 0x18)) + 4);
        *(s32 *)(pp + 0x24) = local_20 + *(s32 *)(*(u8 **)(*(u8 **)(pp + 0x18)) + 8);
        sm = local_1c + t28;
        x12 = *(s32 *)(*(u8 **)(*(u8 **)(pp + 0x18)) + 0xc);
        *(s32 *)(pp + 0x28) = sm + x12;
    }
    uVar5 = func_02028130(iVar3);
    *(s32 *)(pp + 0x44) = (s32)(((s64)uVar5 * 0x4cd + 0x800) >> 12);
    *(s32 *)(pp + 0x54) = *(s16 *)(data_ov005_02167f00 + 8);
}
