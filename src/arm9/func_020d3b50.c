#include "ctx.h"
extern u8 *data_021594d0;
typedef void (*CbFn)(u32, u32, u32);

void func_020d3b50(u8 *param_1)
{
    u16 t;
    u8 *v;
    s32 mode;
    CbFn fn;

    if (*(u16 *)(param_1 + 2) != 0) {
        return;
    }
    t = *(u16 *)(param_1 + 4);
    if (t == 7) {
        return;
    }
    if (t == 9) {
        goto nine;
    }
    if (t != 0x15) {
        return;
    }
    v = data_021594d0;
    mode = *(s32 *)(v + 0x20);
    switch (mode) {
    case 2:
        fn = (CbFn)*(u32 *)(v + 0x14);
        if (fn != NULL) {
            fn(*(u16 *)(param_1 + 0x12), *(u32 *)(param_1 + 0xc), *(u16 *)(param_1 + 0x10));
        }
        return;
    case 3:
        fn = (CbFn)*(u32 *)(v + 0x14);
        if (fn != NULL) {
            fn(0, *(u32 *)(param_1 + 0xc), *(u16 *)(param_1 + 0x10));
        }
        return;
    default:
        return;
    }
nine:
    v = data_021594d0;
    mode = *(s32 *)(v + 0x20);
    switch (mode) {
    case 2:
        fn = (CbFn)*(u32 *)(v + 0x14);
        if (fn != NULL) {
            fn(*(u16 *)(param_1 + 0x12), 0, 0);
        }
        return;
    case 3:
        fn = (CbFn)*(u32 *)(v + 0x14);
        if (fn != NULL) {
            fn(0, 0, 0);
        }
        return;
    default:
        return;
    }
}
