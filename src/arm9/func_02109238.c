#include "ctx.h"
extern u8 data_0215be48[];
extern void func_0210328c(u8 *p);
extern void func_021035d0(void);
extern void func_02112798(u32 a, u32 b, u32 c);
void func_02109238(void)
{
    u32 iVar1;
    func_0210328c(*(u8 **)data_0215be48 + 0x5028);
    iVar1 = *(u32 *)(*(u8 **)data_0215be48 + 0xa8);
    if (iVar1 == 9) {
        return;
    }
    if (iVar1 != 10) {
        if (*(u8 **)data_0215be48 != NULL) {
            func_021035d0();
            func_02112798(3, 0, 0);
            return;
        }
        return;
    }
    return;
}
