#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_02044b98(void);
extern s32 func_02024140(void);
extern s32 func_0202e2d0(u8 *p);
extern s32 func_0202e29c(u8 *p);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(s32 a, s32 b);
extern u8 *func_020bc3c4(void);

void func_ov003_0218c050(u8 *param_1, s32 param_2)
{
    s32 iVar2;

    if (((*(u16 *)(data_02159444 + 0x84) & 2) != 0) && (func_02044b98() == 0)
        && (iVar2 = func_02024140(), iVar2 == 0) && (param_2 == 0)) {
        *(s16 *)(param_1 + 0x12a) = *(s16 *)(param_1 + 0x12a) + 1;
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
        if (0x3c < *(u16 *)(param_1 + 0x11a)) {
            *(u16 *)(param_1 + 0x12a) = 0;
        }
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    if (*(s16 *)(param_1 + 0x12a) < 4) {
        return;
    }
    if (func_0202e2d0(param_1) != 0) {
        return;
    }
    if (func_0202e29c(param_1) != 0) {
        return;
    }
    if (func_02044b98() != 0) {
        return;
    }
    if (func_02024140() != 0) {
        return;
    }
    *(u16 *)(param_1 + 0x12a) = 0;
    if (func_02039cc4(param_1) == 0) {
        return;
    }
    func_020bbe14(1, -1);
    iVar2 = (s32)func_020bc3c4() + 136;
    *(u32 *)(iVar2 + 0x6c) = 0;
}
