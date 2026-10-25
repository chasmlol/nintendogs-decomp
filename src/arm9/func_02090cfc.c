#include "ctx.h"

void func_0208c9b4(u32 *p, u8 *q, u32 a, u32 b);

void func_02090cfc(u32 *p, u8 *q, u32 a, u32 b)
{
    u32 *e;
    u32 i;
    u32 tag;

    e = (u32 *)q;
    func_0208c9b4(p, q, a, b);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    e = e + 8;
    i = 0;
    if (i < *(u32 *)(q + 0xc)) {
        do {
            tag = *e;
            switch (tag) {
            case 0x31464e49:
                p[0] = (u32)e;
                p[1] = (u32)(e + 4);
                break;
            case 0x31544144:
                p[2] = (u32)(e + 2);
                break;
            case 0x3144494d:
                p[3] = (u32)e;
                p[4] = (u32)(e + 4);
                break;
            case 0x31574c46:
                p[5] = (u32)e;
                p[6] = (u32)(e + 4);
                p[7] = p[6] + (u32)*(u16 *)(p[5] + 8) * 8;
                break;
            case 0x31494c46:
                p[9] = (u32)e;
                p[10] = (u32)(e + 4);
                break;
            }
            i++;
            e = (u32 *)((u8 *)e + e[1]);
        } while (i < *(u32 *)(q + 0xc));
    }
}
