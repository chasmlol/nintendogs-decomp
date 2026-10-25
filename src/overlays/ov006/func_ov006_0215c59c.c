#include "ctx.h"

typedef struct { s32 a; s32 b; s32 c; } V3;

extern s32 data_0214f464;
extern s32 data_0214f45c;
extern u32 func_02036484(u8 *p);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 v);
extern u32 func_ov006_02161344(u8 *p);
extern u8 func_02029504(u8 *p);
extern u32 func_0203e908(u8 *p, s32 v);
extern void func_020362f8(u8 *p);
extern void func_020362ec(u8 *p, s32 v);

u32 func_ov006_0215c59c(u8 *param_1)
{
    s32 iVar4;

    u32 uVar7;
    s32 uVar1;
    s16 bVar3;

    iVar4 = func_02036484(param_1);
    if ((s32)iVar4 != 0) {
        *(V3 *)(param_1 + 948) = *(V3 *)(iVar4 + 8);
        *(V3 *)(620 + param_1) = *(V3 *)(param_1 + 948);
        func_0203942c(param_1);
        func_02037450(param_1, 0x392);
    }

    iVar4 = data_0214f464;
    *(V3 *)(0x74 + iVar4) = *(V3 *)(param_1 + 0x2a0);
    if (*(s16 *)(param_1 + 0xf0) == 9) {
        func_ov006_02161344(param_1);
        bVar3 = func_02029504(param_1);
        return bVar3;
    }
    if (*(s8 *)(param_1 + 0xa0) == 0) {
        iVar4 = *(s32 *)(u32)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar4;
        uVar7 = (u16)((u32)(iVar4 * 0x10000) >> 30);
        switch (uVar7) {
        case 0:
            return func_0203e908(param_1, 0x4d9);
        case 1:
            return func_0203e908(param_1, 0x4da);
        case 2:
            return func_0203e908(param_1, 0x4db);
        case 3:
            return func_0203e908(param_1, 0x4dc);
        }
    } else {
        if (*(u16 *)(param_1 + 0xfc) <= 300) {
            return *(u16 *)(param_1 + 0xfc);
        }
        func_020362f8(param_1);
        uVar1 = *(u16 *)(*(s32 *)((u8 *)data_0214f45c + 0x20) + 0x2e);
        uVar7 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = uVar7;
        func_020362ec(param_1, (s16)((u16)(((u32)uVar1 * (u16)uVar7) >> 16) + 13));
        iVar4 = func_02036484(param_1);
        if (0 != iVar4) {
            iVar4 = *(s32 *)data_0214f464 * 0x10dcd + 1;
            *(s32 *)data_0214f464 = iVar4;
            switch ((u16)((u32)(iVar4 * 0x10000) >> 30)) {
            case 0:
                return func_0203e908(param_1, 0x4d5);
            case 1:
                return func_0203e908(param_1, 0x4d6);
            case 2:
                return func_0203e908(param_1, 0x4d7);
            case 3:
                return func_0203e908(param_1, 0x4d8);
            }
        }
        uVar7 = func_ov006_02161344(param_1);
    }
    return uVar7;
}
