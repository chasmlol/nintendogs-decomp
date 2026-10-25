#include "ctx.h"

extern u32 data_ov007_02160ba0;
extern u32 data_ov007_02160e5c;

extern u32 func_ov007_0215f238();
extern void func_0210b614();
extern u32 func_02093790();
extern u32 func_02093e04();

typedef struct {
    u32 w[4];
} T16;

#define GP() (*(u8 **)&data_ov007_02160e5c)

void func_ov007_0215f774(void)
{
    u32 blk[4];
    u8 *P;
    s32 i;
    s32 x;
    s32 m;
    u32 r;

    *(T16 *)blk = *(T16 *)&data_ov007_02160ba0;
    P = GP();
    *(s32 *)P = *(s32 *)P + 1;
    P = GP();
    if (*(s32 *)P > 30000) {
        *(s32 *)P = 0;
    }
    P = GP();
    *(u16 *)((u8 *)blk + 6) = *(s16 *)(P + 12);
    *(u16 *)((u8 *)blk + 8) = *(s16 *)(P + 14);
    r = func_ov007_0215f238();
    func_0210b614(*(u32 *)(P + 0x60), *(u32 *)(P + 0x64), r, blk, 0, 0);

    P = GP();
    *(u16 *)((u8 *)blk + 6) = *(s16 *)(P + 16);
    *(u16 *)((u8 *)blk + 8) = *(s16 *)(P + 18);
    r = func_ov007_0215f238();
    x = *(s32 *)P;
    m = ((x / 9) % 3) + 2;
    func_0210b614(*(u32 *)(P + 0x60), *(u32 *)(P + 0x64), r, blk, 0, m);

    P = GP();
    *(u16 *)((u8 *)blk + 6) = *(s16 *)(P + 20);
    *(u16 *)((u8 *)blk + 8) = *(s16 *)(P + 22);
    r = func_ov007_0215f238();
    func_0210b614(*(u32 *)(P + 0x60), *(u32 *)(P + 0x64), r, blk, 0, 1);

    r = func_02093790();
    P = GP();
    *(u32 *)(P + 4) = r;
    P = GP();
    if (*(s32 *)(P + 4) < 0) {
        *(s32 *)(P + 4) = 0;
    }
    P = GP();
    if (*(s32 *)(P + 4) > 99999999) {
        *(s32 *)(P + 4) = 99999999;
    }
    x = *(s32 *)(GP() + 4);
    i = 0;
    do {
        P = GP();
        m = x % 10;
        x = x / 10;
        *(u16 *)((u8 *)blk + 6) = *(s16 *)(P + ((u32)i << 2) + 0x38);
        *(u16 *)((u8 *)blk + 8) = *(s16 *)(P + ((u32)i << 2) + 0x3a);
        if (i < 7) {
            r = func_ov007_0215f238();
            func_0210b614(*(u32 *)(P + 0x60), *(u32 *)(P + 0x64), r, blk, 0, m + 21);
        }
        i++;
    } while (i < 8);

    P = GP();
    *(u16 *)((u8 *)blk + 6) = *(s16 *)(P + 88);
    *(u16 *)((u8 *)blk + 8) = *(s16 *)(P + 90);
    if (func_02093e04() == 0) {
        P = GP();
        r = func_ov007_0215f238();
        func_0210b614(*(u32 *)(P + 0x60), *(u32 *)(P + 0x64), r, blk, 0, 0x1f);
        return;
    }
    P = GP();
    r = func_ov007_0215f238();
    func_0210b614(*(u32 *)(P + 0x60), *(u32 *)(P + 0x64), r, blk, 0, 0x20);
}
