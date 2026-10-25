#include "ctx.h"

typedef struct {
    u32 w[12];
} T12;

extern int func_ov019_021611a0(void);
extern void func_02066bdc(u32 a, u32 b);
extern void func_01ff810c(int *a, u32 *b, u32 *c);
extern void func_01ff8058(int *a, int *b, u32 *c);

void func_ov019_0215d470(int param_1)
{
    u8 *p = (u8 *)param_1;
    s16 sVar1;
    int iVar2;
    int iVar3;
    int aiStack_18[3];

    iVar3 = (s16)(*(s16 *)(p + 0x1c) - 4);
    if ((iVar3 < 0) || (iVar3 >= 0x32)) {
        iVar3 = 0;
    } else {
        iVar2 = func_ov019_021611a0();
        iVar3 = *(int *)(iVar2 + iVar3 * 4 + 4);
    }
    if (iVar3 != 0) {
        if (iVar3 != 0) {
            sVar1 = *(s16 *)(iVar3 + 0x24);
        } else {
            sVar1 = -1;
        }
        if (sVar1 == 9) {
            if (iVar3 != 0) {
                *(T12 *)(p + 0x48) = *(T12 *)(iVar3 + 0x48);
            }
            *(u32 *)(p + 0x48) = 0x1000;
            *(u32 *)(p + 0x4c) = 0;
            *(u32 *)(p + 0x50) = 0;
            *(u32 *)(p + 0x54) = 0;
            *(u32 *)(p + 0x58) = 0;
            *(u32 *)(p + 0x5c) = 0x1000;
            *(u32 *)(p + 0x60) = 0;
            *(u32 *)(p + 0x64) = 0xfffff000;
            *(u32 *)(p + 0x68) = 0;
            func_02066bdc((u32)(p + 0x48), (u32)(p + 0x48));
            func_01ff810c((int *)(p + 0x48), (u32 *)(iVar3 + 0x48), (u32 *)(p + 0x48));
            aiStack_18[0] = 0;
            aiStack_18[1] = 0x1000;
            aiStack_18[2] = 0;
            func_01ff8058(aiStack_18, (int *)(p + 0x48), (u32 *)(p + 0x3c));
            return;
        }
        return;
    }
    return;
}
