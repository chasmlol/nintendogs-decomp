#include "ctx.h"

extern u8 *data_0215be48;
extern s16 data_02126868[];

extern void func_02066310(s32 *a, s32 b, s32 c);
extern void func_02066304(u32 *a, u32 b, u32 c);
extern void func_0206631c(s32 *a, u32 *b, s32 *c);
extern u32 func_02085ccc(u32 a, u32 b);

void func_02112c20(int param_1, int param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6,
                   u16 param_7, int param_8, int param_9)
{
    u32 uVar1;
    u32 *puVar2;
    int iVar3;
    int iVar4;
    s32 aiStack_50[4];
    u32 auStack_40[4];
    s32 tmp[4];

    if (param_8 < 0) {
        return;
    }
    if (param_8 > 0x1f) {
        return;
    }
    iVar3 = 0;
    switch (param_1) {
    case 0:
    case 1:
        iVar3 = *(int *)(data_0215be48 + 0x1de4);
        break;
    case 2:
    case 3:
        iVar3 = *(int *)(data_0215be48 + 0x1de8);
        break;
    }
    iVar4 = *(int *)(iVar3 + 4) + param_8 * 0x20;
    func_02066310(aiStack_50, data_02126868[((s32)param_7 >> 4) * 2], data_02126868[((s32)param_7 >> 4) * 2 + 1]);
    func_02066304(auStack_40, param_5, param_6);
    func_0206631c(aiStack_50, auStack_40, tmp);
    iVar3 = (int)data_0215be48 + 0x1dec + param_1 * 0x294;
    puVar2 = (u32 *)func_02085ccc(*(u32 *)(iVar3 + 0xc), *(u32 *)(*(int *)(iVar3 + 8) + param_2 * 8 + 0xc));
    uVar1 = 0xc1fffcff;
    *puVar2 = (*puVar2 & 0xfe00ff00) | (param_4 & 0xff) | ((param_3 & 0x1ff) << 16);
    *(s16 *)(iVar4 + 6) = (s16)(tmp[0] >> 4);
    *(s16 *)(iVar4 + 0xe) = (s16)(tmp[1] >> 4);
    *(s16 *)(iVar4 + 0x16) = (s16)(tmp[2] >> 4);
    *(s16 *)(iVar4 + 0x1e) = (s16)(tmp[3] >> 4);
    *puVar2 = (*puVar2 & uVar1) | 0x300 | (param_8 << 25);
    *(u16 *)((u8 *)puVar2 + 4) = (*(u16 *)((u8 *)puVar2 + 4) & ~0xc00) | (param_9 << 10);
}
