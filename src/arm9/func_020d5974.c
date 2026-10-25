#include "ctx.h"

extern int data_021594d0;
extern u32 func_020038b8(int *a, int b);
extern u32 func_02003860(int *a, int b, int c);
extern void func_020d6cd8(void);

void func_020d5974(int *param_1, int param_2)
{
    int iVar2;
    s32 uVar3;
    s32 uVar5;
    u32 uVar4;

    iVar2 = func_020038b8(param_1, 0x74);
    *(int *)&data_021594d0 = iVar2;
    *(u32 *)(iVar2 + 0x20) = 0;
    *(int *)(*(int *)&data_021594d0) = param_2;
    *(u32 *)(*(int *)&data_021594d0 + 0x34) = 0;
    *(u32 *)(*(int *)&data_021594d0 + 0x14) = 0;
    *(u32 *)(*(int *)&data_021594d0 + 0x18) = 0;
    *(u32 *)(*(int *)&data_021594d0 + 0x1c) = 0;
    uVar5 = (*(u16 *)(param_2 + 0x34) + 0x23) & 0xffffffe0;
    uVar3 = (*(u16 *)(param_2 + 0x36) + 0x21) & 0xffffffe0;
    if (uVar5 <= uVar3) {
        uVar5 = uVar3;
    }
    *(s32 *)(*(int *)&data_021594d0 + 4) = uVar5;
    uVar4 = func_02003860(param_1, *(int *)(*(int *)&data_021594d0 + 4), 0x20);
    *(u32 *)(*(int *)&data_021594d0 + 8) = uVar4;
    uVar5 = (((*(u16 *)(param_2 + 0x36) + 0xe) * (s32)*(u16 *)(param_2 + 0x10) + 0x29) & 0xffffffe0) * 2;
    uVar3 = ((*(u16 *)(param_2 + 0x34) + 0x55) & 0xffffffe0) * 2;
    if ((u32)uVar5 <= (u32)uVar3) {
        uVar5 = uVar3;
    }
    *(s32 *)(*(int *)&data_021594d0 + 0xc) = uVar5;
    uVar4 = func_02003860(param_1, *(int *)(*(int *)&data_021594d0 + 0xc), 0x20);
    *(u32 *)(*(int *)&data_021594d0 + 0x10) = uVar4;
    *(u16 *)(*(int *)&data_021594d0 + 0x3c) = 0;
    *(u32 *)(*(int *)&data_021594d0 + 0x40) = 0;
    *(u16 *)(*(int *)&data_021594d0 + 0x30) = 0;
    func_020d6cd8();
}
