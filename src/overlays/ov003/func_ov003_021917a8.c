#include "ctx.h"

extern void func_0202f9b4(u8 *p);
extern s32 func_02044a1c(void);
extern void func_02029504(u8 *p);
extern void func_020340f4(u8 *p);
extern void func_ov003_0218e5dc(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_021917a8(u8 *param_1)
{
    s32 iVar1;

    func_0202f9b4(param_1);
    iVar1 = func_02044a1c();
    if (iVar1 != 2) {
        func_02029504(param_1);
        func_020340f4(param_1);
        func_ov003_0218e5dc(param_1);
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_02029504(param_1);
        func_020340f4(param_1);
        *(u32 *)(param_1 + 0x488) = 0;
        func_0203e908(param_1, 0x3f0);
        return;
    }
}
