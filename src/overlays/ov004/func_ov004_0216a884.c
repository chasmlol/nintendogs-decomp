#include "ctx.h"

extern int *data_0214f464;
extern int func_0202fcd4(int);
extern void func_02039448(int);
extern void func_02027668(int, int);
extern void func_02027654(int, int);
extern void func_02037450(int, int);
extern int func_ov004_0216be28(int, int);
extern void func_0203e908(int, int);

void func_ov004_0216a884(int param_1)
{
    int iVar2;
    int iVar3;
    int *piVar4;
    u32 uVar6;

    iVar2 = func_0202fcd4(param_1);
    if (iVar2 != 0) {
        func_02039448(param_1);
        func_02027668(iVar2, param_1 + 0x278);
        func_02027654(iVar2, param_1 + 0x3b4);
        func_02037450(param_1, 0x300);
    }
    iVar3 = func_ov004_0216be28(param_1, iVar2);
    if (iVar3 != 0) {
        return;
    }
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    if ((u16)((u32)(u16)uVar6 * 200u >> 0x10) != 0) {
        return;
    }
    if (*(int *)(param_1 + 0x488) >= 2) {
        uVar6 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar6;
        uVar6 = (u16)((u32)(u16)uVar6 * 3u >> 0x10);
        switch (uVar6) {
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
    piVar4 = data_0214f464;
    iVar3 = *piVar4 * 0x10dcd + 1;
    *piVar4 = iVar3;
    uVar6 = (u16)((u32)(iVar3 << 16) >> 31);
    switch (uVar6) {
    case 0:
        func_0203e908(param_1, 0x4cd);
        return;
    case 1:
        func_0203e908(param_1, 0x4ce);
        return;
    }
}
