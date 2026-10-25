#include "ctx.h"

extern s32 data_ov005_02167ed4;
extern s32 *data_0215be34;

void func_020bd868(u8 *p);
s32 func_020d9024(s32 a);
s32 func_01ffdb08(s32 a);
u32 func_020d8fa0(s32 a);
s32 func_02028130(s32 a);
s32 *func_0208122c(s32 a, s32 b, s32 *c);
s32 func_02027f78(s32 a, s32 b);
void func_02027f40(s32 a, s32 b, s32 c);
void func_ov005_02167a10(void);
void func_ov005_021678a4(void);
void func_ov005_021676c4(void);
void func_ov005_021674d8(void);

void func_ov005_0216702c(u8 *param_1)
{
    s16 *psVar8 = *(s16 **)(param_1 + 0x214);
    s32 local_20[3] = {0, 0, 0};
    s32 iVar4;
    s32 iVar5;
    s32 *piVar6;
    s32 *pq;
    u32 uVar7;
    u32 bVar3;
    s64 lVar1;

    func_020bd868(param_1);
    iVar4 = func_020d9024(-1);
    psVar8[0] = (s16)iVar4;
    iVar4 = func_01ffdb08((s32)psVar8[0]);
    bVar3 = func_020d8fa0(iVar4);
    *(u32 *)(psVar8 + 2) = bVar3;
    iVar5 = func_02028130(iVar4);
    lVar1 = (s64)iVar5 * (s64)data_ov005_02167ed4 + 0x800;
    iVar5 = 0;
    uVar7 = (u32)((u64)lVar1 >> 12);
    *(u32 *)(param_1 + 0x24) = uVar7;
    *(u32 *)(param_1 + 0x28) = uVar7;
    *(u32 *)(param_1 + 0x2c) = uVar7;
    if (*(s32 *)(psVar8 + 4) == 0) {
        iVar5 = (data_0215be34 != 0) ? *data_0215be34 : 0;
        piVar6 = func_0208122c(iVar5, 0x57, local_20);
        *(s32 **)(psVar8 + 4) = piVar6;
        pq = *(s32 **)(psVar8 + 4);
        *(u32 *)((u8 *)pq + 0x1c) = *(u32 *)((u8 *)pq + 0x1c) | 2;
        *(u32 *)((u8 *)*(s32 **)(psVar8 + 4) + 0x6c) = (u32)func_ov005_02167a10;
    }
    if (*(s32 *)(psVar8 + 6) == 0) {
        iVar5 = (data_0215be34 != 0) ? *data_0215be34 : 0;
        piVar6 = func_0208122c(iVar5, 0x37, local_20);
        *(s32 **)(psVar8 + 6) = piVar6;
        pq = *(s32 **)(psVar8 + 6);
        *(u32 *)((u8 *)pq + 0x1c) = *(u32 *)((u8 *)pq + 0x1c) | 2;
        *(u32 *)((u8 *)*(s32 **)(psVar8 + 6) + 0x6c) = (u32)func_ov005_021678a4;
    }
    if (*(s32 *)(psVar8 + 8) == 0) {
        iVar5 = (data_0215be34 != 0) ? *data_0215be34 : 0;
        piVar6 = func_0208122c(iVar5, 0x6f, local_20);
        *(s32 **)(psVar8 + 8) = piVar6;
        pq = *(s32 **)(psVar8 + 8);
        *(u32 *)((u8 *)pq + 0x1c) = *(u32 *)((u8 *)pq + 0x1c) | 2;
        *(u32 *)((u8 *)*(s32 **)(psVar8 + 8) + 0x6c) = (u32)func_ov005_021676c4;
    }
    if (*(s32 *)(psVar8 + 10) == 0) {
        iVar5 = (data_0215be34 != 0) ? *data_0215be34 : 0;
        piVar6 = func_0208122c(iVar5, 0x70, local_20);
        *(s32 **)(psVar8 + 10) = piVar6;
        pq = *(s32 **)(psVar8 + 10);
        *(u32 *)((u8 *)pq + 0x1c) = *(u32 *)((u8 *)pq + 0x1c) | 2;
        *(u32 *)((u8 *)*(s32 **)(psVar8 + 10) + 0x6c) = (u32)func_ov005_021674d8;
    }
    iVar5 = func_02027f78(iVar4, 7);
    if (iVar5 > 0x2648) {
        func_02027f40(iVar4, 7, 0x2648);
    }
}
