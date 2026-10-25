#include "ctx.h"

typedef void (*CbFn)(u32, u32, u32);

extern u32 data_ov028_0215df90;

void func_ov028_0215cf00(u8 *param_1)
{
    u16 sVar1;
    u8 *obj;
    CbFn fn;
    if (*(u16 *)(param_1 + 2) != 0) {
        return;
    }
    sVar1 = *(u16 *)(param_1 + 4);
    if (sVar1 == 7) {
        return;
    }
    if (sVar1 == 9) {
        goto case9;
    }
    if (sVar1 != 21) {
        return;
    }
    obj = (u8 *)data_ov028_0215df90;
    if (*(s32 *)(obj + 0x1c) == 2) {
        fn = *(CbFn *)(obj + 0x14);
        if (fn != NULL) {
            fn(*(u16 *)(param_1 + 0x12), *(u32 *)(param_1 + 0xc), *(u16 *)(param_1 + 0x10));
            return;
        }
        return;
    }
    return;
case9:
    obj = (u8 *)data_ov028_0215df90;
    if (*(s32 *)(obj + 0x1c) != 2) {
        return;
    }
    fn = *(CbFn *)(obj + 0x14);
    if (fn != NULL) {
        fn(*(u16 *)(param_1 + 0x12), 0, 0);
        return;
    }
    return;
}
