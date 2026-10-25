#include "ctx.h"

typedef struct { u32 a, b, c; } Vec3U;

extern u32 *data_0214f464;
extern int func_0202fcd4(int);
extern void func_02027654(int, int);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern int func_ov004_0216be28(int, int);
extern void func_0203e908(int, int);

void func_ov004_0216bc10(int param_1)
{
    u16 uVar1;
    int iVar2;
    u32 x;
    u32 t;
    int r6;

    uVar1 = *(u16 *)(param_1 + 0xfc);
    r6 = uVar1 > 60;
    iVar2 = func_0202fcd4(param_1);
    if (iVar2 != 0) {
        Vec3U tmp;
        func_02027654(iVar2, param_1 + 0x26c);
        tmp = *(Vec3U *)(param_1 + 0x26c);
        *(Vec3U *)(param_1 + 0x3b4) = tmp;
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
    }
    iVar2 = func_ov004_0216be28(param_1, iVar2);
    if (iVar2 != 0) {
        return;
    }
    if (!r6) {
        return;
    }
    if (*(int *)(param_1 + 0x488) >= 2) {
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)(((u32)(u16)x * 3u) >> 16);
        switch (t) {
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
    } else {
        x = *data_0214f464 * 0x10dcd + 1;
        t = (u16)(((u32)x << 16) >> 31);
        *data_0214f464 = x;
        switch (t) {
        case 0:
            func_0203e908(param_1, 0x4cd);
            return;
        case 1:
            func_0203e908(param_1, 0x4ce);
            return;
        }
    }
}
