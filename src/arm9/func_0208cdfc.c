#include "ctx.h"

extern u32 data_0213ecf4;
extern u32 data_0213ecfc;
extern u32 data_0213ed08[];
extern u32 data_0213ed14[];
extern u32 data_0213ed24[];

typedef struct { u8 b16[16]; u8 b64[64]; } Fr;

extern void func_02087fcc(u8 *p);
extern void func_0207dfcc(u32 a, u32 b, u32 c);
extern void func_0208beec(u8 *a, u32 b, u32 c, u32 d);
extern void func_0205f050(u8 *a, u32 b, u32 *c, u32 d, u8 *e);
extern u32 func_0207df48(u8 *buf);
extern void func_0208f28c(u8 *p, u32 a);
extern u32 func_02006b78(u32 v);
extern void func_0207df9c(u32 a);

void func_0208cdfc(u8 *p1)
{
    Fr F;
    u32 uVar4;
    u32 iv;

    {
        u32 fl = (*(u32 *)(p1 + 0x10) & 1) != 0;
        if (fl) {
            return;
        }
    }
    {
        u32 t84 = *(u32 *)(p1 + 0x84);
        iv = t84 + 0x60;
    }
    func_02087fcc(p1 + 4);
    func_0207dfcc(*(u32 *)(p1 + 0x84), data_0213ecf4, iv);
    func_0208beec(F.b16, 16, *(u16 *)(p1 + 122), *(u16 *)(p1 + 124));
    func_0205f050(F.b64, 64, (u32 *)&data_0213ecfc, data_0213ecf4, F.b16);
    iv = func_0207df48(F.b64);
    func_0208f28c(p1 + 152, iv);
    func_0205f050(F.b64, 64, data_0213ed08, data_0213ecf4, F.b16);
    *(u32 *)(p1 + 0x88) = func_0207df48(F.b64);
    func_0205f050(F.b64, 64, data_0213ed14, data_0213ecf4, F.b16);
    *(u32 *)(p1 + 0x8c) = func_0207df48(F.b64);
    func_0205f050(F.b64, 64, data_0213ed24, data_0213ecf4, F.b16);
    *(u32 *)(p1 + 0x90) = func_02006b78(func_0207df48(F.b64));
    func_0207df9c(*(u32 *)(p1 + 0x84));
    *(u32 *)(p1 + 0x84) = 0;
    *(u32 *)(p1 + 0xb4) = 0;
    *(u32 *)(p1 + 0xbc) = 0;
    *(u16 *)p1 = 3;
    *(u16 *)(p1 + 2) = *(u16 *)(p1 + 2) | 1;
}
