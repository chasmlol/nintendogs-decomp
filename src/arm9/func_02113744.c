#include "ctx.h"

extern u32 data_02148b2c;
extern u32 data_02148b3c;
extern void func_02068368(int a);
extern void func_020fc594(int a, int b, int c);
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_02113744(u32 *param_1)
{
    vu16 *pb;
    vu16 *pa;

    func_02068368(0);
    *(vu16 *)0x0400100a = (*(vu16 *)0x0400100a & 0x43) | 0x504;
    *(vu16 *)0x0400100c = (*(vu16 *)0x0400100c & 0x43) | 0x604;
    *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & 0x43) | 0x708;
    func_020fc594(2, 2, 0);
    func_020fc594(2, 4, 1);
    func_020fc594(2, 0x10, 1);
    *(vu16 *)0x04001040 = 255;
    *(vu16 *)0x04001044 = 191;
    *(vu16 *)0x04001042 = 255;
    *(vu16 *)0x04001046 = 191;
    *(vu32 *)0x04001014 = 0;
    *(vu32 *)0x04001018 = 0;
    pa = (vu16 *)0x0400100a;
    pb = (vu16 *)0x0400100c;
    *pa = *pa & ~0x40;
    *pb = *pb & ~0x40;
    *pa = (*pa & ~3) | 2;
    *pb = (*pb & ~3) | 3;
    func_0207c910(31, 0, param_1[3], 448);
    func_0207c910(*(u32 *)((u8 *)&data_02148b2c + 8), 0, param_1[2], 0x8000);
    func_0207c910(*(u32 *)((u8 *)&data_02148b3c + 8), 0, param_1[6], 0x800);
    param_1[0] = 0;
}
