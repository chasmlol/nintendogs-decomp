#include "ctx.h"

extern u8 *volatile data_0215be48;

static inline void VCall(u8 *obj, u32 off)
{
    (*(void (**)(u8 *))(*(u8 **)(obj + 0xc0) + off))(obj + 196);
}

void func_020fd9e0(void)
{
    u8 *s;
    VCall(data_0215be48, 0x10);
    s = data_0215be48;
    switch (*(u32 *)(s + 0xac)) {
    case 1:
        if (*(u32 *)(s + 0x487c) != 0) {
            *(u32 *)(s + 0x487c) = 0;
            VCall(data_0215be48, 0x24);
        }
        VCall(data_0215be48, 0x28);
        return;
    case 2:
        if (*(u32 *)(s + 0x4880) != 0) {
            *(u32 *)(s + 0x4880) = 0;
            VCall(data_0215be48, 0x14);
        }
        VCall(data_0215be48, 0x18);
        return;
    case 3:
        if (*(u32 *)(s + 0x4884) != 0) {
            *(u32 *)(s + 0x4884) = 0;
            VCall(data_0215be48, 0x2c);
        }
        VCall(data_0215be48, 0x30);
        return;
    default:
        return;
    }
}
