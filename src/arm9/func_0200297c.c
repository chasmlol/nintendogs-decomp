#include "ctx.h"

extern u32 data_0214e6f4;
extern int func_02002e00(void);
extern void func_020026a4(u32 a);

u32 func_0200297c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    int iVar2;
    u32 uVar3;

    iVar2 = func_02002e00();
    if (iVar2 != 0) {
        uVar3 = (param_1 & 0xff) | 0x02006400;
        *(u32 *)((u8 *)&data_0214e6f4 + 4) = param_3;
        *(u32 *)((u8 *)&data_0214e6f4 + 8) = param_4;
        func_020026a4(uVar3);
        func_020026a4((param_2 & 0xffff) | 0x01010000);
        return 0;
    }
    return 1;
}
