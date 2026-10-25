#include "ctx.h"

extern u8 *data_0215be38;
extern u32 data_02132f94[];
extern void func_0208f54c(u8 *a, s32 b);
extern void func_0208f41c(s32 a);
extern void func_0207df9c(s32 a, u8 *b);
extern void func_0207dbe0(s32 a, s32 b);
extern void func_0207dc3c(s32 a, s32 b);

s32 func_020eb780(s32 param_1)
{
    u8 *iVar5;
    s32 off;
    u8 *iVar2;
    void (*cb)(s32, s32, s32);
    s32 t;
    s32 v;

    if (*(s16 *)(data_0215be38 + 0x174) != param_1) {
        *(u32 *)(data_0215be38 + param_1 * 4 + 0x178) = 0;
        iVar2 = data_0215be38;
        off = param_1 * 12;
        cb = *(void (**)(s32, s32, s32))(iVar2 + 0x2c);
        iVar5 = iVar2 + 0x150 + off;
        if (cb != 0) {
            cb(1, param_1, *(s16 *)(iVar2 + param_1 * 8 + 0x184));
        }
        func_0208f54c(data_0215be38 + 4, *(s32 *)(iVar5 + 4));
        *(u32 *)(iVar5 + 4) = 0;
        v = *(s32 *)(data_0215be38 + off + 0x134);
        if (v != 0) {
            func_0208f41c(v);
        }
        iVar2 = data_0215be38 + 0x30 + param_1 * 84;
        func_0207df9c(*(s32 *)(iVar2 + 0x4c), data_0215be38 + 0x30);
        off = (u32)param_1 * 12;
        *(u32 *)(iVar2 + 0x4c) = 0;
        t = data_02132f94[param_1];
        func_0207dbe0(*(s32 *)(data_0215be38 + off + 0x158), t);
        func_0207dc3c(*(s32 *)(data_0215be38 + off + 0x158), t);
        return 1;
    }
    return 0;
}
