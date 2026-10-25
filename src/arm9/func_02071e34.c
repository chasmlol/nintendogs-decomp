#include "ctx.h"

typedef void (*FnCb)(u8 *, u32, u32, u32);

extern void func_02071fe8(u8 *p);
extern u8 *func_0207ce9c(u8 *list, u8 *node);
extern void func_0207cec8(u8 *list, u8 *node);
extern void func_0207dbe0(u8 *a, s32 b);
extern void func_02071d70(void);
extern void func_0207dc3c(u8 *a, s32 b);
extern void func_02071d94(u8 *p);

void func_02071e34(u8 *param_1, s32 param_2)
{
    u8 *iVar2;
    u8 *iVar3;
    u8 *iVar4;
    s32 bVar1;

    iVar3 = 0;
    bVar1 = (s32)iVar3;

    if (param_2 == 0) {
        func_02071fe8(param_1);
        return;
    }
    if (param_2 < *(u16 *)(param_1 + 12)) {
        iVar4 = iVar3;
        do {
            iVar2 = func_0207ce9c(param_1 + 4, iVar4);
            for (iVar3 = func_0207ce9c(iVar2, iVar3); iVar3 != 0; iVar3 = func_0207ce9c(iVar2, iVar3)) {
                if (*(FnCb *)(iVar3 + 0xc) != 0) {
                    (*(FnCb *)(iVar3 + 0xc))(iVar3 + 0x20, *(u32 *)(iVar3 + 8),
                                             *(u32 *)(iVar3 + 0x10), *(u32 *)(iVar3 + 0x14));
                    bVar1 = 1;
                }
            }
            func_0207cec8(param_1 + 4, iVar2);
        } while (param_2 < *(u16 *)(param_1 + 12));
    }
    func_0207dbe0(*(u8 **)param_1, param_2);
    if (bVar1 != 0) {
        func_02071d70();
    }
    func_0207dc3c(*(u8 **)param_1, *(u16 *)(param_1 + 12));
    func_02071d94(param_1);
}
