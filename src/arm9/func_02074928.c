#include "ctx.h"

extern u32 data_02152cd8[];
extern u32 data_02152d24[];
extern u32 data_02152ce0[];
extern u32 data_02152d94[];
extern void func_02066b80(u32 *p);
extern void func_020673a4(u32 *p);
extern void func_020663d0(u32 *p);

void func_02074928(void)
{
    u32 zz = 0;
    {
        u32 ka = 0x17101610;
        u32 *b = data_02152cd8;
        u32 kb = 0x32323232;
        u32 kc = 0x60293130;
        u32 kd = 0x33333333;
        u32 ke = 0x002a1b19;
        u32 tw = 2;
        b[0] = ka;
        b[1] = zz;
        b[0x12] = tw;
        b[0x1f] = kb;
        b[0x24] = kc;
        b[0x29] = kd;
        b[0x2e] = ke;
    }
    func_02066b80(data_02152d24);
    func_020673a4(data_02152ce0);
    {
        u32 *b = data_02152cd8;
        u32 kf = 0x4210c210;
        u32 kg = 0x40000200;
        u32 kh = 0x2d8b62d8;
        u32 ki = 0x800001ff;
        u32 kj = 0xc0080000;
        u32 kk = 0x001f008f;
        u32 kl = 0xbfff0000;
        u32 km = 0x00007fff;
        u32 kn = 0x800003e0;
        u32 ko = 0xc0007c00;
        b[0x20] = kh;
        b[0x21] = kg;
        b[0x22] = ki;
        b[0x23] = kj;
        b[0x25] = kf;
        b[0x26] = kf;
        b[0x27] = kk;
        b[0x28] = kl;
        b[0x2a] = km;
        b[0x2b] = 0x4000001f;
        b[0x2c] = kn;
        b[0x2d] = ko;
        b[0x38] = zz;
        b[0x39] = zz;
        b[0x3a] = zz;
    }
    func_020663d0(data_02152d94);
    {
        u32 *b = data_02152cd8;
        b[0x3b] = 0x1000;
        b[0x3c] = 0x1000;
        b[0x3d] = 0x1000;
        b[0x3e] = zz;
        b[0x3f] = zz;
        b[0x92] = zz;
        b[0x91] = zz;
        b[0x90] = zz;
        b[0x95] = zz;
        b[0x93] = zz;
        b[0x94] = 0x1000;
        b[0x97] = zz;
        b[0x96] = zz;
        b[0x98] = 0xfffff000;
    }
}
