#include "ctx.h"

extern u8 *data_0215be48;
extern u32 data_02149084[];
extern void func_02112218(void);
extern void func_0206c7bc(s32 a, u8 *b, s32 c);
extern void func_0210ed40(void);
extern void func_02101d88(void);
extern void func_0210ea40(s32 a, u8 *b, u8 **c, s32 d);
extern void func_02111ea4(s32 a, u8 *b);
extern void func_021032c0(u8 *a);
extern void func_02113198(s32 a);
extern void func_0211200c(void);

void func_020fdc24(s32 param_1)
{
    u8 *base;
    u32 *iVar2;

    iVar2 = (u32 *)data_02149084[param_1];
    *(u32 *)(data_0215be48 + 0x483c) = 0;
    *(u32 *)(data_0215be48 + 0x4844) = 0;
    base = data_0215be48;
    func_02112218();
    *(s16 *)(base + 0x48b4) = -1;
    *(s16 *)(base + 0x48b6) = -1;
    *(u32 *)(base + 0x48b8) = 0;
    *(u32 *)(base + 0x48bc) = 0;
    *(u32 *)(base + 0x48c0) = 0;
    *(u32 *)(base + 0x48c4) = 0;
    *(u32 *)(base + 0x4864) = 0;
    *(u32 *)(base + 0x4868) = 0;
    *(u32 *)(base + 0x486c) = 0;
    { volatile u16 z0 = 0; func_0206c7bc(z0, data_0215be48 + 0xc4, 0x1c18); }
    func_0210ed40();
    func_02101d88();
    *(u32 *)(data_0215be48 + 0x4870) |= 0xffffffff;
    *(s32 *)(data_0215be48 + 0xb4) = -1;
    *(s32 *)(data_0215be48 + 0xb8) = param_1;
    *(u32 *)(data_0215be48 + 0xc0) = (u32)iVar2;
    *(u32 *)(data_0215be48 + 0x4858) = 0;
    { u8 *p11 = data_0215be48 + 0x11000; *(u32 *)(p11 + 0x15c) = 1; func_0210ea40(0x18, p11, &data_0215be48, 1); }
    if (*(s32 *)(data_0215be48 + 0xa8) != 1) {
        func_02111ea4(0x18, data_0215be48);
        func_021032c0(data_0215be48 + 0x5028);
        *(u32 *)(data_0215be48 + 0x5030) = 0;
    }
    func_02113198(2);
    func_0211200c();
    *(u32 *)(data_0215be48 + 0x1e30) = 1;
    ((void (*)(u8 *))(iVar2[3]))(data_0215be48 + 0xc4);
    *(u32 *)(data_0215be48 + 0xac) = 1;
    *(u32 *)(data_0215be48 + 0x487c) = 1;
}
