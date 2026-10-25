#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

typedef volatile s8 vs8;

extern u32 *data_0214f464;
extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 *data_0215942c;
extern u16 data_0213b5bc[];

extern void func_02009408(u8 *p, s32 a, s32 b, s32 c, s32 d);
extern void func_0200926c(u8 *p, s32 a, s32 b);
extern void func_02093a04(s32 a);
extern void func_0203e2c0(u8 *p, s32 a);
extern void func_0203e1a0(u8 *p);

#define FXM(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0203ad20(u8 *p)
{
    s32 s, v, k, t, e, s240, s234, cr, f;
    u16 nv;
    u8 *o;

    if (*(s16 *)(p + 0x110) > 0) {
        *(s16 *)(p + 0x110) = *(s16 *)(p + 0x110) - 1;
        if (*(s16 *)(p + 0x110) == 18) {
            func_02009408(p, 0x6e, 5, 0, 0);
        } else if (*(s16 *)(p + 0x110) == 0) {
            func_0200926c(p, 0x6e, 5);
        }
    }
    if (*(s16 *)(p + 0x13e) == 10) {
        *(u16 *)(p + 0x102) = *(u16 *)(p + 0x102) + 1;
        if (*(u16 *)(p + 0x102) >= 60) {
            *(u16 *)(p + 0x102) = 0;
            *(vu8 *)(p + 0xd2) = 1;
            o = *(u8 **)(p + 0x9e8);
            nv = (u16)(*(u16 *)(o + 0x64e) + 1);
            if (nv < 10000) {
                *(u16 *)(o + 0x64e) = nv;
            } else {
                *(u16 *)(o + 0x64e) = 10000;
            }
            if ((s8)*((u8 *)data_0214f464 + *(s8 *)(p + 0x88) + 28) == 0) {
                func_02093a04(1);
            }
            *(vu8 *)(p + 0xd2) = 1;
            o = *(u8 **)(p + 0x9e8);
            *(u16 *)(o + 0x64c) = *(u16 *)(o + 0x64c) + 1;
            if (*(u16 *)(o + 0x64c) > 59999) {
                *(u16 *)(o + 0x64c) = 59999;
            }
            func_0203e2c0(p, 0);
        }
    }
    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0) {
        func_0203e1a0(p);
    } else {
        o = *(u8 **)(p + 0x9e8);
        s = (s16)(*(s16 *)(o + 0x24) + 4);
        *(vu8 *)(p + 0xd2) = 1;
        if (s < 0) {
            s = 0;
        }
        if (s > 10000) {
            s = 10000;
        }
        *(s16 *)(*(u8 **)(p + 0x9e8) + 0x24) = (s16)s;
    }
    o = *(u8 **)(p + 0x9e8);
    if (*(s16 *)(o + 0x1e) >= 10000) {
        f = 1;
        goto fl;
    }
    f = *(s16 *)(o + 0x20) >= 10000;
fl:
    if (f) {
        s = (s16)(*(s16 *)(o + 0x18) - 10);
        *(vu8 *)(p + 0xd2) = 1;
        if (s < 0) {
            s = 0;
        }
        if (s > 10000) {
            s = 10000;
        }
        *(s16 *)(*(u8 **)(p + 0x9e8) + 0x18) = (s16)s;
    }
    if (*(u16 *)(p + 0x104) != 0) {
        *(u16 *)(p + 0x104) = *(u16 *)(p + 0x104) - 1;
        if (*(u16 *)(p + 0x104) == 0) {
            *(vu8 *)(p + 0xd2) = 1;
            *(u16 *)(*(u8 **)(p + 0x9e8) + 0x1c) = 0;
        }
    }
    v = (s32)(*data_0214f464 * 0x10dcd + 1);
    *data_0214f464 = (u32)v;
    *(s32 *)(p + 0x29c) = FXM((s16)(u16)(v & 0xfff), 0x10000);
    k = 0;
    if (*(s16 *)(p + 0xf0) != 111) {
        return;
    }
    if (*(s8 *)(p + 0x8b) != 3) {
        return;
    }
    if (*(u16 *)data_0215942c != 0) {
        return;
    }
    {
        s32 idx = *(s8 *)(0x8d + p);
        u8 *ob = *(u8 **)(p + 0x9e8);
        s32 ob24 = *(s16 *)(ob + 0x24);
        s32 tb = data_0213b5bc[idx];
        if (ob24 > tb + 420) {
            s = (s16)(tb - 1200);
            *(vu8 *)(0xd2 + p) = 1;
            if (s < 0) {
                s = 0;
            }
            if (s > 10000) {
                s = 10000;
            }
            *(s16 *)(*(u8 **)(0x9e8 + p) + 0x24) = s;
        } else if (ob24 > 360 + tb) {
            switch (*(vs8 *)(0x8d + p)) {
            case 1:
            case 2:
            case 3:
                k = 15;
                break;
            case 0:
                k = 30;
                break;
            default:
                k = 60;
                break;
            case 4:
                k = 45;
                break;
            }
        } else if (ob24 > 240 + tb) {
            switch (*(vs8 *)((int)p + 0x8d)) {
            case 1:
            case 2:
            case 3:
                k = 60;
                break;
            case 0:
                k = 120;
                break;
            default:
                k = 240;
                break;
            case 4:
                break;
            }
        }
    }
    if (k == 0) {
        return;
    }
    v = (s32)(*data_0214f464 * 0x10dcd + 1);
    *data_0214f464 = (u32)v;
    t = (s32)(u16)(((u32)k * (u32)(u16)v) >> 16);
    if (t != 0) {
        return;
    }
    s = *(s16 *)(data_02159444 + 122);
    if (s < 0) {
        goto e0;
    }
    if (*(s16 *)(data_02159468 + 32) > s) {
        goto eload;
    }
e0:
    e = 0;
    goto eend;
eload:
    e = *(s32 *)(data_02159468 + s * 4 + 4);
eend:
    if (e != 0 && (u16)(s16)(*(s16 *)(e + 144) - 4) <= 1 && *(s8 *)(p + 0x88) == *(s16 *)(e + 152)) {
        *(vu8 *)(p + 0xaa) = 2;
        s240 = *(s16 *)(p + 0xf0);
        if (s240 >= 4 && s240 <= 8) {
            cr = 1;
            goto c1t;
        }
        if (s240 == 87) {
            cr = 1;
            goto c1t;
        }
        s234 = *(s16 *)(p + 0xea);
        if (s234 >= 15 && s234 <= 75) {
            cr = 1;
            goto c1t;
        }
        if (s234 >= 0x119 && s234 <= 316) {
            cr = 1;
            goto c1t;
        }
        cr = 0;
    c1t:
        if (cr != 0) {
            cr = 0;
            goto c1e;
        }
        s234 = *(s16 *)(p + 0xea);
        if (s234 >= 0x478 && s234 <= 0x47e) {
            cr = 0;
            goto c1e;
        }
        if (s234 >= 0x4c7 && s234 <= 0x4ca) {
            cr = 0;
            goto c1e;
        }
        if (s240 == 83) {
            cr = 0;
            goto c1e;
        }
        if (s240 == 84) {
            cr = 0;
        } else {
            cr = 1;
        }
    c1e:
        if (cr == 0) {
            return;
        }
        *(vu8 *)(p + 0xa8) = 1;
        *(u16 *)(p + 0x112) = 0;
        *(s16 *)(p + 0xf0) = 3;
        *(vu8 *)(p + 0xa5) = 0;
        return;
    }
    {
        s32 cr2, s240b, s234b;
        *(vu8 *)(p + 0xaa) = 1;
        s240b = *(s16 *)(p + 0xf0);
        if (s240b >= 4 && s240b <= 8) {
            cr2 = 1;
            goto c2t;
        }
        if (s240b == 87) {
            cr2 = 1;
            goto c2t;
        }
        s234b = *(s16 *)(p + 0xea);
        if (s234b >= 15 && s234b <= 75) {
            cr2 = 1;
            goto c2t;
        }
        if (s234b >= 0x119 && s234b <= 316) {
            cr2 = 1;
            goto c2t;
        }
        cr2 = 0;
    c2t:
        if (cr2 != 0) {
            cr2 = 0;
            goto c2e;
        }
        s234b = *(s16 *)(p + 0xea);
        if (s234b >= 0x478 && s234b <= 0x47e) {
            cr2 = 0;
            goto c2e;
        }
        if (s234b >= 0x4c7 && s234b <= 0x4ca) {
            cr2 = 0;
            goto c2e;
        }
        if (s240b == 83) {
            cr2 = 0;
            goto c2e;
        }
        if (s240b == 84) {
            cr2 = 0;
        } else {
            cr2 = 1;
        }
    c2e:
        if (cr2 == 0) {
            return;
        }
        *(vu8 *)(p + 0xa8) = 1;
        *(u16 *)(p + 0x112) = 0;
        *(s16 *)(p + 0xf0) = 1;
        *(vu8 *)(p + 0xa5) = 0;
        return;
    }
}
