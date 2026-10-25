#include "ctx.h"

extern u32 data_0214e6c0[];

typedef void (*CbFn)(u32, u32);

void func_02001dc4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 code;
    u32 cls;
    CbFn cb;

    if (param_3 != 0) {
        if (data_0214e6c0[0] != 0) {
            data_0214e6c0[0] = 0;
        }
        cb = (CbFn)data_0214e6c0[1];
        if (cb != NULL) {
            data_0214e6c0[1] = 0;
            cb(6, data_0214e6c0[2]);
        }
    }
    cls = (u16)((param_2 & 0x7f00) >> 8);
    switch ((u16)(param_2 & 0xff)) {
    case 0: code = 0; break;
    case 1: code = 4; break;
    case 2: code = 2; break;
    case 3: code = 5; break;
    case 4: code = 1; break;
    default: code = 6; break;
    }
    if (cls == 0x51) {
        if ((CbFn)data_0214e6c0[4] == NULL) {
            return;
        }
        ((CbFn)data_0214e6c0[4])(code, data_0214e6c0[5]);
        return;
    }
    if (cls == 0x40 && data_0214e6c0[6] != 0) {
        *(u16 *)data_0214e6c0[6] = *(u16 *)0x027fff94;
    }
    if (data_0214e6c0[0] != 0) {
        data_0214e6c0[0] = 0;
    }
    cb = (CbFn)data_0214e6c0[1];
    if (cb == NULL) {
        return;
    }
    data_0214e6c0[1] = 0;
    cb(code, data_0214e6c0[2]);
}
