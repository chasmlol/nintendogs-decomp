#include "ctx.h"

extern u32 data_0214f460;
extern u32 data_0214f464;
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, u32 v);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern void func_020ab064(u32 a, u8 *b);
extern void func_0202fcc0(u8 *p);

void func_ov003_0217c54c(u8 *param_1)
{
    u32 uVar1;
    u32 *ptr;

    func_02039448(param_1);
    func_02037450(param_1, 0x300);
    if (*(s8 *)(param_1 + 160) == 0 && *(s8 *)(param_1 + 161) == 0) {
        func_0203e8cc(param_1, 0, 0x118);
    }
    func_020ab064(data_0214f460, param_1 + 948);
    if (*(u16 *)(param_1 + 252) <= 150) {
        return;
    }
    ptr = (u32 *)data_0214f464;
    uVar1 = *ptr * 0x10dcd + 1;
    *ptr = uVar1;
    if ((u16)((((u32)(u16)uVar1) * 30) >> 16) == 0) {
        func_0202fcc0(param_1);
    }
}
