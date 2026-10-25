#include "ctx.h"

extern void func_020bdd1c(u8 *p, s32 a);
extern void func_020e6ef0(void);
extern void func_020e6194(void);
extern u32 func_020038b8(u8 *p, u32 v);

void func_020e6f78(u8 *p, u8 *p2, u32 p3)
{
    u8 *q;
    s16 s;

    func_020bdd1c(p, (s16)p3);
    *(u32 *)(p + 0x214) = func_020038b8(p2, 60);
    *(u32 *)(p + 0x1f4) = (u32)func_020e6ef0;
    *(u32 *)(p + 0x1f8) = (u32)func_020e6194;
    q = *(u8 **)(p + 0x214);
    *(u16 *)q = 0;
    *(u32 *)(q + 4) = 0;
    *(u32 *)(p + 0xb0) = 0;
    *(u32 *)(p + 0xb4) = 0;
    *(u32 *)(p + 0xb8) = 0;
    *(u32 *)(q + 8) = 0;
    *(u32 *)(q + 0x24) = 0;
    *(u32 *)(q + 0x34) = 0;
    s = *(s16 *)(p + 148);
    if (s == 64) {
        goto caseA;
    }
    if (s == 65) {
        goto caseB;
    }
    if (s != 66) {
        goto tail;
    }
    goto caseC;
caseA:
    *(u32 *)(p + 0xf8) = 819;
    *(u16 *)(p + 166) = 1;
    *(u32 *)(p + 0xac) = 1500;
    *(u32 *)(q + 0xc) = 1536;
    *(u32 *)(q + 0x14) = 16;
    *(u32 *)(q + 0x1c) = 464;
    *(u32 *)(q + 0x20) = 208;
    goto tail;
caseB:
    *(u32 *)(p + 0xf8) = 819;
    *(u16 *)(p + 166) = 0;
    *(u32 *)(p + 0xac) = 1800;
    *(u32 *)(q + 0xc) = 2048;
    *(u32 *)(q + 0x14) = 8;
    *(u32 *)(q + 0x1c) = 464;
    *(u32 *)(q + 0x20) = 208;
    goto tail;
caseC:
    *(u32 *)(p + 0xf8) = 819;
    *(u16 *)(p + 166) = 2;
    *(u32 *)(p + 0xac) = 1500;
    *(u32 *)(q + 0xc) = 1024;
    *(u32 *)(q + 0x14) = 25;
    *(u32 *)(q + 0x1c) = 464;
    *(u32 *)(q + 0x20) = 208;
tail:
    *(u32 *)(q + 0x10) = *(u32 *)(q + 0xc);
    *(u32 *)(q + 0x18) = *(u32 *)(q + 0x14);
}
