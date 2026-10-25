#include "ctx.h"
extern s32 func_ov019_021611a0(void);
extern void func_02066bdc(u32 *a, u32 *b);
extern void func_01ff810c(u32 *a, u32 *b, u32 *c);
extern void func_01ff8058(u32 *a, u32 *b, u32 *c);
void func_ov019_0215da68(u8 *param_1)
{
    s16 sVar1;
    s32 iVar2;
    s32 iVar3;
    u32 aiStack_18[3];
    iVar3 = (s32)((s16)(*(s16 *)(param_1 + 0x1c) - 1));
    if (iVar3 < 0 || iVar3 >= 50) {
        iVar3 = 0;
    } else {
        iVar2 = func_ov019_021611a0();
        iVar3 = *(s32 *)(iVar2 + iVar3 * 4 + 4);
    }
    if (iVar3 != 0) {
        if (iVar3 != 0) {
            sVar1 = *(s16 *)(iVar3 + 0x24);
        } else {
            sVar1 = -1;
        }
        if (sVar1 == 9) {
            *(u32 *)(param_1 + 0x48) = 0x1000;
            *(u32 *)(param_1 + 0x4c) = 0;
            *(u32 *)(param_1 + 0x50) = 0;
            *(u32 *)(param_1 + 0x54) = 0;
            *(u32 *)(param_1 + 0x58) = 0;
            *(u32 *)(param_1 + 0x5c) = 0x1000;
            *(u32 *)(param_1 + 0x60) = 0;
            *(u32 *)(param_1 + 100) = 0xfffff000;
            *(u32 *)(param_1 + 0x68) = 0;
            func_02066bdc((u32 *)(param_1 + 0x48), (u32 *)(param_1 + 0x48));
            func_01ff810c((u32 *)(param_1 + 0x48), (u32 *)(iVar3 + 0x48), (u32 *)(param_1 + 0x48));
            aiStack_18[0] = 0;
            aiStack_18[1] = 0x1000;
            aiStack_18[2] = 0x802;
            func_01ff8058(aiStack_18, (u32 *)(param_1 + 0x48), (u32 *)(param_1 + 0x3c));
            return;
        }
        return;
    }
    return;
}
