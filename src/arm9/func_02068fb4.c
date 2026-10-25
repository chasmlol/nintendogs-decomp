#include "ctx.h"

typedef struct { u16 lcdc, bg, obj, bgExtPltt, objExtPltt, tex, clrImg; } VRamState;

extern VRamState data_02150e30;
extern void func_020699dc(u32 lcdc);

#define reg_GX_VRAMCNT_A (*(vu8 *)0x04000240)
#define reg_GX_VRAMCNT_B (*(vu8 *)0x04000241)
#define reg_GX_VRAMCNT_C (*(vu8 *)0x04000242)
#define reg_GX_VRAMCNT_D (*(vu8 *)0x04000243)
#define reg_G3X_DISP3DCNT (*(vu16 *)0x04000060)

void func_02068fb4(s32 clrImg)
{
    data_02150e30.lcdc = (u16)(~clrImg & (data_02150e30.lcdc | data_02150e30.clrImg));
    data_02150e30.clrImg = (u16)clrImg;

    switch (clrImg) {
    case 3:
        reg_GX_VRAMCNT_A = 0x93;
    case 2:
        reg_GX_VRAMCNT_B = 0x9b;
        reg_G3X_DISP3DCNT |= 0x4000;
        break;
    case 12:
        reg_GX_VRAMCNT_C = 0x93;
    case 8:
        reg_GX_VRAMCNT_D = 0x9b;
        reg_G3X_DISP3DCNT |= 0x4000;
        break;
    case 0:
        reg_G3X_DISP3DCNT &= ~0x4000;
        break;
    case 1:
        reg_GX_VRAMCNT_A = 0x9b;
        reg_G3X_DISP3DCNT |= 0x4000;
        break;
    case 4:
        reg_GX_VRAMCNT_C = 0x9b;
        reg_G3X_DISP3DCNT |= 0x4000;
        break;
    default:
        break;
    }
    func_020699dc(data_02150e30.lcdc);
}
