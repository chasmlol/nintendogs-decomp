#include "ctx.h"

extern u8 *data_ov006_021661c4;
extern void func_02068368(u32 a);
extern u32 func_02085cb8(u32 a);
extern u32 func_02085cc0(u32 a);
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_ov006_02164e58(void)
{
    u32 uVar5;
    u32 iVar6;

    if (*(u32 *)(data_ov006_021661c4 + 0x180) != 0) {
        func_02068368(0);
        *(u16 *)0x0400100a = (*(u16 *)0x0400100a & 0x43) | 0x504;
        uVar5 = func_02085cb8(*(u32 *)(data_ov006_021661c4 + 0x15c));
        iVar6 = func_02085cc0(*(u32 *)(data_ov006_021661c4 + 0x15c));
        func_0207c910(0x23, 0, iVar6, uVar5);
        func_0207c910(0x19, 0, *(u32 *)(data_ov006_021661c4 + 0x17c) + 0xc,
                      *(u32 *)(*(u32 *)(data_ov006_021661c4 + 0x17c) + 8));
        func_0207c910(0x15, 0, *(u32 *)(*(u32 *)(data_ov006_021661c4 + 0x174) + 0x14),
                      *(u32 *)(*(u32 *)(data_ov006_021661c4 + 0x174) + 0x10));
        func_0207c910(0x1e, 0, *(u32 *)(*(u32 *)(data_ov006_021661c4 + 0x170) + 0xc), 0x1c0);
        func_0207c910(0x1f, 0, *(u32 *)(*(u32 *)(data_ov006_021661c4 + 0x178) + 0xc), 0x1c0);
        *(u16 *)0x0400100a = (*(u16 *)0x0400100a & ~3) | 1;
        *(u32 *)0x04001000 = *(u32 *)0x04001000 | 0x1200;
        *(u32 *)0x04001000 = *(u32 *)0x04001000 & ~0xc00u;
        *(u16 *)0x04001050 = 0;
        *(u32 *)0x04001014 = 0;
    }
}
