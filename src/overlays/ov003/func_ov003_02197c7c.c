#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_02159468[];
extern s32 func_020c1f34(u8 *p);
extern s32 func_02027f78(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern void func_020362ec(u8 *p, s32 a);
extern void func_ov003_0219a368(u8 *p);
extern u8 func_02029504(u8 *p);

u8 func_ov003_02197c7c(u8 *param_1)
{
    u8 uVar2;
    s32 bVar1;
    u8 *iVar4;
    s32 idx;

    idx = (s16)*(s16 *)(*(u8 **)data_02159444 + 0x7a);
    if (idx < 0 || *(s16 *)(*(u8 **)data_02159468 + 0x20) <= idx) {
        iVar4 = NULL;
    } else {
        iVar4 = *(u8 **)(*(u8 **)data_02159468 + idx * 4 + 4);
    }
    if (iVar4 != NULL) {
        if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && func_020c1f34(iVar4) == 0) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (bVar1 == 0) {
            if (*(s16 *)(iVar4 + 0x96) == 0 &&
                (func_020c1f34(iVar4) == 0 || func_02027f78(param_1, 3) <= 300)) {
                func_0202fcc0(param_1);
            } else if (*(s16 *)(iVar4 + 0x96) == 1 &&
                       (func_020c1f34(iVar4) == 0 || func_02027f78(param_1, 4) <= 150)) {
                func_0202fcc0(param_1);
            } else {
                func_020362ec(param_1, (s16)(*(s16 *)(iVar4 + 0x88) + 3));
                func_ov003_0219a368(param_1);
                *(u32 *)(param_1 + 0x488) = 0;
            }
            goto done;
        }
    }
    func_0202fcc0(param_1);
done:
    uVar2 = func_02029504(param_1);
    return uVar2;
}
