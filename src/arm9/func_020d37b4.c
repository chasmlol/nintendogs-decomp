#include "ctx.h"

extern u8 *func_0200c498(int a, int b);
extern s16 data_02126868[];
extern void func_01ff8000(int *dst, int a, int b);
extern void func_01ff8020(u32 *dst, int a, int b);
extern void func_01ff803c(u32 *dst, int a, int b);
extern void func_01ff810c(int *a, u32 *b, u32 *c);
extern void func_0206793c(int a, int *b, int *c, int *d);
extern void func_020ccd5c(int *a, int *b, int c);

void func_020d37b4(u8 *param_1, int *param_2)
{
    int iVar1;
    u16 uVar2;
    u16 uVar3;
    u8 *iVar4;
    int aiStack_90[3];
    int local_84[3];
    int aiStack_78[12];
    u32 auStack_48[12];

    iVar4 = func_0200c498(0, 0);
    uVar2 = *(u16 *)(iVar4 + 4);
    iVar1 = (int)(u32)*(u16 *)(iVar4 + 2) >> 4;
    uVar3 = *(u16 *)(iVar4 + 6);
    func_01ff8000(aiStack_78, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    iVar1 = (int)(u32)uVar2 >> 4;
    func_01ff8020(auStack_48, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    func_01ff810c(aiStack_78, auStack_48, (u32 *)aiStack_78);
    iVar1 = (int)(u32)uVar3 >> 4;
    func_01ff803c(auStack_48, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    func_01ff810c(aiStack_78, auStack_48, (u32 *)aiStack_78);
    local_84[0] = aiStack_78[6];
    local_84[1] = aiStack_78[7];
    local_84[2] = aiStack_78[8];
    func_0206793c(0x1e000, local_84, (int *)(iVar4 + 8), aiStack_90);
    aiStack_90[1] = 0x5000;
    func_020ccd5c(param_2, aiStack_90, *(s16 *)(param_1 + 0x5c));
}
