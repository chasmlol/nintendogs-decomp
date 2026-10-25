#include "ctx.h"

extern void func_0206c7bc(u16 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern s32 func_02101510(s32 a, s32 b, s32 c, u16 d, u16 e, u16 f, u16 g, u16 h, s32 i, s32 j);
extern void func_02101328(s32 a, s32 b, s32 c);

void func_0210d690(s32 param_1)
{
    s32 iVar1;
    s32 iVar3;
    u16 sVar2;
    u16 sVar4;
    volatile s16 sVar5;

    iVar1 = *(s32 *)(param_1 + 0x1c60);
    switch (iVar1) {
    case 0: {
        *(s32 *)(param_1 + 0x874) = 8;
        *(u16 *)(param_1 + 0x878) = 9;
        *(u16 *)(param_1 + 0x87a) = 3;
        *(u16 *)(param_1 + 0x87c) = 14;
        *(u16 *)(param_1 + 0x87e) = 3;
        *(u16 *)(param_1 + 0x880) = 7;
    } break;
    case 1: {
        *(s32 *)(param_1 + 0x874) = 11;
        *(u16 *)(param_1 + 0x878) = 6;
        *(u16 *)(param_1 + 0x87a) = 3;
        *(u16 *)(param_1 + 0x87c) = 20;
        *(u16 *)(param_1 + 0x87e) = 3;
        *(u16 *)(param_1 + 0x880) = 10;
    } break;
    case 2: {
        *(s32 *)(param_1 + 0x874) = 27;
        *(u16 *)(param_1 + 0x878) = 3;
        *(u16 *)(param_1 + 0x87a) = 2;
        *(u16 *)(param_1 + 0x87c) = 26;
        *(u16 *)(param_1 + 0x87e) = 5;
        *(u16 *)(param_1 + 0x880) = 13;
    } break;
    }
    iVar3 = param_1 + 100;
    sVar2 = *(u16 *)(param_1 + 0x87c) * *(u16 *)(param_1 + 0x87e);
    sVar4 = 0x232;
    sVar5 = (s16)0x1ff;
    func_0206c7bc(sVar5, iVar3, 0x800);
    func_02101cf4();
    iVar1 = func_02101510(0, 1, iVar3, *(u16 *)(param_1 + 0x878), *(u16 *)(param_1 + 0x87a),
                          *(u16 *)(param_1 + 0x87c), *(u16 *)(param_1 + 0x87e), sVar4, 2, 0x32);
    *(s32 *)(param_1 + 0x10) = iVar1;
    iVar1 = func_02101510(0, 1, iVar3, 6, 9, 0x18, 10, (u16)(sVar4 + sVar2), 2, (u16)(sVar2 + 0x32));
    *(s32 *)(param_1 + 0x14) = iVar1;
    func_02101328(0, *(s32 *)(param_1 + 0x10), 0);
}
