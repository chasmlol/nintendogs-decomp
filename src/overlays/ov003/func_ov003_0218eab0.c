#include "ctx.h"

extern int func_02042588(int a);
extern int func_020425e0(int a);
extern void func_0203e908(int p, s16 v);
extern void func_020362ec(int p, s16 v);

void func_ov003_0218eab0(int param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar1 = func_02042588((int)*(s8 *)(param_1 + 0x88));
    if (iVar1 == 0) {
        func_0203e908(param_1, 0x43a);
        return;
    }
    iVar4 = iVar1 - 1;
    iVar3 = 0;
    do {
        iVar2 = func_020425e0(iVar3);
        if (iVar4 == iVar2) {
            break;
        }
        iVar3 = (s8)(iVar3 + 1);
    } while (iVar3 < 3);
    func_020362ec(param_1, (s16)iVar3);
    func_0203e908(param_1, 0x43b);
}
