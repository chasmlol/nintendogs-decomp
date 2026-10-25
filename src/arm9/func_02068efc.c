#include "ctx.h"

typedef struct { u16 lcdc; u16 bg; u16 obj; u16 bgExtPltt; } VRamState;

extern VRamState data_02150e30;
extern void func_020699dc(u32 lcdc);

#define reg_GX_VRAMCNT_F (*(vu8 *)0x04000242)
#define reg_GX_VRAMCNT_G (*(vu8 *)0x04000243)

void func_02068efc(s32 bgExtPltt)
{
    data_02150e30.lcdc = (u16)(~bgExtPltt & (data_02150e30.lcdc | data_02150e30.bgExtPltt));
    data_02150e30.bgExtPltt = (u16)bgExtPltt;

    switch (bgExtPltt) {
    case 12:
        reg_GX_VRAMCNT_G = 0x8a;
        reg_GX_VRAMCNT_F = 0x82;
        break;
    case 4:
        reg_GX_VRAMCNT_F = 0x82;
        break;
    case 0:
        break;
    case 8:
        reg_GX_VRAMCNT_G = 0x82;
        break;
    default:
        break;
    }
    func_020699dc(data_02150e30.lcdc);
}
