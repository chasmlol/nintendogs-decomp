#include "ctx.h"

extern int *data_0215be48;
extern s16 data_02159440;
extern void func_020ad7c8(int a, int b);
extern void func_020ad6fc(int a, int b);
extern void func_02109238(void);
extern void func_020946ac(int a, u32 b);
extern void func_020aebbc(int a, u32 b);
extern void func_02093c7c(u32 a);

void func_020aea7c(int param_1)
{
    int *piVar2;
    s16 sVar1;
    s32 raw;
    int iVar4;
    u32 uVar3;

    piVar2 = data_0215be48;
    raw = *(s32 *)((u8 *)piVar2 + 0x486c);
    iVar4 = *(s16 *)((u8 *)piVar2 + 0x48b4);
    uVar3 = (u32)*(s16 *)((u8 *)piVar2 + 0x48b6);
    sVar1 = (s16)raw;
    if (sVar1 == 0) {
        return;
    }
    if (sVar1 == 1) {
        goto b1;
    }
    if (sVar1 == 2) {
        goto b2;
    }
    return;
b1:
    if (data_02159440 != 2) {
        if (data_02159440 != 6) {
            return;
        }
        func_020ad7c8(param_1, 6);
        func_020ad6fc(param_1, 1);
        func_02109238();
        return;
    }
    func_020ad7c8(param_1, 2);
    func_020ad6fc(param_1, 0);
    func_02109238();
    return;
b2:
    func_020946ac(iVar4, uVar3);
    if (iVar4 == 0) {
        goto c0;
    }
    if (iVar4 == 2) {
        goto c2;
    }
    return;
c0:
    func_020aebbc(param_1, uVar3);
    return;
c2:
    switch (uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        func_02093c7c(uVar3);
        *(s16 *)(param_1 + 0x2e) = 2;
        *(s16 *)(param_1 + 0x30) = 0;
        *(s16 *)(param_1 + 0x100) = 7;
        break;
    default:
        break;
    }
}
