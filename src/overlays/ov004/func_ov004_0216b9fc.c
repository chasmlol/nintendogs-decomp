#include "ctx.h"

struct Vec3 {
    u32 v[3];
};

extern int *data_0214f464;
extern int func_0203567c(int);
extern int func_0202fcd4(int);
extern void func_02027654(int, void *);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern int func_ov004_0216be28(int, int);
extern void func_0203e908(int, int);

void func_ov004_0216b9fc(int param_1)
{
    int iVar1;
    int iVar2;
    u32 uVar3;

    iVar1 = func_0203567c(param_1);
    iVar2 = func_0202fcd4(param_1);
    if (iVar2 != 0) {
        func_02027654(iVar2, (void *)(param_1 + 0x26c));
        *(struct Vec3 *)(param_1 + 0x3b4) = *(struct Vec3 *)(param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
    }
    iVar2 = func_ov004_0216be28(param_1, iVar2);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    if (*(int *)(param_1 + 0x488) >= 2) {
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        uVar3 = (u16)((((u16)uVar3) * 3u) >> 16);
        switch (uVar3) {
        case 0:
            func_0203e908(param_1, 0x4cc);
            return;
        case 1:
            func_0203e908(param_1, 0x4cd);
            return;
        case 2:
            func_0203e908(param_1, 0x4ce);
            return;
        }
        return;
    }
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    iVar1 = iVar2 * 0x10000;
    *data_0214f464 = iVar2;
    {
        u16 s = (u16)(((u32)iVar1) >> 31);
        switch (s) {
        case 0:
            func_0203e908(param_1, 0x4cd);
            return;
        case 1:
            func_0203e908(param_1, 0x4ce);
            return;
        }
    }
    return;
}
