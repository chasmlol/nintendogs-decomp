#include "ctx.h"

extern u32 func_0207d2a4(u32 *p, u32 a);
extern u32 func_0207dc94(u32 *p, u32 a);
extern u32 func_0207d51c(u32 *p, u32 a, u32 b);
extern u32 func_0207dd14(u32 *p, u32 a, u32 b);
extern void func_0207d56c(u32 a, u32 b, u32 c);

void func_0200361c(u32 *p)
{
    u32 r4;
    u32 r;

    r4 = 0;
    switch (p[0]) {
    case 0x45585048:
        r4 = func_0207d2a4(p, 4);
        break;
    case 0x46524d48:
        r4 = func_0207dc94(p, 4);
        break;
    }
    r = 0;
    switch (p[0]) {
    case 0x45585048:
        r = func_0207d51c(p, r4, 4);
        break;
    case 0x46524d48:
        r = func_0207dd14(p, r4, 4);
        break;
    }
    func_0207d56c(r, r4, 1);
}
