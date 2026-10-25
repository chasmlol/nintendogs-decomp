#include "ctx.h"

extern void func_02117c54(u32 *p);
extern void func_02117d8c(u32 *p);
extern void func_02108ed0(void);
extern s32 data_0215be48;

void func_02115164(u32 *param_1)
{
    s16 sVar1;
    s32 *piVar2;
    s32 iVar3;

    piVar2 = &data_0215be48;
    *param_1 = 0;
    iVar3 = *(s32 *)(*piVar2 + 0xb4);
    if (iVar3 == 4) {
        goto keep;
    }
    if (iVar3 == 0x1e) {
        goto keep;
    }
    if (iVar3 != 0x26) {
        goto other;
    }
keep:
    func_02117c54(param_1 + 0x8d);
    func_02117c54(param_1 + 0x95);
    func_02117c54(param_1 + 0x9d);
    sVar1 = *(s16 *)((u8 *)param_1 + 0x1cb8);
    if (sVar1 == 0) {
        return;
    }
    if (sVar1 == 1) {
        goto case1;
    }
    if (sVar1 == 2) {
        goto case2;
    }
    return;
case1:
    func_02117c54(param_1 + 0xa5);
    return;
case2:
    func_02117c54(param_1 + 0xa5);
    func_02117c54(param_1 + 0xad);
    func_02117c54(param_1 + 0xb5);
    return;
other:
    func_02117d8c(param_1 + 0x8d);
    func_02117d8c(param_1 + 0x95);
    func_02117d8c(param_1 + 0x9d);
    func_02117d8c(param_1 + 0xa5);
    func_02117d8c(param_1 + 0xad);
    func_02117d8c(param_1 + 0xb5);
    func_02108ed0();
    return;
}
