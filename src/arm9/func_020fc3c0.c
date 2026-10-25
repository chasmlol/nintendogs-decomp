#include "ctx.h"

extern u8 data_021476f0[];
extern u8 data_02147708[];
extern u8 data_02147720[];
extern u8 data_02147730[];
extern u8 data_02147740[];
extern u8 data_02147760[];
extern u8 data_0214776c[];
extern u8 data_02147784[];
extern u8 data_0214778c[];
extern u8 data_02147794[];
extern u8 data_0214779c[];
extern u8 data_021477b4[];
extern u8 data_021477c8[];
extern u8 data_021477dc[];
extern u8 data_021477e8[];
extern u8 data_021477f0[];
extern u8 data_02147804[];
extern u8 data_0214780c[];

u32 func_020fc3c0(u32 param_1)
{
    u32 r = (u32)data_021476f0;
    switch (param_1) {
    case 0x30000: r = (u32)data_02147708; break;
    case 0x30002: r = (u32)data_02147720; break;
    case 0x30003: r = (u32)data_02147730; break;
    case 0x30004: r = (u32)data_02147740; break;
    case 0x30005: r = (u32)data_02147760; break;
    case 0x30006: r = (u32)data_0214776c; break;
    case 0x30008: r = (u32)data_02147784; break;
    case 0x30009: r = (u32)data_0214778c; break;
    case 0x3000b: r = (u32)data_02147794; break;
    case 0x3000d: r = (u32)data_0214779c; break;
    case 0x3000e: r = (u32)data_021477b4; break;
    case 0x3000f: r = (u32)data_021477c8; break;
    case 0x30010: r = (u32)data_021477dc; break;
    case 0x30011: r = (u32)data_021477e8; break;
    case 0x30012: r = (u32)data_021477f0; break;
    case 0x30013: r = (u32)data_02147804; break;
    case 0x30015: r = (u32)data_0214780c; break;
    default: break;
    }
    return r;
}
