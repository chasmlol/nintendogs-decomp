#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern s32 func_020364cc(u8 *p);
extern s32 func_020c1f34(s32 p);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02197f94(u8 *p, s32 n);

void func_ov003_021937a4(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    s32 iVar3;

    iVar2 = func_020364cc(param_1);
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 0x90) == 0 || *(s16 *)(iVar2 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar2 + 0x94) == 0x35 && (iVar3 = func_020c1f34(iVar2)) == 0) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(T12 *)(param_1 + 0x26c) = *(T12 *)(iVar2 + 0xbc);
            *(T12 *)(param_1 + 0x278) = *(T12 *)(param_1 + 0x26c);
            *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = func_0203567c(param_1);
    func_ov003_02197f94(param_1, iVar2);
}
