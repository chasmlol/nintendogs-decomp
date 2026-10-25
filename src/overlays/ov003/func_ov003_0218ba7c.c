#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w0; u32 w1; u32 w2; } T3;

extern u8 *data_02159444;
extern s8 data_0213c42d[];

extern s32 func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_020398a8(u8 *p);
extern s32 func_020398e4(u8 *p);
extern s32 func_02039920(u8 *p);

void func_ov003_0218ba7c(u8 *p)
{
    u8 *q;

    switch (*(s8 *)(p + 0x8b)) {
    case 5:
        *(T3 *)(p + 0x3b4) = *(T3 *)(p + 0x278);
        p[152] = 9;
        func_020398a8(p);
        return;
    case 4:
        func_020398e4(p);
        return;
    case 3:
        func_02039920(p);
        return;
    case 2:
        goto L2;
    case 0:
    case 1:
        goto Ltail;
    default:
        goto done;
    }
L2:
    q = *(u8 **)(data_02159444 + 0x1c);
    *(T3 *)(p + 0x3b4) = *(T3 *)(q + 0x30);
    func_0203e8cc(p, 2, 0x10);
    p[152] = 9;
    p[151] = 1;
    return;
Ltail:
    if (*(u16 *)(p + 0x11e) != 0) {
        u32 two = 2;
        p[151] = 2;
        *(T3 *)(p + 0x3b4) = *(T3 *)(p + 0x278);
        func_0203e8cc(p, two, 4);
        func_0203e8cc(p, 3, ((data_0213c42d[*(u16 *)(*(u8 **)(p + 0x9e8)) * 100] + 2) << 16) >> 16);
        return;
    }
    {
        u32 zz = 0;
        p[151] = 0;
        q = *(u8 **)(data_02159444 + 0x1c);
        *(T3 *)(p + 0x3b4) = *(T3 *)(q + 0x30);
        func_0203e8cc(p, 2, zz);
    }
    func_0203e8cc(p, 3, 0);
done:
    ;
}
