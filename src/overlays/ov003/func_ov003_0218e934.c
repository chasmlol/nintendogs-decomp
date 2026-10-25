#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u32 w[5]; } T5;

extern u8 *data_0214f45c;
extern u32 data_ov003_0219a7a4[];
extern u8 *func_0200c498(s32 a, s32 b);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 v);
extern s32 func_02028124(u8 *p);
extern s32 func_02022e14(u8 *p, s32 v);
extern void func_02029504(u8 *p);
extern void func_02038138(u8 *p, s32 v);
extern void func_020424e4(s32 v);
extern void func_0202fcc0(u8 *p);

void func_ov003_0218e934(u8 *param_1)
{
    s32 bVar1;
    u8 *iVar2;
    u8 *puVar3;
    s32 iVar4;
    s32 iVar5;
    u32 local_28[5];
    u8 *psVar7;
    u32 *src;
    u32 *dst;

    iVar2 = func_0200c498(14, 0);
    if (iVar2 != 0) {
        psVar7 = *(u8 **)(data_0214f45c + 0x18) + (s16)*(u32 *)(iVar2 + 0x20) * 36;
        if (psVar7 != 0) {
            puVar3 = *(u8 **)(data_0214f45c + 0x1c) + (s16)(*(s16 *)psVar7 + *(s32 *)(param_1 + 0x464)) * 68;
            if (puVar3 != 0) {
                *(T3 *)(param_1 + 0x26c) = *(T3 *)puVar3;
                func_0203942c(param_1);
                iVar5 = func_02037450(param_1, 0x102);
                iVar4 = func_02028124(param_1);
                if (iVar5 < iVar4 * 64) {
                    *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
                    if (*(s32 *)(param_1 + 0x464) >= *(s16 *)(psVar7 + 2)) {
                        *(s32 *)(param_1 + 0x464) = 0;
                    }
                }
            }
        }
    }
    *(T5 *)local_28 = *(T5 *)data_ov003_0219a7a4;
    bVar1 = func_02022e14(param_1, 78);
    if (bVar1) {
        *(s32 *)(param_1 + 0x468) = *(u8 *)(param_1 + 0xa5);
        *(s32 *)(param_1 + 0x46c) = 180 - *(u8 *)(param_1 + 0xa5) * 30;
        func_02029504(param_1);
    }
    func_02038138(param_1, local_28[*(s32 *)(param_1 + 0x468)]);
    *(s32 *)(param_1 + 0x46c) = *(s32 *)(param_1 + 0x46c) - 1;
    if (*(s32 *)(param_1 + 0x46c) > 0) {
        return;
    }
    func_020424e4(*(s8 *)(param_1 + 0x88));
    bVar1 = func_02022e14(param_1, 78);
    if (bVar1) {
        func_02029504(param_1);
    }
    func_0202fcc0(param_1);
}
