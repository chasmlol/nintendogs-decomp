#include "ctx.h"

extern u8 data_0214f004[];
extern u8 data_0214efdc[];

extern s32 func_020bbdc0(u8 *p);
extern void func_020bbddc(void);
extern void func_020a0d04(s32 a, s32 b);
extern void func_020a1a40(s32 a);
extern void func_020afc84(u8 *p);
extern void func_02108de8(void);
extern void func_020bbdf8(void);
extern void func_020aa128(s32 a);

void func_020afa48(u8 *p)
{
    s32 st;

    st = *(u16 *)(p + 4);
    if (st > 256) goto big;
    if (st >= 256) goto s256;
    if (st > 1) return;
    if (st < 0) return;
    if (st == 0) goto s0;
    if (st == 1) return;
    return;
big:
    switch (st) {
    case 0x101: goto c0;
    case 0x102: goto c1;
    case 0x103: goto c2;
    case 0x104: goto c3;
    case 0x105: goto c4;
    case 0x106: goto c5;
    default: goto fin;
    }
s0:
    *(s16 *)(p + 6) = *(s16 *)(p + 6) + 1;
    if (*(s16 *)(p + 6) >= 2) {
        *(s16 *)(p + 4) = 256;
        *(s16 *)(p + 6) = 0;
    }
    return;
s256:
    if (func_020bbdc0(p) != 0) {
        *(s16 *)(p + 4) = 0x101;
        *(s16 *)(p + 6) = 0;
        return;
    }
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0 && (u16)(*(u16 *)data_0214efdc & 0xc03) == 0) {
        return;
    }
    func_020bbddc();
    func_020a0d04(4, 30);
    func_020a1a40(82);
    return;
c0:
    *(s16 *)(p + 6) = *(s16 *)(p + 6) + 1;
    if (*(s16 *)(p + 6) < 4) return;
    *(s16 *)(p + 4) = 0x102;
    *(s16 *)(p + 6) = 0;
    func_020aa128(1);
    return;
c1:
    *(s16 *)(p + 6) = *(s16 *)(p + 6) + 1;
    if (*(s16 *)(p + 6) < 2) return;
    *(s16 *)(p + 4) = 0x103;
    *(s16 *)(p + 6) = 0;
    func_02108de8();
    return;
c2:
    func_020afc84(p);
    return;
c3:
    *(s16 *)(p + 6) = *(s16 *)(p + 6) + 1;
    if (*(s16 *)(p + 6) < 90) return;
    *(s16 *)(p + 4) = 0x105;
    *(s16 *)(p + 6) = 0;
    func_020bbdf8();
    return;
c4:
    *(s16 *)(p + 6) = *(s16 *)(p + 6) + 1;
    *(s16 *)(p + 4) = 0x106;
    *(s16 *)(p + 6) = 0;
    return;
c5:
    *(s16 *)(p + 6) = *(s16 *)(p + 6) + 1;
    if (*(s16 *)(p + 6) >= 30) {
        *(s16 *)(p + 4) = 1;
        *(s32 *)(p + 0xc) = 1;
        *(s32 *)(p + 0x18) = 19;
    }
    return;
fin:
    return;
}
