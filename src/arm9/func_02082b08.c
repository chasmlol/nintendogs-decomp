#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define GET_A(p1) (*(u8 **)((p1) + 0x34))
#define GET_B(p1) (*(u8 **)(GET_A(p1) + 0x18))
#define GET_C(p1) (*(u8 **)GET_B(p1))

typedef struct {
    u16 lo : 5;
    u16 mid : 5;
    u16 hi : 6;
} Attr16;

extern u8 data_02126868[];
extern u32 data_0213e844[];
extern u32 data_0213e83c[];

extern void func_02066c08(u32 *a, s32 b, s32 c, s32 d);
extern void func_02066cd4(s32 *a, u32 *b, u32 *c);
extern void func_0206a0c0(u32 x);
extern void func_0206a0a4(u32 *x);

u32 func_02082b08(u8 *p1, u8 *p2)
{
    u32 buf[36];
    u32 w30;
    u32 uVar6;
    u32 uVar7;
    u32 uVar4;
    s32 iv3;
    s32 k2;
    Attr16 *fp;
    u32 ret;

    fp = (Attr16 *)(p2 + 0x40);
    w30 = *(u32 *)(p1 + 0x30);
    iv3 = (s32)(fp->lo * (fp->mid + 1)) >> 5;
    *(vu32 *)0x040004a4 = (fp->hi << 24) | (w30 | 0xc0) | (iv3 << 16);
    ret = *(vu32 *)0x040004a4;
    if (iv3 == 0) {
        return ret;
    }
    iv3 = *(u16 *)(p2 + 0x36) >> 4;
    k2 = iv3 * 2;
    ((void (*)(s32, s32, u32 *))data_0213e844[((*(u32 *)GET_C(p1)) << 13) >> 30])(
        *(s16 *)(data_02126868 + k2 * 2),
        *(s16 *)(data_02126868 + (k2 + 1) * 2),
        buf + 12);
    uVar7 = *(u32 *)(p2 + 0x30);
    uVar4 = FX_Mul((s32)uVar7, *(s16 *)(GET_C(p1) + 0x30));
    uVar6 = (*(u32 *)(GET_C(p1) + 0x44) << 1) >> 29;
    switch (uVar6) {
    case 0:
        uVar6 = *(s16 *)(p2 + 0x34);
        uVar4 = FX_Mul((s32)uVar4, (s32)uVar6);
        uVar7 = FX_Mul((s32)uVar7, (s32)uVar6);
        break;
    case 1:
        uVar4 = FX_Mul((s32)uVar4, *(s16 *)(p2 + 0x34));
        break;
    case 2:
        uVar6 = *(s16 *)(p2 + 0x34);
        uVar7 = FX_Mul((s32)uVar7, (s32)uVar6);
        break;
    }
    func_02066c08(buf + 24, uVar4, uVar7, uVar7);
    func_02066cd4((s32 *)(buf + 24), buf + 12, buf);
    buf[9] = *(u32 *)(p2 + 0x14) + *(u32 *)(p2 + 8);
    buf[10] = *(u32 *)(p2 + 0x18) + *(u32 *)(p2 + 0xc);
    buf[11] = *(u32 *)(p2 + 0x1c) + *(u32 *)(p2 + 0x10);
    func_0206a0c0(*(u32 *)(p1 + 0x38));
    func_0206a0a4(buf);
    uVar4 = *(u16 *)(GET_A(p1) + 0x5a);
    uVar6 = *(u16 *)(p2 + 0x3a);
    *(vu32 *)0x04000480 = (u16)((((s32)((uVar6 & 0x1f) * (uVar4 & 0x1f))) >> 5)
        | ((((s32)((uVar6 & 0x3e0) * (uVar4 & 0x3e0))) >> 15) << 5)
        | ((((s32)((uVar6 & 0x7c00) * (uVar4 & 0x7c00))) >> 25) << 10));
    return ((u32 (*)(u8, u8))data_0213e83c[((*(u32 *)GET_C(p1)) << 12) >> 31])(
        (u8)((*(u32 *)(GET_C(p1) + 0x44) << 6) >> 30),
        (u8)((*(u32 *)(GET_C(p1) + 0x44) << 4) >> 30));
}
