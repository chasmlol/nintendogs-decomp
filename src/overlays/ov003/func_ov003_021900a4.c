#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u8 *data_0215942c;
extern s32 func_020364cc(u8 *p);
extern void func_0203e908(u8 *p, u32 n);
extern void func_020362f8(u8 *p);
extern s32 func_020c1f34(s32 p);
extern s32 func_0203567c(u8 *p);
extern void func_0202a898(u8 *p);

void func_ov003_021900a4(u8 *param_1)
{
    s32 bVar1;
    s32 iVar3;

    iVar3 = func_020364cc(param_1);
    if (iVar3 != 0) {
        *(T12 *)(param_1 + 0x3b4) = *(T12 *)(iVar3 + 0xbc);
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar1 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar1 = 0;
    } else {
        if (iVar3 != 0) {
            if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
                bVar1 = 1;
            } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && (iVar3 = func_020c1f34(iVar3)) == 0) {
                bVar1 = 1;
            } else {
                bVar1 = 0;
            }
            if (!bVar1) {
                goto C4;
            }
        }
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar1 = 1;
        goto LAB;
    C4:
        bVar1 = 0;
    }
LAB:
    if (bVar1) {
        return;
    }
    iVar3 = func_0203567c(param_1);
    if (iVar3 != 0) {
        func_0202a898(param_1);
    }
}
