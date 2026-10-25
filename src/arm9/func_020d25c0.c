#include "ctx.h"

extern s32 func_02044ca0(u32 a);
extern void func_020be1d8(u32 a);
extern s32 func_020bc910(void);
extern s32 func_020bc990(void);
extern void func_020d20f8(u8 *p);
extern void func_020cf9c8(u8 *p, u32 a, s32 b, u32 c);
extern void func_020d1ea8(u8 *p);
extern void func_020cf998(u8 *p, u32 a);

void func_020d25c0(u8 *param_1)
{
    s16 *psVar3;
    s32 iVar2;

    psVar3 = (s16 *)(param_1 + 0x60);
    func_02044ca0(0);
    func_020be1d8(1);
    iVar2 = func_020bc910();
    if (iVar2 != 0) {
        *psVar3 = 1;
        *(s32 *)(param_1 + 0x6c) = 0;
    } else if (*(s32 *)(param_1 + 0x6c) == 1) {
        *psVar3 = 0;
    } else {
        iVar2 = func_020bc990();
        if (iVar2 != 0) {
            *psVar3 = 1;
        } else {
            *psVar3 = 2;
        }
    }
    if (*psVar3 != psVar3[1]) {
        psVar3[2] = psVar3[1];
        psVar3[1] = *psVar3;
        if (psVar3[1] == 0) {
            goto after;
        }
        if (psVar3[1] == 1) {
            goto case1;
        }
        if (psVar3[1] != 2) {
            goto after;
        }
        goto case2;
    }
    goto after;
case1:
    func_020d20f8(param_1);
    goto after;
case2:
    func_020cf9c8(param_1, 2, -1, 0);
after:
    switch (psVar3[1]) {
    case 0:
        break;
    case 1:
        func_020d1ea8(param_1);
        break;
    case 2:
        break;
    }
after2:
    if (((s32)(*(vu16 *)0x04000304 & 0x8000)) >> 15 != 1) {
        return;
    }
    func_020cf998(param_1, 1);
}
