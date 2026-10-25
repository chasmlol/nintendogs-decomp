#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_02159148[];
extern s32 func_020df0d4(void);
extern u8 *func_01ffdb08(s32 i);
extern u8 *func_02027540(u8 *p);
extern void func_020292c4(u8 *p, s16 a, u32 b);
extern void func_02029180(u8 *p, s16 a, u32 b);

void func_020a37d0(s16 param_1, u8 param_2, s32 param_3)
{
    s32 bVar1;
    s32 iVar2;
    u8 *uVar3;
    u8 *iVar4;
    s32 base;
    u8 pc2;
    s32 pc3;
    s16 pc1;

    pc1 = param_1;
    pc2 = param_2;
    pc3 = param_3;
    iVar2 = func_020df0d4();
    if (iVar2 == -11) {
        goto zero;
    }
    if (*(s32 *)(data_02159074 + 0x40) != 0) {
        goto zero;
    }
    if (*(s16 *)(data_02159074 + 0x3e) == 1) {
        goto zero;
    }
    if (*(s16 *)(data_02159074 + 0x3e) == 2) {
        goto zero;
    }
    if (*(s16 *)(data_02159148 + 6) == 0x3e) {
        goto zero;
    }
    if (*(s16 *)(data_02159148 + 6) == 0x3f) {
        goto zero;
    }
    bVar1 = 1;
    goto join;
zero:
    bVar1 = 0;
join:
    if (bVar1 != 0) {
        base = pc1 + 12;
        pc1 = 0;
        do {
            uVar3 = func_01ffdb08(pc1);
            if (uVar3 != NULL) {
                iVar4 = func_02027540(uVar3);
                if (*(u16 *)(iVar4 + 0x26) < 5) {
                    if (pc3 != 0) {
                        func_02029180(uVar3, base, pc2);
                    } else {
                        func_020292c4(uVar3, base, pc2);
                    }
                }
            }
            pc1 = (s16)(pc1 + 1);
        } while (pc1 < 3);
    }
}
