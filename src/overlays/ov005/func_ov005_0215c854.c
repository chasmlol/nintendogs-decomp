#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;

extern s32 func_ov005_0215dbec(u8 *p, s32 a);
extern s32 func_02027f78(u8 *p, s32 a);
extern u16 func_02041f04(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

u32 func_ov005_0215c854(u8 *p, s32 p2)
{
    s32 bVar1;
    s32 iv3;
    u32 iv4;
    s32 t;
    u16 u;

    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(p + 0x11a) = *(u16 *)(p + 0x11a) + 1;
    } else {
        *(u16 *)(p + 0x11a) = 0;
    }
    *(u16 *)(p + 0x11c) = 1;
    *(u16 *)(p + 0x11e) = 0;
    if (func_ov005_0215dbec(p, 0) != 0) {
        return 1;
    }
    if (p2 == 0) {
        goto Lz0;
    }
    iv3 = *(s16 *)(data_02159444 + 0x7a);
    if (iv3 < 0 || *(s16 *)(data_02159468 + 0x20) <= iv3) {
        iv4 = 0;
    } else {
        iv4 = *(u32 *)(data_02159468 + iv3 * 4 + 4);
    }
    if (iv4 != 0 && *(s16 *)(iv4 + 0x96) == 9 && *(s16 *)(iv4 + 0x90) == 3) {
        bVar1 = 1;
    } else {
        bVar1 = 0;
    }
    if (bVar1) {
        goto flag;
    }
    if (iv3 < 0 || *(s16 *)(data_02159468 + 0x20) <= iv3) {
        iv4 = 0;
    } else {
        iv4 = *(u32 *)(data_02159468 + iv3 * 4 + 4);
    }
    if (iv4 != 0 && *(s16 *)(iv4 + 0x96) == 10) {
        bVar1 = 1;
    } else {
        bVar1 = 0;
    }
    if (bVar1 == 0) {
        goto nf;
    }
flag:
    if (*(s8 *)(p + 0x8b) != 2) {
        goto nf;
    }
    t = func_02027f78(p, 5);
    u = func_02041f04(p);
    if (t > (s32)u) {
        func_0203e908(p, 0x440);
        bVar1 = 1;
        goto join;
    }
nf:
    bVar1 = 0;
join:
    if (bVar1) {
        goto Lz0;
    }
    func_0203e908(p, 0x43d);
    return 1;
Lz0:
    return 0;
}
