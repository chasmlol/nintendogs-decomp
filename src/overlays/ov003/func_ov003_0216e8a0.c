#include "ctx.h"

void func_02026b68(u8 *p);
void func_0203b778(u8 *p);
void func_02025ae0(u8 *p);
u8 *func_020364cc(u8 *p);
void func_02028184(u8 *p);
s32 func_02027f78(u8 *p, s32 v);
void func_02027f40(u8 *p, s32 a, s32 b);

void func_ov003_0216e8a0(u8 *param_1)
{
    s16 uVar1;
    s32 iVar2;
    u8 *obj;

    *(u16 *)(param_1 + 0x152) = 0x153;
    func_02026b68(param_1);
    func_0203b778(param_1);
    func_02025ae0(param_1);
    obj = func_020364cc(param_1);
    if (obj != NULL && *(s16 *)(obj + 0x96) == 0) {
        uVar1 = *(s16 *)(obj + 0x94);
        func_02028184(param_1);
        *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x70) = uVar1;
        iVar2 = func_02027f78(param_1, 3);
        if (iVar2 > 2000) {
            func_02027f40(param_1, 3, 2000);
            return;
        }
        return;
    }
    iVar2 = func_02027f78(param_1, 4);
    if (iVar2 > 1000) {
        func_02027f40(param_1, 4, 1000);
        return;
    }
}
