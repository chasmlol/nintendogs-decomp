#include "ctx.h"

extern u8 *data_02159424;

extern void func_020fbf30(u8 *a, u32 b);
extern void func_02117ac8(u8 *a, u32 b);
extern s32 func_0210a554(void);
extern void func_02117d8c(u8 *a);
extern s32 func_02112e14(s32 a);
extern void func_02101be4(u32 a, u32 b);
extern void func_02101118(u32 a, s32 b, u32 c, u32 d, u32 e);
extern void func_02117e4c(u8 *a);
extern void func_021183f8(u32 a, u8 *b);
extern void func_020fc594(u32 a, u32 b, u32 c);

void func_021180b0(u8 *p)
{
    s32 iVar1;
    s32 r6;
    u8 *r4;
    s32 t;

    r4 = p + 336;
    t = *(s16 *)(*(u8 **)(data_02159424 + 4) + 2);
    *(u32 *)(p + 0x30) = (u32)(u16)((t + 59) / 60);
    func_020fbf30(p + 8, *(u32 *)(p + 0x30));
    func_02117ac8(p + 64, 1);
    func_02117ac8(p + 96, 1);
    iVar1 = func_0210a554();
    if (iVar1 == 4) {
        func_02117d8c(p + 64);
        func_02117d8c(p + 96);
    } else if (*(u32 *)(r4 + 0x20) != 0) {
        r6 = func_02112e14(0);
        func_02101be4(*(u32 *)(p + 0x34), 0);
        func_02101118(1, r6, 4, 0, *(u32 *)(r4 + 0x1c));
        *(u32 *)(r4 + 0x20) = 0;
        func_02117e4c(p + 64);
        func_02117e4c(p + 96);
    }
    func_021183f8(0, p);
    if (*(s32 *)(p + 0x3c) <= 0) {
        return;
    }
    *(s32 *)(p + 0x3c) = *(s32 *)(p + 0x3c) - 1;
    if (*(s32 *)(p + 0x3c) == 117) {
        func_020fc594(0, 4, 1);
        return;
    }
    if (*(s32 *)(p + 0x3c) == 0) {
        func_020fc594(0, 4, 0);
        return;
    }
}
