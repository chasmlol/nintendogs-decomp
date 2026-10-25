#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 data_021478bc[];
extern u8 data_021478c4[];
extern u8 data_021478c8[];
extern u8 data_021478c0[];
extern u8 data_021478b8[];
extern s32 func_02117804(int a);
extern s32 func_02112320(int a, int b, int c);
extern s32 func_021179b0(int a, int b, int c);
extern void func_02112744(int a, int b, int c);
extern void func_0210448c(void);
extern void func_02108e24(int a);
extern void func_020feae0(int a);

void func_020fe440(int param_1)
{
    int iVar1;
    s32 uVar2;
    s32 uVar3;
    u8 *base;

    base = data_0215be48;
    base += 0x4000;
    if (*(s32 *)(base + 0x8b8) == 1) {
        func_02117804(param_1 + 4);
        func_02117804(param_1 + 0x40);
        func_02117804(param_1 + 0x7c);
        func_02117804(param_1 + 0xb8);
        func_02117804(param_1 + 0xf4);
    } else if (*(s32 *)(base + 0x860) != 0 && (*(u16 *)(data_0214f004 + 2) & 2) != 0) {
        uVar2 = (s16)(s32)*(u8 *)data_0214f004;
        uVar3 = (s16)(s32)*(u8 *)(data_0214f004 + 1);
        iVar1 = func_02112320(2, uVar2, uVar3);
        switch (iVar1) {
        case 1:
            iVar1 = func_021179b0(param_1 + 4, uVar2, uVar3);
            if (iVar1 != 0) {
                func_02112744(2, (int)data_021478bc, 1);
                func_0210448c();
                if (param_1 + 4 != param_1 + 0x40) {
                    func_02117804(param_1 + 0x40);
                }
                if (param_1 + 4 != param_1 + 0x7c) {
                    func_02117804(param_1 + 0x7c);
                }
                if (param_1 + 4 != param_1 + 0xb8) {
                    func_02117804(param_1 + 0xb8);
                }
                if (param_1 + 4 != param_1 + 0xf4) {
                    func_02117804(param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 3:
            iVar1 = func_021179b0(param_1 + 0x40, uVar2, uVar3);
            if (iVar1 != 0) {
                func_02112744(2, (int)data_021478c4, 1);
                func_0210448c();
                if (param_1 + 0x40 != param_1 + 4) {
                    func_02117804(param_1 + 4);
                }
                if (param_1 + 0x40 != param_1 + 0x7c) {
                    func_02117804(param_1 + 0x7c);
                }
                if (param_1 + 0x40 != param_1 + 0xb8) {
                    func_02117804(param_1 + 0xb8);
                }
                if (param_1 + 0x40 != param_1 + 0xf4) {
                    func_02117804(param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 2:
            iVar1 = func_021179b0(param_1 + 0x7c, uVar2, uVar3);
            if (iVar1 != 0) {
                func_02112744(2, (int)data_021478c8, 1);
                func_0210448c();
                if (param_1 + 0x7c != param_1 + 4) {
                    func_02117804(param_1 + 4);
                }
                if (param_1 + 0x7c != param_1 + 0x40) {
                    func_02117804(param_1 + 0x40);
                }
                if (param_1 + 0x7c != param_1 + 0xb8) {
                    func_02117804(param_1 + 0xb8);
                }
                if (param_1 + 0x7c != param_1 + 0xf4) {
                    func_02117804(param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 0:
            iVar1 = func_021179b0(param_1 + 0xb8, uVar2, uVar3);
            if (iVar1 != 0) {
                func_02112744(2, (int)data_021478c0, 1);
                func_0210448c();
                if (param_1 + 0xb8 != param_1 + 4) {
                    func_02117804(param_1 + 4);
                }
                if (param_1 + 0xb8 != param_1 + 0x40) {
                    func_02117804(param_1 + 0x40);
                }
                if (param_1 + 0xb8 != param_1 + 0x7c) {
                    func_02117804(param_1 + 0x7c);
                }
                if (param_1 + 0xb8 != param_1 + 0xf4) {
                    func_02117804(param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 4:
            iVar1 = func_021179b0(param_1 + 0xf4, uVar2, uVar3);
            if (iVar1 != 0) {
                func_02112744(2, (int)data_021478b8, 1);
                func_0210448c();
                if (param_1 + 0xf4 != param_1 + 4) {
                    func_02117804(param_1 + 4);
                }
                if (param_1 + 0xf4 != param_1 + 0x40) {
                    func_02117804(param_1 + 0x40);
                }
                if (param_1 + 0xf4 != param_1 + 0x7c) {
                    func_02117804(param_1 + 0x7c);
                }
                if (param_1 + 0xf4 != param_1 + 0xb8) {
                    func_02117804(param_1 + 0xb8);
                }
                func_02108e24(0);
            }
        }
    }
    func_020feae0(param_1);
}
