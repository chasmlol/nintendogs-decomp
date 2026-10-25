#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;
extern u16 data_0214f004[];
extern void func_ov004_02161a7c(void);
extern s32 func_ov004_02162c9c(s32 a);
extern void func_0207c910(s32 a, s32 b, u8 *c, s32 d);

static inline void SwapR(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov004_02162a4c(void)
{
    u8 *obj;
    u8 *q;
    s32 i;
    u8 c;
    u8 *pc;
    u16 *p16;
    u8 **gp;

    gp = &data_ov004_02170320;
    i = 0;
    do {
        obj = (*gp);
        q = *(u8 **)(obj + 0x36c4);
        if (*(s32 *)(q + 8) == 0) {
            SwapR(obj[0x1c], (vu8 *)q);
            obj = (*gp);
            q = *(u8 **)(obj + 0x36c4);
            SwapR(obj[0x1d], (vu8 *)(q + 1));
            break;
        }
        func_ov004_02161a7c();
        if (i == 0) {
            obj = (*gp);
            q = *(u8 **)(obj + 0x36c4);
            if (*(s32 *)(q + 8) == 0) {
                SwapR(obj[0x1c], (vu8 *)q);
                obj = (*gp);
                q = *(u8 **)(obj + 0x36c4);
                SwapR(obj[0x1d], (vu8 *)(q + 1));
            } else {
                SwapR(*((u8 *)(q + *(s32 *)(q + 8) * 2) + 10), (vu8 *)q);
                obj = (*gp);
                q = *(u8 **)(obj + 0x36c4);
                SwapR(*((u8 *)(q + *(s32 *)(q + 8) * 2) + 11), (vu8 *)(q + 1));
            }
        }
        i = i + 1;
    } while (i < 1);

    if ((data_0214f004[1] & 1) == 0 && func_ov004_02162c9c(1) != 0) {
        obj = data_ov004_02170320;
        c = *(u8 *)(obj + 0x10);
        p16 = (u16 *)(obj + 0x16);
        pc = obj + 0x10;
        if (c == 0) goto s0;
        if (c == 1) goto s1;
        if (c == 2) *p16 = 0xf0;
        goto e1;
    s0:
        *p16 = 0;
        goto e1;
    s1:
        *p16 = 0x78;
    e1:
        c = pc[1];
        if (c == 0) goto t0;
        if (c == 1) goto t1;
        if (c == 2) p16[1] = 0xc0;
        goto e2;
    t0:
        p16[1] = 0;
        goto e2;
    t1:
        p16[1] = 0x60;
    e2:
        obj = data_ov004_02170320;
        *(s16 *)(obj + 0x12) = *(s16 *)(*(u8 **)(obj + 0x36c4) + 2);
        obj = data_ov004_02170320;
        *(s16 *)(obj + 0x14) = *(s16 *)(*(u8 **)(obj + 0x36c4) + 4);
        obj = data_ov004_02170320;
        *(s32 *)(obj + 8) = 0;
        obj = data_ov004_02170320;
        SwapR(1, (vu8 *)obj);
    }

    obj = data_ov004_02170320;
    SwapR(*(*(u8 **)(obj + 0x36c4)), (vu8 *)(obj + 0x1a));
    obj = data_ov004_02170320;
    SwapR((*(u8 **)(obj + 0x36c4))[1], (vu8 *)(obj + 0x1b));
    obj = data_ov004_02170320;
    if (*(s32 *)(obj + 0x12fc) < 1) {
        *(s32 *)(obj + 0x12f8) = 6;
    } else {
        *(s32 *)(obj + 0x12f8) = 0;
    }
    obj = data_ov004_02170320;
    *(s32 *)(obj + 0x12fc) = *(s32 *)(obj + 0x12fc) + 1;
    func_0207c910(25, 0, *(u8 **)(data_ov004_02170320 + 0x36c4) + 0x264, 0x2000);
}
