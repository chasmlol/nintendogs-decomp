#include "ctx.h"

extern void func_0206bec0(u8 *p, u32 a, u32 b, u32 c);
extern void func_0206c068(u8 *p);
extern void func_0207eccc(u8 *p, void *cb, u32 a);
extern void func_01ffdc44(u8 *p, u32 a, u32 b, u32 c);

void func_0206c0d8(u8 *p1, u32 p2, u32 p3, u32 p4, void (*p5)(u32), u32 p6)
{
    func_0206bec0(p1, p2, p4, 0);
    if (p4 == 0) {
        if (p5 == 0) {
            return;
        }
        p5(p6);
        return;
    }
    func_0206c068(p1);
    if (p5 != 0) {
        func_0207eccc(p1, p5, p6);
        func_01ffdc44(p1, p2, p3, (p4 >> 2) | 0xc4000000);
        return;
    }
    func_01ffdc44(p1, p2, p3, (p4 >> 2) | 0x84000000);
}
