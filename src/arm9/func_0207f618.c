#include "ctx.h"

extern void *data_02155d0c[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32);
extern s32 func_0207f950(void);
extern void func_0207f8e8(u32 *);
extern void func_0207f980(u32 *, s32, u32);
extern void func_0206c7f0(u32, u8 *, u32);
extern void func_0207f5bc(void);

void func_0207f618(u32 *p, s32 a, u32 b, u32 c, s32 d, u32 e)
{
    s32 i;
    u32 h;
    u32 s;

    h = func_02080b08();
    i = func_0207f950();
    if (i < 0) {
        func_02080b1c(h);
        return;
    }
    p[0x1c] = e;
    p[0x1b] = i;
    p[0x19] = 0;
    p[0x1d] = 0;
    data_02155d0c[i] = p;
    func_0207f8e8(p);
    p[0x22] = c;
    s = c - d;
    p[0x21] = s;
    p[0x23] = 0;
    *(u32 *)(p[0x22] - 4) = 0xfddb597d;
    *(u32 *)p[0x21] = 0x7bf9dd5b;
    *(u16 *)(p + 0x24) = 0;
    func_0207f980(p, a, c - 4);
    p[1] = b;
    p[0xf] = (u32)func_0207f5bc;
    {
        volatile u32 z = 0;
        func_0206c7f0(z, (u8 *)(s + 4), d - 8);
    }
    p[0x1e] = 0;
    p[0x1f] = 0;
    p[0x20] = 0;
    func_02080b1c(h);
}
