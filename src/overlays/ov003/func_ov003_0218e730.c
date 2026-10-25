#include "ctx.h"

extern s32 func_02032918(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, s32 v);
extern s32 func_0203541c(u8 *p);
extern void func_ov003_021987dc(u8 *p, s32 v);

void func_ov003_0218e730(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;

    bVar1 = func_02032918(param_1);
    if (bVar1 != 0) {
        func_02039448(param_1);
    }
    func_02037450(param_1, 0x300);
    if (*(s8 *)(param_1 + 0xa0) == 0) {
        if (*(s8 *)(param_1 + 0xa1) == 0) {
            iVar2 = func_0203541c(param_1);
            func_ov003_021987dc(param_1, iVar2);
            return;
        }
        return;
    }
}
