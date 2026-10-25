#include "ctx.h"

extern u8 *data_ov028_0215df14;
extern u32 data_ov028_0215de84[];
extern void func_ov028_0215cefc(void);
extern void func_ov028_0215dd68(u8 *p, u32 *a);
extern u32 func_020038b8(u8 *p, u32 n);
extern u32 func_02003860(u8 *p, u32 a, u32 b);
extern void func_02006700(u32 a, u32 b);

void func_ov028_0215cde8(u8 *p, u32 p2, u32 p3)
{
    s32 i;
    u32 za;
    u32 zb;
    u32 uVar8;
    u32 uVar6;
    u32 t;
    u32 q3;

    q3 = p3;
    func_ov028_0215dd68(p, data_ov028_0215de84);
    t = func_020038b8(p, 0x120);
    data_ov028_0215df14 = (u8 *)t;
    *(u32 *)(data_ov028_0215df14 + 0x11c) = p2;
    i = 0;
    *(u32 *)(data_ov028_0215df14 + 0x110) = q3;
    *(u16 *)((u8 *)data_ov028_0215df14 + 256 + 6) = 1;
    *(u32 *)(data_ov028_0215df14 + 0x114) = 0;
    *(u32 *)(data_ov028_0215df14 + 0x118) = 0;
    za = i;
    zb = i;
    do {
        *(u32 *)(data_ov028_0215df14 + (u32)i * 4 + 0x3c) = za;
        t = func_020038b8(p, 40);
        *(u32 *)(data_ov028_0215df14 + (u32)i * 4 + 0x7c) = t;
        uVar8 = zb;
        uVar6 = ((*(u32 *)(data_ov028_0215df14 + 0x110) + 17) / 18u + 31) & ~3u;
        if (uVar6 != 0) {
            uVar8 = uVar6;
        }
        t = func_020038b8(p, uVar8);
        *(u32 *)(data_ov028_0215df14 + ((u32)i << 2) + 0xbc) = t;
        i = i + 1;
    } while (i < 9);
    t = func_02003860(p, 0x80, 0x20);
    *(u32 *)(data_ov028_0215df14 + 0x38) = t;
    func_02006700(11, (u32)func_ov028_0215cefc);
}
