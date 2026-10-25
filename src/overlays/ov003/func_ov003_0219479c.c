#include "ctx.h"

typedef struct { u32 w[3]; } T3;

u8 *func_020364cc(u8 *p);
s32 func_020c1f34(u8 *q);
void func_02037450(u8 *p, u32 v);
s32 func_0203567c(u8 *p);
void func_ov003_02197f94(u8 *p, s32 v);

void func_ov003_0219479c(u8 *param_1)
{
    u8 *iVar2;
    s32 bVar1;

    iVar2 = func_020364cc(param_1);
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 144) == 0 || *(s16 *)(iVar2 + 144) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar2 + 148) == 53 && func_020c1f34(iVar2) == 0) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar2 + 0xbc);
            *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
            *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = (u8 *)(s32)func_0203567c(param_1);
    func_ov003_02197f94(param_1, (s32)iVar2);
}
