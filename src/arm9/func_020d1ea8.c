#include "ctx.h"

extern s32 func_020bcf08(s32);
extern void func_020be1d8(s32);
extern void func_020cf9c8(void *, s32, s32, s32);
extern void func_020cf9bc(void *);
extern void func_020d23fc(void *, s32, s32, s32);
extern void func_020d2174(void *, s32, s32);
extern u8 *data_02159444;
extern u16 data_0214efdc;

void func_020d1ea8(u8 *param_1)
{
    s32 uVar1;
    uVar1 = func_020bcf08((s32)*(s16 *)(data_02159444 + 0x7c));
    switch (uVar1) {
    case 4:
        func_020d23fc(param_1, 200, 3, 2);
        return;
    case 5:
        func_020d23fc(param_1, 200, 3, 3);
        return;
    case 6:
        func_020d2174(param_1, 90, 0);
        return;
    case 0:
    case 1:
        func_020cf9c8(param_1, 3, -1, 0);
        return;
    case 11:
        func_020be1d8(1);
        if (*(s32 *)(param_1 + 0x34) == 2) {
            func_020cf9c8(param_1, 21, -1, 0);
        }
        if (((u16)(data_0214efdc & 0x200)) == 0) {
            return;
        }
        if (*(s32 *)(param_1 + 0x34) == 21) {
            func_020cf9c8(param_1, 28, -1, 0);
            func_020cf9bc(param_1);
            return;
        }
        if (*(s32 *)(param_1 + 0x34) != 28) {
            return;
        }
        func_020cf9c8(param_1, 21, -1, 0);
        func_020cf9bc(param_1);
        return;
    case 12:
        func_020be1d8(1);
        if (*(s32 *)(param_1 + 0x34) == 2) {
            func_020cf9c8(param_1, 3, -1, 0);
        }
        if (((u16)(data_0214efdc & 0x200)) == 0) {
            return;
        }
        if (*(s32 *)(param_1 + 0x34) == 3) {
            func_020cf9c8(param_1, 27, -1, 0);
            func_020cf9bc(param_1);
            return;
        }
        if (*(s32 *)(param_1 + 0x34) != 27) {
            return;
        }
        func_020cf9c8(param_1, 3, -1, 0);
        func_020cf9bc(param_1);
        return;
    case 13:
        func_020d23fc(param_1, 90, 0, 3);
        return;
    default:
        break;
    }
    func_020d23fc(param_1, 90, 0, 3);
}
