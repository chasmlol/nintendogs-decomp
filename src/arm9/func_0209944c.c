#include "ctx.h"

extern u8 *data_02159060;
extern void func_0206b8a8(u8 *a, s32 b, s32 c);
extern void func_0206b840(u8 *a, s32 b, s32 c);
extern void func_0206afd4(u32 *a, s32 b, s32 c);
extern void func_0206b1dc(u32 *a, s32 b, s32 c);
extern void func_0206b314(u8 *a, s32 b, s32 c);
extern void func_0206b51c(u8 *a, s32 b, s32 c);

void func_0209944c(void)
{
    *(u16 *)(data_02159060 + 0x6c) = 0;
    *(u16 *)(data_02159060 + 0x7a) = 0xffff;
    func_0206b8a8(data_02159060 + 0x1c, 0x1c0, 0x40);
    func_0206b840(data_02159060 + 0x1c, 0x1c0, 0x40);
    func_0206afd4(*(u32 **)(*(u8 **)data_02159060 + 0x14), 0x1800, 0x800);
    func_0206b1dc(*(u32 **)(*(u8 **)data_02159060 + 0x14), 0x1800, 0x800);
    func_0206b314(*(u8 **)(data_02159060 + 4) + 0xc, 0, 0x800);
    func_0206b51c(*(u8 **)(data_02159060 + 4) + 0xc, 0, 0x800);
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 & 0xfffff7ff;
    *(vu32 *)0x04001000 = *(vu32 *)0x04001000 & 0xfffffeff;
    *(s32 *)(data_02159060 + 0xa8) = 1;
}
