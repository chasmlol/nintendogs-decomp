#include "ctx.h"
extern void func_0206bbd4(void);
extern void func_0206bb08(void);
extern void func_0206bb60(u32 *p, u32 a, u32 b);
void func_02074008(u8 *param_1, s32 param_2)
{
    if (param_2 != 0) {
        func_0206bbd4();
    }
    func_0206bb60((u32 *)(param_1 + *(u32 *)(param_1 + 0x38)),
                  (*(u32 *)(param_1 + 0x2c) & 0xffff) << 3,
                  (u32)*(u16 *)(param_1 + 0x30) << 3);
    *(u16 *)(param_1 + 0x32) = *(u16 *)(param_1 + 0x32) | 1;
    if (param_2 != 0) {
        func_0206bb08();
        return;
    }
}
