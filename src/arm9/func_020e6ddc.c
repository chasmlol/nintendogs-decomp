#include "ctx.h"

extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *a, s32 *b);

void func_020e6ddc(u32 param_1, u32 param_2)
{
    s32 buf[9];
    s32 iVar2;
    s32 uVar1;
    s32 t0, t1, t2, t3, t4, t5, t6, t7, t8;

    iVar2 = *(s32 *)(param_1 + 0x214);
    t2 = *(s32 *)(param_1 + 0xd0);
    t1 = *(s32 *)(param_1 + 0xcc);
    t0 = *(s32 *)(param_1 + 0xc8);
    buf[0] = t0;
    buf[1] = t1;
    buf[2] = t2;
    t8 = *(s32 *)(param_1 + 0xe8);
    t7 = *(s32 *)(param_1 + 0xe4);
    t6 = *(s32 *)(param_1 + 0xe0);
    buf[6] = t6;
    buf[7] = t7;
    buf[8] = t8;
    t5 = *(s32 *)(param_1 + 0xdc);
    t4 = *(s32 *)(param_1 + 0xd8);
    t3 = *(s32 *)(param_1 + 0xd4);
    buf[3] = t3;
    buf[4] = t4;
    buf[5] = t5;
    func_01ff832c(param_2, &buf[0], &buf[6], &buf[6]);
    func_02006a30(&buf[6], &buf[6]);
    func_02067d04(&buf[3], &buf[6], &buf[0]);
    *(s32 *)(param_1 + 0xc8) = buf[0];
    *(s32 *)(param_1 + 0xcc) = buf[1];
    *(s32 *)(param_1 + 0xd0) = buf[2];
    *(s32 *)(param_1 + 0xd4) = buf[3];
    *(s32 *)(param_1 + 0xd8) = buf[4];
    *(s32 *)(param_1 + 0xdc) = buf[5];
    *(s32 *)(param_1 + 0xe0) = buf[6];
    *(s32 *)(param_1 + 0xe4) = buf[7];
    *(s32 *)(param_1 + 0xe8) = buf[8];
    if (*(s32 *)(iVar2 + 4) == 1) {
        uVar1 = func_02067df0(&buf[6], (s32 *)(iVar2 + 0x28));
        if (uVar1 <= 3686) {
            *(s32 *)(iVar2 + 4) = *(s32 *)(iVar2 + 4) + 1;
        }
        return;
    }
    return;
}
