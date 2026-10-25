#include "ctx.h"

extern s32 *data_0214f464;

extern s32 func_0202fcd4(u8 *p);
extern void func_0204d0bc(u8 *p, s32 a);
extern s32 func_02035584(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, u32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_ov004_0216be28(u8 *p, s32 q);

#define MULHI16(v, k) ((u16)(((u32)(u16)(v) * (u32)(k)) >> 16))

void func_ov004_0216aae0(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    u32 uVar5;
    s16 sVar1;
    u16 uBit;

    iVar3 = func_0202fcd4(param_1);
    func_0204d0bc(param_1, iVar3);
    sVar1 = *(s16 *)(param_1 + 0x154);
    if (sVar1 <= 0) {
        if (sVar1 != 0) {
            goto tail;
        }
        goto zero;
    }
    if (sVar1 > 47) {
        goto tail;
    }
    if (sVar1 < 45) {
        goto tail;
    }
    if (sVar1 == 45) {
        goto f0;
    }
    if (sVar1 == 46) {
        goto f0;
    }
    if (sVar1 != 47) {
        goto tail;
    }
    goto f0;
zero:
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    if (MULHI16(uVar5, 10) != 0) {
        uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uVar5;
        func_0203e8cc(param_1, 1, (s16)(MULHI16(uVar5, 3) + 0x2d));
    }
    goto tail;
f0:
    if (func_02035584(param_1, 1) != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
tail:
    iVar3 = func_ov004_0216be28(param_1, iVar3);
    if (iVar3 != 0) {
        return;
    }
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    if (MULHI16(uVar5, 200) != 0) {
        goto l27c;
    }
    if (*(s32 *)(param_1 + 0x488) < 2) {
        goto l210;
    }
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    uVar5 = MULHI16(uVar5, 3);
    switch (uVar5) {
    case 0:
        func_0203e908(param_1, 0x4cc);
        break;
    case 1:
        func_0203e908(param_1, 0x4cd);
        break;
    case 2:
        func_0203e908(param_1, 0x4ce);
        break;
    }
    return;
l210:
    iVar4 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = iVar4;
    uBit = (u16)((u32)(iVar4 << 16) >> 31);
    switch (uBit) {
    case 0:
        func_0203e908(param_1, 0x4cd);
        break;
    case 1:
        func_0203e908(param_1, 0x4ce);
        break;
    }
    return;
l27c:
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    if (MULHI16(uVar5, 200) == 0) {
        func_0203e908(param_1, 0x4a3);
    }
}
