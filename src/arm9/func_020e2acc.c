#include "ctx.h"

typedef struct { u32 w[4]; } Quad;
typedef struct { u32 w[6]; } Six;
typedef struct { u32 w[11]; } Eleven;
typedef struct { u32 w[12]; } Twelve;

extern u8 *data_02159444;
extern u32 data_02144a90[];
extern u32 data_02144ad4[];
extern s32 func_02044ca0(s32 a);
extern void func_020be520(u8 *p, s32 *q);
extern void func_020be3d4(u8 *p, u32 *q);
extern void func_020c5fec(u8 *p);
extern s32 func_02068078(s32 a, s32 b);
extern void func_020e30f8(u8 *p);
extern void func_020e2e10(u8 *p);
extern void func_020c87ec(u8 *p, void *fn, u32 *b);
extern void func_020c8758(u8 *p, s32 a);
extern void func_020c866c(u8 *p);
extern void func_020e2d9c(void);
extern u64 func_0205e270(u32 a, u32 b);
extern void func_0209eae4(s32 a);

void func_020e2acc(u8 *param_1)
{
    s32 sVar1;
    s32 iVar3;
    s32 iVar5;
    s32 iVar7;
    s32 iVar8;
    s32 iVar9;
    u64 uVar10;
    u32 local_80[6];
    s32 local_68[11];
    s32 local_3c[11];

    switch (*(s16 *)(param_1 + 0x90)) {
    case 2:
        iVar5 = func_02044ca0((s32)*(s16 *)(param_1 + 0x9c));
        iVar7 = *(s32 *)(param_1 + 0x214);
        func_020be520(param_1, (s32 *)(param_1 + 0xbc));
        *(s32 *)(param_1 + 0xc0) = *(s32 *)(param_1 + 0xc0) + 0xfffffccd;
        func_020be3d4(param_1, (u32 *)(param_1 + 200));
        {
            u8 *dstp = (u8 *)iVar7 + 0x40;
            *(Twelve *)dstp = *(Twelve *)(param_1 + 0xc8);
        }
        if (iVar5 == 0) {
            break;
        }
        func_020c5fec(param_1);
        iVar9 = *(s32 *)(param_1 + 0x214);
        func_02044ca0((s32)*(s16 *)(param_1 + 0x9c));
        iVar3 = (s32)*(s16 *)(data_02159444 + 0x86);
        iVar8 = (s32)*(s16 *)(data_02159444 + 0x88);
        if (iVar3 > 0) {
            iVar5 = iVar3;
        } else {
            iVar5 = -iVar3;
        }
        if (iVar5 >= 2) {
            goto call18;
        }
        if (iVar8 > 0) {
            iVar5 = iVar8;
        } else {
            iVar5 = -iVar8;
        }
        if (iVar5 < 2) {
            sVar1 = *(u16 *)(iVar9 + 0x18);
            goto store18;
        }
    call18:
        sVar1 = func_02068078(iVar8, iVar3);
    store18:
        *(s16 *)(iVar7 + 0x18) = sVar1;
        break;
    case 3:
        func_020e30f8(param_1);
        break;
    case 1:
        func_020e2e10(param_1);
        break;
    case 4:
        *(Six *)local_80 = *(Six *)data_02144a90;
        func_020c87ec(param_1, func_020e2d9c, local_80);
        iVar7 = *(s32 *)(param_1 + 0x214);
        *(Eleven *)local_68 = *(Eleven *)data_02144ad4;
        uVar10 = func_0205e270(*(u32 *)(iVar7 + 4), *(u32 *)(iVar7 + 8));
        iVar5 = local_68[(s32)uVar10];
        iVar3 = *(s32 *)(iVar7 + 4) - iVar5;
        *(s32 *)(iVar7 + 4) = iVar3;
        if (*(s32 *)(iVar7 + 4) < 0x78000) {
            *(s16 *)(param_1 + 0xa6) = 1;
        }
        if (*(s32 *)(iVar7 + 4) < 0) {
            *(s32 *)((u8 *)iVar7 + 4) = 0;
            *(s16 *)(param_1 + 0xa6) = 2;
        }
        if (*(s32 *)(iVar7 + 4) > 0) {
            func_0209eae4(iVar5);
        } else {
            func_0209eae4(0);
        }
        break;
    case 5:
        func_020c8758(param_1, 0x1000);
        iVar7 = *(s32 *)(param_1 + 0x214);
        *(Eleven *)local_3c = *(Eleven *)data_02144ad4;
        uVar10 = func_0205e270(*(u32 *)(iVar7 + 4), *(u32 *)(iVar7 + 8));
        iVar5 = local_3c[(s32)uVar10];
        iVar3 = *(s32 *)(iVar7 + 4) - iVar5;
        *(s32 *)(iVar7 + 4) = iVar3;
        if (*(s32 *)(iVar7 + 4) < 0x78000) {
            *(s16 *)(param_1 + 0xa6) = 1;
        }
        if (*(s32 *)(iVar7 + 4) < 0) {
            *(s32 *)((u8 *)iVar7 + 4) = 0;
            *(s16 *)(param_1 + 0xa6) = 2;
        }
        if (*(s32 *)(iVar7 + 4) > 0) {
            func_0209eae4(iVar5);
        } else {
            func_0209eae4(0);
        }
        break;
    case 8:
        func_020c866c(param_1);
        break;
    case 0:
        break;
    }
    iVar8 = *(s32 *)(param_1 + 0x214);
    uVar10 = func_0205e270(*(u32 *)(iVar8 + 4), *(u32 *)(iVar8 + 8));
    iVar7 = (s32)(uVar10 >> 32);
    iVar5 = 0;
    *(s32 *)(*(s32 *)(iVar8 + 0xa4) + 0xc) = iVar7;
    if (*(s16 *)(param_1 + 0x90) != 2 && *(s16 *)(param_1 + 0x90) != 3) {
        iVar5 = iVar7 * 8;
        if (iVar5 >= *(s32 *)(iVar8 + 8)) {
            do {
                iVar5 = iVar5 - *(s32 *)(iVar8 + 8);
            } while (iVar5 >= *(s32 *)(iVar8 + 8));
        }
    }
    *(s32 *)(*(s32 *)(iVar8 + 0xa0) + 0xc) = iVar5;
}
