#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02144a24[];
extern u8 data_02144a34[];
extern void func_020bdd1c(u8 *p, s32 a);
extern u32 func_020038b8(u8 *p, u32 n);
extern u32 func_020f1300(u32 a);
extern void func_020f125c(u32 a, u8 *p);
extern void func_0208fa4c(u8 *p, u8 *q, u32 a);
extern void func_0208fa04(u8 *p, u8 *q, u32 a);
extern void func_0205f050(u8 *dst, u32 n, u8 *src, u32 v);
extern s32 func_0207df48(u8 *p);
extern u32 func_020785bc(s32 a, u32 b);
extern void func_0208e690(u8 *p, u32 q);
extern void func_0208e468(u8 *p, u32 q);
extern void func_020dadd0(void);
extern void func_020da8a0(void);
extern void func_020daf48(void);

void func_020daf54(u8 *param_1, u8 *param_2)
{
    u8 buf1[64];
    u8 buf2[64];
    u8 *p1c;
    u32 *p5;
    u8 *p2c;
    u8 *p4;
    u32 z;
    u32 r;

    p2c = param_2;
    p1c = param_1;
    func_020bdd1c(param_1, 0x4d);
    *(u32 *)(p1c + 0x1f4) = (u32)func_020dadd0;
    *(u32 *)(p1c + 0x1f8) = (u32)func_020da8a0;
    *(u32 *)(p1c + 0x1f0) = (u32)func_020daf48;
    *(u32 *)(p1c + 0x214) = func_020038b8(p2c, 8);
    p5 = *(u32 **)(p1c + 0x214);
    *p5 = func_020f1300(0x1f);
    func_020f125c(0x1f, p1c);
    func_0208fa4c(p1c, p2c, 1);
    func_0205f050(buf1, 0x40, data_02144a24, *(u32 *)(p1c + 0x1ec));
    r = func_020785bc(func_0207df48(buf1), 0);
    p5 = *(u32 **)(p1c + 0x74);
    func_0208e690((u8 *)p5, r);
    z = 0;
    *((u8 *)p5 + 0x14) = (u8)z;
    p5[7] = z;
    p5[8] = z;
    func_0208fa04(p1c, p2c, 1);
    func_0205f050(buf2, 0x40, data_02144a34, *(u32 *)(p1c + 0x1ec));
    r = func_020785bc(func_0207df48(buf2), 0);
    p4 = *(u8 **)(p1c + 0x7c);
    func_0208e468(p4, r);
    z = 0;
    *p4 = (u8)z;
    *(u32 *)(p4 + 8) = z;
    *(u32 *)(p4 + 0xc) = z;
}
