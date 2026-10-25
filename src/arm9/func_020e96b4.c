#pragma avoid_byte strb
#include "ctx.h"

extern s8 data_027c0bb8;
extern u32 data_027c0bc0;
extern u32 data_027c0bc4;
extern u8 data_02132f4c[];
extern u8 data_02132f4d[];
extern u8 data_02132f4e[];
extern u8 data_02132f55[];
extern u8 data_02132f56[];
extern u8 data_02132f57[];
extern u8 data_02132f5e[];
extern u8 data_02132f5f[];
extern u8 data_02132f60[];
extern u8 data_02132f67[];
extern u8 data_02132f68[];
extern u8 data_02132f69[];

u32 func_020e96b4(s32 param_1, s32 param_2)
{
    u8 local[9];
    s32 mode;
    u32 uVar8;
    u32 uVar1;
    u32 lr;
    u32 m2;

    mode = data_027c0bb8;
    if (mode == 3 || mode == 1) {
        s32 base = param_1 * 36;
        s32 o3 = param_2 * 3;
        s32 o9 = mode * 9;
        u32 b0 = (data_02132f4c + base + o9)[o3];
        u32 b1 = (data_02132f4d + base + o9)[o3];
        u32 b2 = (data_02132f4e + base + o9)[o3];
        return (u16)(b0 | (b1 << 5) | (b2 << 10));
    }
    uVar8 = data_027c0bc0;
    lr = uVar8 << 7;
    if (uVar8 >= 30) {
        lr = (uVar8 - 30) << 7;
    }
    m2 = data_027c0bc4;
    if (m2 == 6) {
        if (uVar8 < 30) {
            s32 base = param_1 * 36;
            s32 o3 = param_2 * 3;
            local[0] = (data_02132f67 + base)[o3];
            local[1] = (data_02132f68 + base)[o3];
            local[2] = (data_02132f69 + base)[o3];
            local[6] = (data_02132f4c + base)[o3];
            local[7] = (data_02132f4d + base)[o3];
            local[8] = (data_02132f4e + base)[o3];
        } else {
            s32 base = param_1 * 36;
            s32 o3 = param_2 * 3;
            local[0] = (data_02132f4c + base)[o3];
            local[1] = (data_02132f4d + base)[o3];
            local[2] = (data_02132f4e + base)[o3];
            local[6] = (data_02132f55 + base)[o3];
            local[7] = (data_02132f56 + base)[o3];
            local[8] = (data_02132f57 + base)[o3];
        }
    }
    if (m2 == 18) {
        if (uVar8 < 30) {
            s32 base = param_1 * 36;
            s32 o3 = param_2 * 3;
            local[0] = (data_02132f55 + base)[o3];
            local[1] = (data_02132f56 + base)[o3];
            local[2] = (data_02132f57 + base)[o3];
            local[6] = (data_02132f5e + base)[o3];
            local[7] = (data_02132f5f + base)[o3];
            local[8] = (data_02132f60 + base)[o3];
        } else {
            s32 base = param_1 * 36;
            s32 o3 = param_2 * 3;
            local[0] = (data_02132f5e + base)[o3];
            local[1] = (data_02132f5f + base)[o3];
            local[2] = (data_02132f60 + base)[o3];
            local[6] = (data_02132f67 + base)[o3];
            local[7] = (data_02132f68 + base)[o3];
            local[8] = (data_02132f69 + base)[o3];
        }
    }
    {
        s32 cnt = 0;
        u8 *p6 = local + 6;
        u8 *p5 = local;
        u8 *p3 = local + 3;
        u32 w4 = 4096 - lr;
        do {
            s32 iv;
            cnt = cnt + 1;
            iv = (s32)((u32)*p5 * w4 + (u32)*p6 * lr) >> 12;
            if (iv > 31) {
                iv = 31;
            }
            *p3 = (u8)iv;
            p6 = p6 + 1;
            p5 = p5 + 1;
            p3 = p3 + 1;
        } while (cnt < 3);
    }
    return (u16)(local[3] | (local[4] << 5) | (local[5] << 10));
}
