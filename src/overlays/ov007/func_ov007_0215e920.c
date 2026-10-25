#include "ctx.h"

extern s32 func_ov007_0215dab4(void);
extern void func_ov007_0215d980(u32 a, u32 b);
extern void func_ov007_0215d8e0(u32 a, u32 b);
extern u32 func_ov007_0215daa8(void);
extern void func_ov007_0215e654(void);
extern u32 data_ov007_02160d9c;
extern u8 data_ov007_02160ac8[];
extern void func_0206f878(u32 a);
extern void func_0206f2bc(void);
extern void func_0206f448(u32 a, u32 b, u32 c);
extern void func_0206f380(u32 a);
extern u32 func_0206f284(u32 a, u32 b);
extern u32 func_0206f1ec(u32 a, u32 b);
extern void func_0206fa0c(u8 *a, u32 b, u32 c, s32 d, s32 e, s32 f);
extern void func_0206fc00(u32 a);

void func_ov007_0215e920(u16 *p1)
{
    s32 iv6;
    s32 s5;
    s32 i;
    u32 u7;
    u16 hv;

    iv6 = func_ov007_0215dab4();
    s5 = p1[0];
    if (s5 > 1) {
        goto Lsw;
    }
    if (s5 == 1) {
        goto Lone;
    }
    return;
Lsw:
    switch (s5) {
    case 8:
        if (iv6 != 2) {
            return;
        }
        func_0206f448(0x200, 0x200, (u32)func_ov007_0215e654);
        *(u16 *)(*(u8 **)&data_ov007_02160d9c + 0x10a) = 2;
        *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x10c) = 0;
        *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x110) = 0;
        for (i = 0; i < 16; i++) {
            ((u32 *)(*(u8 **)&data_ov007_02160d9c + 0x40))[i] = 0;
        }
        *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x44) = *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x120);
        func_0206fa0c(*(u8 **)&data_ov007_02160d9c + 8, 0x438, (u32)data_ov007_02160ac8,
                      *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x118),
                      *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x11c), 0);
        if (p1[4] != 7) {
            return;
        }
        hv = (u16)func_0206f284(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), 0x200);
        func_ov007_0215d980(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), hv);
        return;
    case 12:
        func_0206f380((u32)func_ov007_0215e654);
        *(u16 *)(*(u8 **)&data_ov007_02160d9c + 0x10a) = 1;
        *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x10c) = 0;
        *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x110) = 0;
        for (i = 0; i < 16; i++) {
            ((u32 *)(*(u8 **)&data_ov007_02160d9c + 0x40))[i] = 0;
        }
        *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x40) = *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x120);
        func_0206fa0c(*(u8 **)&data_ov007_02160d9c + 8, 0x438, (u32)data_ov007_02160ac8,
                      *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x118),
                      *(s32 *)(*(u8 **)&data_ov007_02160d9c + 0x11c), 0);
        u7 = func_ov007_0215daa8();
        func_0206fc00(u7);
        return;
    case 9:
    case 10:
    case 11:
    case 13:
        goto Lret;
    case 14:
        goto Ltail;
    case 15:
        goto Lc15;
    default:
        goto Lret;
    }
Lone:
    func_0206f878(0xffff);
    func_0206f2bc();
    *(s32 *)(*(u8 **)&data_ov007_02160d9c + 4) = 0;
Ltail:
    if (p1[2] != 10) {
        return;
    }
    if (iv6 == 2) {
        hv = (u16)func_0206f284(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), 0x200);
        func_ov007_0215d980(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), hv);
        return;
    }
    if (iv6 != 3) {
        return;
    }
    hv = (u16)func_0206f1ec(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), 0x200);
    func_ov007_0215d8e0(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), hv);
    return;
Lc15:
    if (iv6 == 2) {
        hv = (u16)func_0206f284(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), 0x200);
        func_ov007_0215d980(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), hv);
        return;
    }
    if (iv6 != 3) {
        return;
    }
    hv = (u16)func_0206f1ec(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), 0x200);
    func_ov007_0215d8e0(*(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x3c), hv);
Lret:
    return;
}
