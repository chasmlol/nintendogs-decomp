#include "ctx.h"

extern s32 func_021110e0(u8 *p);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_02104188(void);
extern void func_02117e4c(u8 *p);

void func_02111154(u8 *param_1)
{
    s32 iVar1;

    *(u32 *)param_1 = 0;
    iVar1 = func_021110e0(param_1 + 0x1c84);
    if (iVar1 != 0) {
        func_02112798(2, 6, 0);
        return;
    }
    func_02104188();
    func_02117e4c(param_1 + 184);
    func_02117e4c(param_1 + 216);
    func_02117e4c(param_1 + 248);
}
