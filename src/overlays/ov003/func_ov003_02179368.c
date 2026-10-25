#include "ctx.h"
extern u8 data_0214f460[];
extern u8 data_02152cd8[];
extern void func_02039448(u8 *p);
extern void func_020ab064(u8 *a, u8 *b);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
extern void func_02037450(u8 *p, u32 a);
extern void func_ov003_02179bb8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);
void func_ov003_02179368(u8 *param_1)
{
    u32 local_18[4];
    func_02039448(param_1);
    func_020ab064(*(u8 **)data_0214f460, param_1 + 0x3b4);
    local_18[0] = *(u32 *)(data_02152cd8 + 0x4c);
    local_18[1] = *(u32 *)(data_02152cd8 + 0x58);
    local_18[2] = *(u32 *)(data_02152cd8 + 0x64);
    func_01ff832c(0x5000, local_18, (u32 *)(param_1 + 0x2a0), (u32 *)(param_1 + 0x278));
    func_02037450(param_1, 0x300);
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, (u32)(*(u16 *)(param_1 + 0xfc) > 0xb4), 0x30, 0, 5, 5);
}
