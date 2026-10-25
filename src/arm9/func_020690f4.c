#include "ctx.h"

typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
} GXVRamMgr;

extern GXVRamMgr data_02150e30;
extern void func_020699dc(int lcdc);

#define reg_GX_VRAMCNT_E (*(vu8 *)0x04000244)
#define reg_GX_VRAMCNT_F (*(vu8 *)0x04000245)
#define reg_GX_VRAMCNT_G (*(vu8 *)0x04000246)

void func_020690f4(int texPltt)
{
    data_02150e30.lcdc = (u16)(~texPltt & (data_02150e30.lcdc | data_02150e30.texPltt));
    data_02150e30.texPltt = (u16)texPltt;

    switch (texPltt) {
    case 64:
        reg_GX_VRAMCNT_G = 0x83;
        break;
    case 96:
        reg_GX_VRAMCNT_G = 0x8b;
    case 32:
        reg_GX_VRAMCNT_F = 0x83;
        break;
    case 112:
        reg_GX_VRAMCNT_G = 0x9b;
    case 48:
        reg_GX_VRAMCNT_F = 0x93;
    case 16:
        reg_GX_VRAMCNT_E = 0x83;
        break;
    case 0:
        break;
    default:
        break;
    }
    func_020699dc(data_02150e30.lcdc);
}
