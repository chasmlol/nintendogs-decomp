#pragma optimization_level 2
#include "ctx.h"

extern u32 data_02144bb4[];
extern void func_020bdd1c(u8 *p, s32 v);
extern s32 func_020038b8(s32 a, s32 b);
extern void func_0205f050(s32 *a, s32 b, u32 c);
extern s32 func_02078224(s32 a, s32 *b);
extern void func_0208f86c(u8 *p, s32 a, s32 b);
extern s32 func_020f1300(s32 a);
extern void func_020f125c(s32 a, u8 *p);
extern void func_020e8880(void);
extern void func_020e83d0(void);
extern void func_020e8920(void);
extern void func_020e7ba4(void);

void func_020e892c(u8 *param_1, s32 *param_2, s32 param_3, u32 param_4)
{
    void *uVar1;
    void *uVar2;
    s32 iVar3;
    u32 uVar4;
    s32 iVar5;
    s32 *piVar7;
    s32 iVar6;
    s32 q7;
    s32 local_38[5];

    func_020bdd1c(param_1, 0x32);
    *(void **)(param_1 + 500) = (void *)func_020e8880;
    uVar2 = (void *)func_020e83d0;
    uVar1 = (void *)func_020e8920;
    *(void **)(param_1 + 0x1f8) = uVar2;
    *(void **)(param_1 + 0x1f0) = uVar1;
    uVar2 = (void *)func_020038b8((s32)param_2, 0x234);
    *(void **)(param_1 + 0x214) = uVar2;
    piVar7 = *(s32 **)(param_1 + 0x214);
    if (param_1 != 0) {
        iVar6 = 0;
        iVar3 = *(s32 *)(*(s32 *)(param_1 + 0x1c) + 8);
        q7 = iVar3 + 0x40;
        do {
            local_38[0] = 0;
            local_38[1] = 0;
            local_38[2] = 0;
            local_38[3] = 0;
            func_0205f050(local_38, 0x10, data_02144bb4[iVar6]);
            uVar4 = func_02078224(q7, local_38);
            (piVar7 + iVar6)[1] = uVar4;
            func_0208f86c(param_1, (s16)(piVar7 + iVar6)[1], (s32)func_020e7ba4);
            iVar6 = iVar6 + 1;
        } while (iVar6 < 7);
    }
    iVar5 = func_020f1300(0x21);
    *piVar7 = iVar5;
    func_020f125c(0x21, param_1);
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 0x10;
    return;
}
