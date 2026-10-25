#include "ctx.h"

typedef struct {
    u8 pad[0xc];
    u8 *head;
} ListG;

extern ListG data_02155cf8;
extern u8 data_02155d4c[];

s32 func_02080b08(void);
void func_02080b1c(s32 h);
u64 func_0207f8e8(u8 *p);
void func_0207f3a0(u64 v);

s32 func_0207f2d0(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u8 *iVar3;
    u8 *iVar2;
    s32 h;
    u64 uVar4;

    iVar3 = data_02155cf8.head;
    iVar2 = 0;
    h = func_02080b08();
    for (; iVar3 != 0 && iVar3 != param_1; iVar3 = *(u8 **)(iVar3 + 0x68)) {
        iVar2 = iVar3;
    }
    if (iVar3 == 0) {
        goto ret0;
    }
    if (iVar3 != data_02155d4c) {
        goto body;
    }
ret0:
    func_02080b1c(h);
    return 0;
body:
    if (*(s32 *)(iVar3 + 0x70) == param_2) {
        goto ret1;
    }
    if (iVar2 == 0) {
        data_02155cf8.head = *(u8 **)(param_1 + 0x68);
    } else {
        *(u8 **)(iVar2 + 0x68) = *(u8 **)(param_1 + 0x68);
    }
    *(s32 *)(param_1 + 0x70) = param_2;
    uVar4 = func_0207f8e8(param_1);
    func_0207f3a0(uVar4);
ret1:
    func_02080b1c(h);
    return 1;
}
