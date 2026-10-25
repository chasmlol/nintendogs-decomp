#include "ctx.h"

extern void func_020e8b18(u8 *p);
extern void func_020c8bd4(u8 *p);
extern void func_020c8ae8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, u32 *b, u32 *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020e8d24(void);
extern void func_020e8cf0(void);
extern void func_020e8cd4(void);
extern void func_020e8c74(void);

void func_020e8a34(u8 *param_1)
{
    u32 iVar1;
    u8 *P;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 1:
        func_020e8b18(param_1);
        return;
    case 2:
        func_020c8bd4(param_1);
        return;
    case 3:
        P = *(u8 **)(*(u8 **)(param_1 + 0x214));
        func_020c8ae8(param_1, *(u32 *)(P + 0x48), *(u32 *)(P + 0x4c), *(u32 *)(P + 0x50), *(u32 *)(P + 0x54), *(u32 *)(P + 0x58), 4);
        iVar1 = func_020c8164(*(u16 *)(param_1 + 160), *(u32 *)(param_1 + 0xf8));
        func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), (u32 *)(param_1 + 0xfc), (u32 *)(param_1 + 0x108), iVar1,
                      (u32)func_020e8d24, 0, (u32)func_020e8cf0, (u32)func_020e8cd4, (u32)func_020e8c74);
    }
}
