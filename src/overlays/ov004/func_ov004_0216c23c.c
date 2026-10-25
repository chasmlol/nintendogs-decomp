#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_0203b3cc(int a);
extern void func_ov004_0216c504(int a);
extern void func_0203e908(int a, int b);

u32 func_ov004_0216c23c(int param_1)
{
    s32 r6;
    s32 r5;
    s32 iVar4;
    u32 uVar3;

    r6 = *(s16 *)(param_1 + 0xea);
    if (*(s32 *)(param_1 + 0x488) < 100) {
        r6 = 0x4b5;
        goto L274;
    }
    r5 = *(s8 *)(param_1 + 0x8e);
    if (func_0203b3cc(param_1) != 0) {
        switch (r5) {
        case 0:
        case 1:
        case 2:
            iVar4 = 1;
            break;
        case 3:
        case 4:
            iVar4 = 4;
            break;
        default:
            goto second;
        }
        r5 = iVar4;
    }
second:
    switch (r5) {
    case 0:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        switch ((u16)((((u16)uVar3) * 10u) >> 16)) {
        case 0: case 1: case 2: case 3:
            r6 = 0x4b7;
            break;
        default:
            r6 = 0x4b6;
            break;
        }
        break;
    case 1:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        switch ((u16)((((u16)uVar3) * 10u) >> 16)) {
        case 0: case 1:
            r6 = 0x4b7;
            break;
        case 2: case 3:
            r6 = 0x4b5;
            break;
        default:
            r6 = 0x4b6;
            break;
        }
        break;
    case 2:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        switch ((u16)((((u16)uVar3) * 10u) >> 16)) {
        case 0:
            r6 = 0x4b7;
            break;
        case 1:
            r6 = 0x4b5;
            break;
        default:
            r6 = 0x4b6;
            break;
        }
        break;
    case 3:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        switch ((u16)((((u16)uVar3) * 10u) >> 16)) {
        case 0:
            r6 = 0x4b7;
            break;
        case 1: case 2: case 3:
            r6 = 0x4b5;
            break;
        default:
            r6 = 0x4b6;
            break;
        }
        break;
    case 4:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        switch ((u16)((((u16)uVar3) * 10u) >> 16)) {
        case 0: case 1: case 2: case 3:
            r6 = 0x4b5;
            break;
        default:
            r6 = 0x4b6;
            break;
        }
        break;
    default:
        goto L274;
    }
L274:
    if (*(s16 *)(param_1 + 0xea) == r6) {
        func_ov004_0216c504(param_1);
        return 0;
    }
    func_ov004_0216c504(param_1);
    func_0203e908(param_1, r6);
    return 1;
}
