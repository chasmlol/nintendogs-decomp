#include "ctx.h"

extern u8 data_02144b2c[];
extern u8 data_02144b40[];
extern u8 data_02132eb4[];

extern void func_020bdd1c(u8 *p, s32 a);
extern u32 func_020038b8(u8 *p, u32 v);
extern u32 func_020f1300(u32 a);
extern void func_0205f050(u8 *d, u32 n, u8 *s, u32 a, ...);
extern u32 func_0207df48(u8 *s);
extern s32 func_020785bc(u32 a, u32 b);
extern void func_0208fa4c(u8 *p, u8 *p2, u32 a);
extern s32 func_02078224(u32 a, u8 *b);
extern void func_0208f884(u8 *p, u32 a, s16 b);
extern s32 func_0208e690(u8 *a, u32 b);
extern void func_020f125c(s32 a, u8 *p);
extern void func_020e3650(void);
extern void func_020e2acc(void);
extern void func_020e3878(void);

void func_020e3884(u8 *p, u8 *p2)
{
    u32 *piv;
    u32 iv2;
    u8 buf[64];
    s32 t;

    func_020bdd1c(p, 75);
    *(u32 *)(p + 500) = (u32)func_020e3650;
    *(u32 *)(p + 0x1f8) = (u32)func_020e2acc;
    *(u32 *)(p + 0x1f0) = (u32)func_020e3878;
    *(u32 *)(p + 0x214) = func_020038b8(p2, 176);
    piv = *(u32 **)(p + 0x214);
    piv[0] = func_020f1300(32);
    func_0205f050(buf, 64, data_02144b2c, *(u32 *)(p + 0x1ec));
    piv[0x2a] = func_020785bc(func_0207df48(buf), 0);
    func_0205f050(buf, 64, data_02144b40, *(u32 *)(p + 0x1ec));
    piv[0x2b] = func_020785bc(func_0207df48(buf), 0);
    func_0208fa4c(p, p2, 2);
    iv2 = func_02078224(*(u32 *)(*(u8 **)(p + 0x1c) + 8) + 0x40, data_02132eb4);
    func_0208f884(p, 1, (s16)iv2);
    t = func_0208e690(*(u8 **)(p + 0x74), piv[0x2a]);
    t = func_0208e690(*(u8 **)(p + 0x74) + 36, piv[0x2b]);
    piv[0x28] = (u32)(*(u8 **)(p + 0x74) + 20);
    piv[0x29] = (u32)(*(u8 **)(p + 0x74) + 36) + 20;
    piv[2] = (u32)((s32)*(s16 *)((u8 *)piv[0x29] + 4) << 12);
    func_020f125c(32, p);
}
