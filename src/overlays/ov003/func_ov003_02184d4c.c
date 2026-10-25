#include "ctx.h"

extern int func_02035770(u32 p, int a);
extern void func_ov003_0218c050(u32 p, int a);
extern int func_02039cc4(u32 p);
extern void func_020bbe14(int a, s16 b);
extern void func_02039c68(u32 p);
extern void func_0203e908(u32 p, s16 v);

void func_ov003_02184d4c(int param_1)
{
    int iVar1;

    iVar1 = func_02035770(param_1, 0x10);
    func_ov003_0218c050(param_1, 0);
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (iVar1 != 0) {
        iVar1 = func_02039cc4(param_1);
        if (iVar1 != 0) {
            func_020bbe14(4, (s16)*(s8 *)(param_1 + 0x88));
            func_02039c68(param_1);
        }
        *(u32 *)(param_1 + 0x48c) = 0;
        func_0203e908(param_1, 0x3a8);
        return;
    }
}
