#include "ctx.h"

extern u8 *data_02159464;
extern u32 func_020cedd0(u8 *p, int n);
extern u32 func_020ce7e0(u8 *p, int n);
extern u32 func_020cfcf8(u8 *p, int n);
extern u32 func_020ceb00(u8 *p, int n);
extern u32 func_020d2720(u8 *p, int n);
extern u32 func_020d2840(u8 *p, int n);
extern u32 func_020d35d0(u8 *p, int n);
extern u32 func_020d91ac(u8 *p, int n);
extern u32 func_020d8188(u8 *p, int n);
extern u32 func_020d9168(u8 *p, int n);
extern u32 func_020d82c0(u8 *p, int n);

u32 func_020bb8b8(void)
{
    u8 *iVar4;
    u32 uVar3;

    iVar4 = data_02159464;
    uVar3 = (u32)*(s16 *)(iVar4 + 0x84);
    switch (uVar3) {
    case 0:
        break;
    case 1:
        return func_020cedd0(iVar4 + 136, 4);
    case 2:
        return func_020ce7e0(iVar4 + 256, 4);
    case 3:
        return func_020cfcf8(iVar4 + 264, 4);
    case 4:
        return func_020ceb00(iVar4 + 324, 4);
    case 5:
        return func_020d2720(iVar4 + 436, 4);
    case 6:
        return func_020d2840(iVar4 + 496, 4);
    case 7:
        return func_020d35d0(iVar4 + 540, 4);
    case 8:
        return func_020d91ac(iVar4 + 636, 4);
    case 9:
        return func_020d8188(iVar4 + 708, 4);
    case 10:
        return func_020d9168(iVar4 + 752, 4);
    case 11:
        return func_020d82c0(iVar4 + 792, 4);
    }
    return uVar3;
}
