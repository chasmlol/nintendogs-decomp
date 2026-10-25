#include "ctx.h"

extern u8 *data_0215be48;
extern u32 data_0214f464;
extern void func_02112798(u32 a, u32 b, u32 c);
extern s32 func_02044c78(void);
extern s32 func_020bc860(void);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02026db8(s32 a);
extern u32 func_02112dec(u32 a, u32 b);
extern void func_02112dc4(u32 a, u32 b, u32 c);
extern void func_02112978(u32 a, u32 b, u32 c, u32 d);

void func_02111c64(u32 param_1)
{
    u8 *P;
    u32 uVar6;
    u32 uVar7;
    s32 iVar2;
    s32 iVar3;
    s32 iVar5;
    s32 iVar4;
    u32 uVar5;
    s32 uVar8;

    P = data_0215be48;
    if (P == 0) {
        return;
    }
    uVar6 = 0;
    uVar7 = 0;
    *(u32 *)(P + 0x4898) = param_1;
    if (param_1 != 0) {
        if (((*(vu16 *)0x04000304 & 0x8000) >> 15) == 1) {
            uVar6 = 1;
        } else {
            if (((*(vu16 *)0x04000304 & 0x8000) >> 15) != 0) {
                *(u32 *)(data_0215be48 + 0x4898) = 0;
            } else {
                uVar7 = 1;
            }
        }
    }
    func_02112798(3, 0x22, uVar6);
    func_02112798(1, 0x22, uVar7);
    iVar2 = 0x23;
    if (data_0214f464 != 0) {
        iVar3 = func_02044c78();
        if (iVar3 < 0) {
            iVar3 = func_020bc860();
            if (iVar3 != 0) {
                iVar2 = 0x21;
            }
        } else {
            iVar5 = func_01ffdb08(iVar3);
            if (iVar5 != 0) {
                iVar4 = 0;
                if (func_02026db8(iVar5) == 1) {
                    iVar4 = 1;
                }
                if (iVar4 != 0) {
                    iVar2 = 0x20;
                } else {
                    iVar4 = 0;
                    if (func_02026db8(iVar5) == 2) {
                        iVar4 = 1;
                    }
                    if (iVar4 != 0) {
                        iVar2 = 0x21;
                    }
                }
            }
        }
    }
    if (iVar2 == 0x23) {
        func_02112798(3, 0x22, 0);
        func_02112798(1, 0x22, 0);
    }
    uVar8 = 0;
    uVar5 = func_02112dec(1, iVar2);
    func_02112dc4(1, 0x22, uVar5);
    func_02112dc4(3, 0x22, uVar5);
    if (iVar2 != 0x23) {
        uVar8 = -8;
    }
    func_02112978(1, 0x22, uVar8, uVar8);
    func_02112978(3, 0x22, uVar8, uVar8);
}
