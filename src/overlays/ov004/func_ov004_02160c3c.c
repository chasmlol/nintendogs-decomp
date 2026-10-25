#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0214efdc[];
extern u8 *data_ov004_02170320;
u32 func_ov004_02160c3c(void)
{
    u32 r = 0;
    u8 *q;
    u8 *b;
    u32 v;
    u32 old;
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x20) != 0 || (u16)(*(u16 *)(data_0214efdc + 2) & 0x800) != 0) {
        b = data_ov004_02170320;
        v = b[0x10];
        if (v != 0) {
            r = v - 1;
            q = b + 0x10;
            *(u8 *)(q) = (u8)(r);
            r = 1;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x10) != 0 || (u16)(*(u16 *)(data_0214efdc + 2) & 1) != 0) {
        b = data_ov004_02170320;
        v = b[0x10];
        if (v < 2) {
            r = v + 1;
            q = b + 0x10;
            *(u8 *)(q) = (u8)(r);
            r = 1;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x40) != 0 || (u16)(*(u16 *)(data_0214efdc + 2) & 0x400) != 0) {
        b = data_ov004_02170320;
        v = b[0x11];
        if (v != 0) {
            r = v - 1;
            q = b + 0x11;
            *(u8 *)(q) = (u8)(r);
            r = 1;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x80) != 0 || (u16)(*(u16 *)(data_0214efdc + 2) & 2) != 0) {
        b = data_ov004_02170320;
        v = b[0x11];
        if (v < 2) {
            r = v + 1;
            q = b + 0x11;
            *(u8 *)(q) = (u8)(r);
            r = 1;
        }
    }
    return r;
}
