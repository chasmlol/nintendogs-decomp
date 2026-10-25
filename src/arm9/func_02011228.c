#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_02028130(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203541c(u8 *p);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);

void func_02011228(u8 *p)
{
    s32 sh;
    s32 iv;
    s32 r;
    s32 bflag;
    u32 *pp;
    u32 nv;
    u32 t;

    if (*(s16 *)((u8 *)p + 256 + 82) == 0x15c) {
        r = func_0203567c(p);
        if (r != 0)
            func_0203e8cc(p, 0, 0x15d);
    } else {
        sh = func_02028130(p);
        sh = sh >> 5;

        pp = *(u32 **)&data_0214f464;
        nv = *pp * 0x10dcd + 1;
        t = (u16)nv * 10;
        *pp = nv;
        *(s32 *)(p + 0x3b4) = sh * ((s32)(u16)(t >> 16) - 5) + *(s32 *)(p + 0x3b4);

        pp = *(u32 **)&data_0214f464;
        nv = *pp * 0x10dcd + 1;
        t = (u16)nv * 10;
        *pp = nv;
        *(s32 *)(p + 0x3b8) = sh * ((s32)(u16)(t >> 16) - 5) + *(s32 *)(p + 0x3b8);

        pp = *(u32 **)&data_0214f464;
        nv = *pp * 0x10dcd + 1;
        t = (u16)nv * 10;
        *pp = nv;
        *(s32 *)(p + 0x3bc) = sh * ((s32)(u16)(t >> 16) - 5) + *(s32 *)(p + 0x3bc);
    }

    iv = func_0203541c(p);
    if (iv == 0)
        goto zero;
    func_0203e8cc(p, 2, 1);
    switch (*(s16 *)((u8 *)iv + 144)) {
    case 4:
        goto c4;
    case 7:
        goto c7;
    }
    goto dflt;
c4:
    if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4)
        *(u32 *)(p + 0x948) = 1;
    goto dflt;
c7:
    if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4)
        *(u32 *)(p + 0x948) = 8;
dflt:
    r = func_ov003_02198298(p);
    goto stage1;
zero:
    r = 0;
stage1:
    if (r != 0) {
        bflag = 1;
        goto done;
    }
    r = func_020289d0(p, 0, 0);
    if (r != 0) {
        bflag = 1;
        goto done;
    }
    r = func_0202cd10(p, 0);
    bflag = (r != 0);
done:
    if (bflag)
        return;
    if (*(u16 *)((u8 *)p + 252) <= 40)
        return;

    pp = *(u32 **)&data_0214f464;
    nv = *pp * 0x10dcd + 1;
    t = (u16)nv * 40;
    *pp = nv;
    if ((u16)(t >> 16) != 0)
        return;
    func_0203e908(p, 0);
}
