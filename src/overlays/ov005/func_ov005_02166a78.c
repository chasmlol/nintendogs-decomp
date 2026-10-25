#include "ctx.h"

typedef struct { u32 w[3]; } T12;
typedef struct { u32 w[12]; } T48;

extern u32 data_02159444;
extern u32 data_ov005_02167edc;
extern u32 data_ov005_02167ed8;
extern s32 data_ov005_02167ed0;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);

void func_ov005_02166a78(u8 *param_1)
{
    s32 iVar3;
    u8 *iVar4;
    u8 *q;
    u8 *q2;
    T12 loc;
    s64 lVar1;
    s32 mul;
    u32 *pp;
    u32 uVar5;

    iVar3 = func_01ffdb08(*(s16 *)(*(u32 *)(param_1 + 0x214)));
    *(T12 *)(param_1 + 0x30) = *(T12 *)(param_1 + 0xbc);
    *(T48 *)(param_1 + 0x3c) = *(T48 *)(param_1 + 0xc8);
    if (*(u32 *)(param_1 + 0x18c) != 0) {
        iVar4 = *(u8 **)(&data_02159444);
        loc = *(T12 *)(*(u8 **)(iVar4 + 0x1c) + 0x48);
        q = *(u8 **)(param_1 + 0x18c);
        func_01ff832c(data_ov005_02167edc - data_ov005_02167ed8, &loc,
                      (void *)(param_1 + 0xbc), q + 0x30);
        *(u32 *)(*(u8 **)(param_1 + 0x18c) + 0x34) = 0;
        mul = data_ov005_02167ed0;
        iVar3 = func_02028130(iVar3);
        lVar1 = (s64)iVar3 * (s64)mul + 0x800;
        uVar5 = (u32)(lVar1 >> 12);
        q2 = *(u8 **)(param_1 + 0x18c);
        pp = (u32 *)(q2 + 0x24);
        *(u32 *)(q2 + 0x24) = uVar5;
        pp[1] = uVar5;
        pp[2] = uVar5;
    }
}
