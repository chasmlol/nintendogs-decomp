#include "ctx.h"

extern int func_0203567c(u8 *p);
extern void func_02027f40(u8 *p, int a, int b);
extern void func_ov003_0218e690(u8 *p);
extern int func_0203579c(u8 *p, int v);
extern int func_02027f78(u8 *p, int v);
extern int func_02009408(u8 *p, int a, int b, int c, int d);
extern int func_02028130(u8 *p);
extern void func_0200926c(u8 *p, int a, int b);

void func_0201390c(u8 *param_1)
{
    int iVar1;
    int iVar2;
    int r5;
    u32 uVar3;
    s64 prod;

    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        r5 = 0;
    } else {
        *(s16 *)(param_1 + 256 + 4) = 0;
        func_02027f40(param_1, 2, 0);
        func_ov003_0218e690(param_1);
        r5 = 1;
    }
    if ((*(s16 *)(param_1 + 0x152) == 0x113) &&
        (func_0203579c(param_1, 0x13) != 0) &&
        (func_02027f78(param_1, 7) >> 9 < 5) &&
        (iVar2 = func_02009408(param_1, 0x3e, 2, 0, 0), iVar2 != -1)) {
        uVar3 = func_02028130(param_1);
        prod = (s64)(s32)uVar3 * 0xe66 + 0x800;
        *(u32 *)(*(u8 **)(param_1 + iVar2 * 4 + 0x8fc) + 0x44) = (u32)(prod >> 12);
    }
    if (r5 == 0) {
        if (func_0203579c(param_1, 0x45) == 0) {
            return;
        }
    }
    func_0200926c(param_1, 0x3e, 2);
}
