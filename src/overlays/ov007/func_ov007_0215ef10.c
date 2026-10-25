#include "ctx.h"

extern u32 data_ov007_02160d9c;
extern u32 data_ov007_02160da8;
extern void func_0206f878(u32 v);
extern void func_0206f2bc(void);
extern void func_ov007_0215dac8(void);

void func_ov007_0215ef10(void)
{
    s32 iVar3;
    func_0206f878(0xffff);
    func_0206f2bc();
    *(u32 *)(data_ov007_02160d9c + 4) = 0;
    iVar3 = 0;
    do {
        ((u32 *)&data_ov007_02160da8)[iVar3] = 0;
        iVar3 = iVar3 + 1;
    } while (iVar3 < 16);
    *(u32 *)(data_ov007_02160d9c + 0x10c) = 0;
    *(u32 *)(data_ov007_02160d9c + 0x110) = 0;
    *(u32 *)(data_ov007_02160d9c + 0x124) = 0;
    *(u32 *)(data_ov007_02160d9c + 0x128) = 0;
    func_ov007_0215dac8();
}
