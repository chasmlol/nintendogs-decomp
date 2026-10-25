#include "ctx.h"

extern s32 func_02035770(u8 *p, u32 a);
extern void func_ov003_0218c050(u8 *p, u32 a);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(u32 a, s32 b);
extern void func_02039c68(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02185014(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_02035770(param_1, 10);
    func_ov003_0218c050(param_1, 0);
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (iVar1 != 0) {
        iVar1 = func_02039cc4(param_1);
        if (iVar1 != 0) {
            func_020bbe14(4, *(s8 *)(param_1 + 0x88));
            func_02039c68(param_1);
        }
        *(u32 *)(param_1 + 0x48c) = 0;
        func_0203e908(param_1, 0x3a8);
    }
}
