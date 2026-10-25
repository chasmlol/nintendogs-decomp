#include "ctx.h"

s32 func_0202e304(u8 *p);
s32 func_020bc130(void);
void func_02039448(u8 *p);
void func_0202874c(u8 *p, void *q);
void func_02028894(u8 *p, u32 *a, void *b);
void func_02037450(u8 *p, s32 a);
s32 func_0202cd10(u8 *p, s32 a);
s32 func_0202a65c(u8 *p, s32 a);
s32 func_02026df0(u8 *p);
s32 func_02026d3c(u8 *p);
s32 func_0202a864(u8 *p);
s32 func_020340f4(u8 *p);
s32 func_0203e908(u8 *p, s32 a);
s32 func_0203852c(u8 *p);
s32 func_020385e4(u8 *p);
s32 func_02029504(u8 *p);
s32 func_02022e14(u8 *p, s32 a);

s32 func_ov003_0217b9b8(u8 *param_1, s32 param_2)
{
    s32 bVar6 = 0;
    s32 iVar4;
    s32 uVar5;
    u32 auStack_20[4];

    if (!func_0202e304(param_1)) {
        if (func_020bc130() != 0) {
            bVar6 = 1;
        }
    }
    func_02039448(param_1);
    func_0202874c(param_1, param_1 + 0x278);
    func_02028894(param_1, auStack_20, param_1 + 0x3b4);
    func_02037450(param_1, 0x300);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + param_2;
    uVar5 = func_0202cd10(param_1, 0);
    if (uVar5 != 0) {
        return uVar5;
    }
    iVar4 = func_0202a65c(param_1, 0);
    if (iVar4 != 0) {
        return iVar4;
    }
    if (func_02026df0(param_1) || func_02026d3c(param_1)) {
        iVar4 = func_020385e4(param_1);
        switch (iVar4) {
        case 0:
            func_0203e908(param_1, 0x30f);
            break;
        case 1:
            func_0203e908(param_1, 0x311);
            break;
        case 2:
            func_0203e908(param_1, 0x312);
            break;
        case 3:
            func_0203e908(param_1, 0x313);
            break;
        }
        if (*(s16 *)(param_1 + 0xf0) == 1) {
            return func_02029504(param_1);
        }
        iVar4 = func_02022e14(param_1, 1);
        if (iVar4 == 0) {
            return iVar4;
        }
        return func_02029504(param_1);
    } else {
        iVar4 = func_0202a864(param_1);
        if (iVar4 != 0) {
            *(s32 *)(param_1 + 0x488) = 0;
            func_0203e908(param_1, 0x35a);
            return func_020340f4(param_1);
        }
        if (!bVar6) {
            return iVar4;
        }
        uVar5 = func_0203852c(param_1);
        switch (uVar5) {
        case 0:
            return func_0203e908(param_1, 0x30a);
        case 1:
            return func_0203e908(param_1, 0x30c);
        case 2:
            return func_0203e908(param_1, 0x30d);
        case 3:
            return func_0203e908(param_1, 0x30e);
        }
        return uVar5;
    }
}
