#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_0203541c(u8 *p);
extern s32 func_020c1f34(s32 a);
extern void func_020362ec(u8 *p, s32 a);
extern s32 func_02034750(u8 *p, s32 a, s32 b);
extern void func_02027e64(u8 *p, s32 a, s32 b);
extern s32 func_02027ec8(u8 *p, s32 a);
extern s32 func_020388a8(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern u8 func_02029504(u8 *p);

u8 func_ov003_02197b5c(u8 *param_1)
{
    u8 uVar2;
    s32 iVar3;
    s32 iVar4;
    s32 flag;
    BOOL bVar1;

    iVar3 = func_0203541c(param_1);
    if (iVar3 != 0) {
        if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
            bVar1 = TRUE;
        } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && (iVar4 = func_020c1f34(iVar3), iVar4 == 0)) {
            bVar1 = TRUE;
        } else {
            bVar1 = FALSE;
        }
        if (!bVar1) {
            func_020362ec(param_1, (s16)(*(s16 *)(iVar3 + 0x88) + 3));
            iVar3 = func_02034750(param_1, iVar3, 1);
            if (iVar3 != 0) {
                if (param_1[0xb6] & 16) {
                    param_1[0xb6] &= ~16;
                    flag = 1;
                } else {
                    flag = 0;
                }
                if (flag) {
                    func_02027e64(param_1, 4, 0x32);
                }
            }
            iVar3 = func_02027ec8(param_1, 4);
            iVar3 = func_020388a8(param_1, iVar3);
            func_0203e908(param_1, (s16)(iVar3 + 954));
            *(s32 *)(param_1 + 0x488) = 0;
            goto tail;
        }
    }
    func_0202fcc0(param_1);
tail:
    uVar2 = func_02029504(param_1);
    return uVar2;
}
