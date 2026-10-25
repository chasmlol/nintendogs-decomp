#include "ctx.h"

extern s32 data_0215be4c;
extern s32 data_02159058;
extern void func_02100830(void);

extern u8 *func_02085c78(s32, s32);
extern s32 func_02090308(s32, s32, s32, s32);
extern s32 func_02085e6c(s32, s32, s32);
typedef struct { u16 v; } S16;
typedef struct { s16 lo:12; u16 a:2; u16 b:2; } HW;
typedef struct { u16 lo:12; u16 a:2; u16 b:2; } PH;
extern void func_0208fd90(s16 *, s32, s32, S16, S16, s32, s32, s32, u32, s32);

void func_0210083c(u32 param_1, s32 param_2, s32 param_3, s32 param_4, s16 *param_5)
{
    s32 sp24;
    u32 uVar1;
    s32 iVar7;
    u8 *puVar2;
    s32 iVar3;
    u32 uVar4;
    s32 iVar6;
    s32 iVar8;
    s32 *piVar5;
    u8 *pe;
    HW loc[2];
    s16 asStack_3c[12];

    iVar7 = data_0215be4c + 4;
    iVar7 = param_3 * 0x1b8 + iVar7;
    pe = (u8 *)iVar7 + 0x18;
    sp24 = (s32)(pe + 0xc);
    puVar2 = func_02085c78(param_2, param_4);
    iVar6 = (s32)(s8)puVar2[4];
    iVar8 = (s32)(s8)puVar2[5];
    piVar5 = (s32 *)data_02159058;
    uVar1 = puVar2[6];
    loc[0].lo = 0;
    loc[0].a = 0;
    loc[0].b = ((PH *)puVar2)[0].b;
    loc[1].lo = 0;
    loc[1].a = 0;
    loc[1].b = ((PH *)puVar2)[1].b;
    switch (((PH *)puVar2)[0].a) {
    case 1:
        iVar3 = func_02090308((s32)piVar5, (s32)param_5, iVar6, (s32)func_02100830);
        { HW *q = (HW *)(u32)&loc[0]; q->lo = q->lo + (((s32)(*(u16 *)(iVar7 + 0xc) * 8 - iVar3) + 1) / 2); }
        break;
    case 2:
        iVar3 = func_02090308((s32)piVar5, (s32)param_5, iVar6, (s32)func_02100830);
        { HW *q = (HW *)(u32)&loc[0]; q->lo = q->lo + (*(u16 *)(iVar7 + 0xc) * 8 - iVar3); }
        break;
    }
    switch (((PH *)puVar2)[1].a) {
    case 1:
        iVar3 = func_02085e6c((s32)piVar5, (s32)param_5, iVar8);
        { HW *q = (HW *)(u32)&loc[1]; q->lo = q->lo + (((s32)(*(u16 *)(iVar7 + 0xe) * 8 - iVar3) + 1) / 2); }
        break;
    case 2:
        iVar3 = func_02085e6c((s32)piVar5, (s32)param_5, iVar8);
        { HW *q = (HW *)(u32)&loc[1]; q->lo = q->lo + (*(u16 *)(iVar7 + 0xe) * 8 - iVar3); }
        break;
    }
    func_0208fd90(asStack_3c, (s32)piVar5, sp24, *(S16 *)&loc[0], *(S16 *)&loc[1], iVar6, iVar8,
                  (s32)param_5, uVar1, (s32)func_02100830);
    *(s32 *)(pe + 0x20) = 1;
}
