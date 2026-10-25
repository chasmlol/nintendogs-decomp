#include "ctx.h"

extern int func_ov003_02174844(int a, int b, int c, int d, int e, int f, int g);
extern void func_0203e908(int a, int b);
extern int func_02023780(int a);
extern s16 *func_02024114(int a, int b);
extern u32 func_02029290(int a, int b, int c);

u32 func_ov003_021708ac(int param_1)
{
    int iVar2;
    s16 *psVar3;

    iVar2 = func_ov003_02174844(param_1, 0, 500, 0x1f5, 0x200, 0x201, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 0xf2);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == NULL) {
        return (u32)psVar3;
    }
    return func_02029290(param_1, (s16)(*(u16 *)psVar3 + 12), *(u8 *)((u8 *)psVar3 + 0x28));
}
