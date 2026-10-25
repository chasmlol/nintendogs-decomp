#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 data_02147a04[];
extern u8 data_021479f4[];
extern u8 data_021479ec[];
extern u8 data_021479e4[];
extern u8 data_021479fc[];

extern s32 func_02112320(s32, s16, s16);
extern s32 func_021179b0(s32 *, s16, s16);
extern void func_021044ac(void);
extern void func_02117804(u8 *);
extern void func_02108e24(s32);

void func_020feff4(s32 param_1)
{
    s32 iVar2;

    if ((*(s32 *)(data_0215be48 + 0x4860) != 0) && ((*(u16 *)(data_0214f004 + 2) & 2) != 0)) {
        u16 uVar3 = data_0214f004[0];
        u16 uVar4 = data_0214f004[1];
        s16 sVar3 = (s16)uVar3;
        s16 sVar4 = (s16)uVar4;
        iVar2 = func_02112320(2, sVar3, sVar4);
        switch (iVar2) {
        case 3:
            iVar2 = func_021179b0((s32 *)((u8 *)param_1 + 0xb8), sVar3, sVar4);
            if (iVar2 != 0) {
                func_021044ac();
                *(s32 *)(param_1 + 0x1d0) = (s32)&data_02147a04;
                if (param_1 + 0xb8 != param_1 + 0x4) {
                    func_02117804((u8 *)param_1 + 0x4);
                }
                if (param_1 + 0xb8 != param_1 + 0x40) {
                    func_02117804((u8 *)param_1 + 0x40);
                }
                if (param_1 + 0xb8 != param_1 + 0x7c) {
                    func_02117804((u8 *)param_1 + 0x7c);
                }
                if (param_1 + 0xb8 != param_1 + 0xf4) {
                    func_02117804((u8 *)param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 4:
            iVar2 = func_021179b0((s32 *)((u8 *)param_1 + 0xf4), sVar3, sVar4);
            if (iVar2 != 0) {
                func_021044ac();
                *(s32 *)(param_1 + 0x1d0) = (s32)&data_021479f4;
                if (param_1 + 0xf4 != param_1 + 0x4) {
                    func_02117804((u8 *)param_1 + 0x4);
                }
                if (param_1 + 0xf4 != param_1 + 0x40) {
                    func_02117804((u8 *)param_1 + 0x40);
                }
                if (param_1 + 0xf4 != param_1 + 0x7c) {
                    func_02117804((u8 *)param_1 + 0x7c);
                }
                if (param_1 + 0xf4 != param_1 + 0xb8) {
                    func_02117804((u8 *)param_1 + 0xb8);
                }
                func_02108e24(0);
            }
            break;
        case 1:
            iVar2 = func_021179b0((s32 *)((u8 *)param_1 + 0x4), sVar3, sVar4);
            if (iVar2 != 0) {
                func_021044ac();
                *(s32 *)(param_1 + 0x1d0) = (s32)&data_021479ec;
                if (param_1 + 0x4 != param_1 + 0x40) {
                    func_02117804((u8 *)param_1 + 0x40);
                }
                if (param_1 + 0x4 != param_1 + 0x7c) {
                    func_02117804((u8 *)param_1 + 0x7c);
                }
                if (param_1 + 0x4 != param_1 + 0xb8) {
                    func_02117804((u8 *)param_1 + 0xb8);
                }
                if (param_1 + 0x4 != param_1 + 0xf4) {
                    func_02117804((u8 *)param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 0:
            iVar2 = func_021179b0((s32 *)((u8 *)param_1 + 0x40), sVar3, sVar4);
            if (iVar2 != 0) {
                func_021044ac();
                *(s32 *)(param_1 + 0x1d0) = (s32)&data_021479e4;
                if (param_1 + 0x40 != param_1 + 0x4) {
                    func_02117804((u8 *)param_1 + 0x4);
                }
                if (param_1 + 0x40 != param_1 + 0x7c) {
                    func_02117804((u8 *)param_1 + 0x7c);
                }
                if (param_1 + 0x40 != param_1 + 0xb8) {
                    func_02117804((u8 *)param_1 + 0xb8);
                }
                if (param_1 + 0x40 != param_1 + 0xf4) {
                    func_02117804((u8 *)param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        case 2:
            iVar2 = func_021179b0((s32 *)((u8 *)param_1 + 0x7c), sVar3, sVar4);
            if (iVar2 != 0) {
                func_021044ac();
                *(s32 *)(param_1 + 0x1d0) = (s32)&data_021479fc;
                if (param_1 + 0x7c != param_1 + 0x4) {
                    func_02117804((u8 *)param_1 + 0x4);
                }
                if (param_1 + 0x7c != param_1 + 0x40) {
                    func_02117804((u8 *)param_1 + 0x40);
                }
                if (param_1 + 0x7c != param_1 + 0xb8) {
                    func_02117804((u8 *)param_1 + 0xb8);
                }
                if (param_1 + 0x7c != param_1 + 0xf4) {
                    func_02117804((u8 *)param_1 + 0xf4);
                }
                func_02108e24(0);
            }
            break;
        default: {
            *(s32 *)(*(s32 *)&data_0215be48 + 0x1ce0) = 6;
            *(s32 *)(*(s32 *)&data_0215be48 + 0x48c0) = 6;
            break;
        }
        }
    }
    if (*(s32 *)(data_0215be48 + 0x50b0) != 1) {
        return;
    }
    func_02117804((u8 *)param_1 + 0x4);
    func_02117804((u8 *)param_1 + 0x40);
    func_02117804((u8 *)param_1 + 0x7c);
    func_02117804((u8 *)param_1 + 0xb8);
    func_02117804((u8 *)param_1 + 0xf4);
}
