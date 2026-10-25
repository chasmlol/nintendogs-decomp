#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern u8 data_0213b7d0[];
extern u8 *data_0214f464;
extern s16 data_0213c00c[][15];
extern s16 data_0213bc5c[][15];

s32 func_020bbe14(s32 a, s32 b);
s32 func_020bc14c(void);
u8 *func_020bc3c4(void);
void func_ov003_0218c504(u8 *p, s32 a);
s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);

u32 func_0202cd10(u8 *param_1, s32 param_2)
{
    u8 *p;
    s32 iv;
    u32 fl;
    s32 iw;
    s32 r6;
    s32 r5;
    s32 r4;
    s32 t;
    s16 row;
    u8 *q;

    p = param_1;
    if (*(u16 *)(p + 274) != 0) return 0;
    iv = *(s16 *)(p + 240);
    switch (iv) {
    case 0: case 1: case 2: case 3: case 9: goto DEF;
    case 4: goto C4;
    case 5: goto C5;
    case 6: goto C6;
    case 7: goto C7;
    case 8: goto C8;
    case 10: goto C10;
    case 11: goto C11;
    case 111: return 0;
    default: goto DEF;
    }
C4:
    r4 = *(s8 *)(p + 136);
    r6 = ((s32 *)data_0213b7d0)[param_2];
    r5 = 1;
    if (r4 == func_020bc14c()) goto L_bc;
    if (r4 != *(s8 *)(data_0214f464 + 7)) r5 = 0;
L_bc:
    if (r5 == 0) goto L188;
    switch (r6) {
    case 0: goto Lf4;
    case 1: goto L104;
    case 2: goto L130;
    case 3: goto Lf4;
    case 4: case 5: case 6: case 7: case 8: goto L140;
    default: goto Lf4;
    }
Lf4:
    func_020bbe14(5, r4);
    goto L14c;
L104:
    if (*(u16 *)(p + 242) != 28) goto L120;
    func_020bbe14(11, r4);
    goto L14c;
L120:
    func_020bbe14(7, r4);
    goto L14c;
L130:
    func_020bbe14(9, r4);
    goto L14c;
L140:
    func_020bbe14(13, r4);
L14c:
    if (*(s8 *)(p + 136) != *(s8 *)(data_0214f464 + 7)) goto L178;
    q = func_020bc3c4() + 136;
    *(s32 *)(q + 0x6c) = 1;
    goto L188;
L178:
    q = func_020bc3c4() + 136;
    *(s32 *)(q + 0x6c) = 0;
L188:
    *(u16 *)(p + 256 + 62) = 10;
    func_ov003_0218c504(p, param_2);
    return 1;
C5:
    *(u16 *)(p + 234) = param_2 + 31;
    p[168] = 0;
    *(u16 *)(p + 274) = 0;
    *(u16 *)(p + 240) = 111;
    p[165] = 0;
    p[163] = 0;
    return 1;
C6:
    *(u16 *)(p + 234) = param_2 + 46;
    p[168] = 0;
    *(u16 *)(p + 274) = 0;
    *(u16 *)(p + 240) = 111;
    p[165] = 0;
    p[163] = 0;
    return 1;
C7:
    *(u16 *)(p + 234) = param_2 + 61;
    p[168] = 0;
    *(u16 *)(p + 274) = 0;
    *(u16 *)(p + 240) = 111;
    p[165] = 0;
    p[163] = 0;
    return 1;
C8:
    *(u16 *)(p + 234) = param_2 + 16;
    p[168] = 0;
    *(u16 *)(p + 274) = 0;
    *(u16 *)(p + 240) = 111;
    p[165] = 0;
    p[163] = 0;
    return 1;
C10:
    row = p[0xa5];
    t = data_0213c00c[row][param_2];
    if (t != -1) {
        *(s16 *)(p + 234) = (s16)t;
        t = 1;
    } else {
        t = 0;
    }
    if (t != 0) {
        return 1;
    }
    p[168] = 0;
    *(u16 *)(p + 274) = 0;
    *(u16 *)(p + 240) = 111;
    p[165] = 0;
    p[163] = 0;
    return 1;
C11:
    row = p[0xa5];
    t = data_0213bc5c[row][param_2];
    *(u16 *)(p + 234) = (u16)t;
    return 1;
DEF:
    iw = *(s16 *)(p + 240);
    {
        fl = 0;
        if (iw > 12) {
            fl = (iw < 111) ? 1 : fl;
        }
        if (fl != 0) {
            return func_0202dc50(p, 0, param_2, (u16)(iw - 12), p[0xa5], 1);
        }
    }
    p[168] = 0;
    *(u16 *)(p + 274) = 0;
    *(u16 *)(p + 240) = 111;
    p[165] = 0;
    p[163] = 0;
    return 0;
}
