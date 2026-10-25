#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

typedef struct { s32 a; s32 b; s32 c; } V3;
typedef struct { u8 pad[0x1c]; s16 f; } T1c;

extern s32 data_02159444;
extern s32 data_ov005_02167e98;
extern s32 data_ov005_02167eb0;
extern s32 data_ov005_02167da8;
extern s32 data_ov005_02167db8;
extern void func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_020c8b40(u8 *p, s32 v);
extern void func_020be3d4(u8 *p, u32 *q);
extern void func_020d9080(u32 *p, s32 *q, s32 r);
extern u32 func_02078224(s32 a, s32 *b);
extern void func_02077f6c(s32 a, s32 b, s32 c);

void func_ov005_02166628(u8 *param_1)
{
    s32 blk[11];
    s16 *psVar7;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 sVar1;
    s32 uVar5;
    s32 uVar6;

    psVar7 = *(s16 **)(param_1 + 0x214);
    func_02044ca0(*(s16 *)(param_1 + 156));
    iVar5 = func_01ffdb08(*psVar7);
    func_02027668(iVar5, &blk[5]);
    iVar4 = *(s32 *)((u8 *)data_02159444 + 0x1c);
    *(V3 *)&blk[2] = *(V3 *)((u8 *)iVar4 + 0x30);
    iVar4 = func_020678b4(&blk[2], &blk[5]);
    iVar5 = func_02028130(iVar5);
    iVar4 = iVar4 - FXM(data_ov005_02167e98, iVar5);
    func_020c8b40(param_1, iVar4);
    *(V3 *)&blk[8] = *(V3 *)&data_ov005_02167eb0;
    func_020be3d4(param_1, (u32 *)(param_1 + 200));
    blk[8] = 0x1000;
    blk[9] = 0;
    blk[10] = 0;
    func_020d9080((u32 *)(param_1 + 200), &blk[8], 0xc000);
    blk[8] = 0;
    blk[9] = 0;
    blk[10] = 0x1000;
    func_020d9080((u32 *)(param_1 + 200), &blk[8], 0x8000);
    psVar7[0xe] = 0;
    sVar1 = *(volatile s16 *)(psVar7 + 0xe);
    iVar3 = *(s32 *)(*(s32 *)(param_1 + 0x1c) + 8);
    blk[0] = func_02078224(iVar3 + *(s32 *)(iVar3 + 8) + 4, &data_ov005_02167da8);
    blk[1] = func_02078224(iVar3 + *(s32 *)(iVar3 + 8) + 4, &data_ov005_02167db8);
    func_02077f6c(iVar3, blk[0], sVar1);
    func_02077f6c(iVar3, blk[1], sVar1);
}
