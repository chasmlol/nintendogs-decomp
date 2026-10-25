#include "ctx.h"

extern u32 data_02156044;
extern u32 data_0215604c;
extern u32 data_02156054;

extern s32 func_02088c80(u8 *p, s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
extern void func_0206c9b8(void *d, void *s, s32 n);
extern void func_02088364(s32 *a);
extern void func_02088d90(s32 *a, void *p);
typedef struct { s32 w0; s32 w1; } Pair2;
extern s32 func_02088064(s32 *a, Pair2 b);
extern void func_02087fcc(s32 *a, s32 b, s32 c);

s32 func_02088b6c(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar4;
    s32 s11;
    u32 *piVar1;
    s32 stk[19];
    s32 iVar2;

    if (param_2 == 0) {
        piVar1 = (u32 *)&data_02156044;
    } else {
        piVar1 = (u32 *)&data_0215604c;
    }
    iVar4 = *(s32 *)piVar1;
    if (iVar4 == 0) {
        goto LZ;
    }
    if ((param_3 * 0x20) >= piVar1[1]) {
        return 0;
    }
    func_0206c9b8((u8 *)iVar4 + param_3 * 0x20, param_1, 0x20);
    *(s32 *)(param_1 + 0x20) = param_2;
    func_02088364(&stk[2]);
    func_02088d90(&stk[0], param_1);
    iVar2 = func_02088064(&stk[2], *(Pair2 *)&stk[0]);
    if (iVar2 == 0) {
        return 0;
    }
    *(s32 *)(0x24 + param_1) = stk[10];
    s11 = stk[11];
    iVar2 = s11 - stk[10];
    *(s32 *)((u32)param_1 + 0x28) = iVar2;
    func_02087fcc(&stk[2], iVar2, s11);
    return 1;
LZ:
    {
        s32 *pb = (s32 *)0x027ffe58;
        s32 *pa = (s32 *)0x027ffe50;
        u32 a0 = pa[0];
        s32 a1 = pa[1];
        s32 a2 = pb[0];
        u32 a3 = pb[1];
        return func_02088c80(param_1, param_2, param_3, &data_02156054, a0, a1, a2, a3);
    }
}
