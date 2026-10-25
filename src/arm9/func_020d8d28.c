#include "ctx.h"

extern s16 *data_0215942c;
extern s16 *data_02159458;
extern void func_020bd858(u8 *p);
extern s32 func_ov004_0215c6b8(void);
extern s32 func_020c5fbc(u8 *p);
extern void func_020c5f4c(u8 *p, s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02042d4c(void);
extern void func_02027178(s32 a, s32 *b, s32 c);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);

u32 func_020d8d28(u8 *param_1)
{
    s32 A[21];
    u16 sVar1;
    s16 *psVar5;
    s32 iVar4;
    s32 bVar3;
    s32 n15;
    s32 n16;
    s32 n17;
    s32 c9;
    s32 c10;
    s32 c11;
    s32 v8;

    func_020bd858(param_1);
    *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) = *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) | 1;
    psVar5 = data_0215942c;
    sVar1 = *(u16 *)psVar5;
    if (sVar1 == 7) {
        goto L7;
    }
    if (sVar1 == 9) {
        goto L9;
    }
    if (sVar1 != 11) {
        goto Ldef;
    }
    goto L11;
L9:
    iVar4 = func_ov004_0215c6b8();
    if (iVar4 != 0) {
        bVar3 = func_020c5fbc(param_1);
        return (u32)bVar3;
    }
    func_020c5f4c(param_1, data_02159458[1]);
    iVar4 = func_01ffdb08(data_02159458[1]);
    goto Lend;
L7:
    func_020c5f4c(param_1, psVar5[7]);
    iVar4 = func_01ffdb08(data_0215942c[7]);
    goto Lend;
L11:
    func_020c5f4c(param_1, psVar5[14]);
    iVar4 = func_01ffdb08(data_0215942c[14]);
    goto Lend;
Ldef:
    iVar4 = func_02042d4c();
    func_020c5f4c(param_1, iVar4);
    iVar4 = func_02042d4c();
    iVar4 = func_01ffdb08(iVar4);
Lend:
    func_02027178(iVar4, &A[9], 12);
    n15 = A[15];
    n16 = A[16];
    n17 = A[17];
    c9 = A[9];
    c10 = A[10];
    c11 = A[11];
    A[0] = n15;
    A[1] = n16;
    A[2] = n17;
    A[0] = -A[0];
    A[3] = c9;
    A[4] = c10;
    A[5] = c11;
    A[1] = -A[1];
    A[2] = -A[2];
    func_02067d04(&A[0], &A[3], &A[6]);
    *(s32 *)(param_1 + 200) = A[0];
    *(s32 *)(param_1 + 0xcc) = A[1];
    *(s32 *)(param_1 + 0xd0) = A[2];
    *(s32 *)(param_1 + 0xd4) = A[3];
    *(s32 *)(param_1 + 0xd8) = A[4];
    *(s32 *)(param_1 + 0xdc) = A[5];
    *(s32 *)(param_1 + 0xe0) = A[6];
    *(s32 *)(param_1 + 0xe4) = A[7];
    v8 = A[8];
    *(s32 *)(param_1 + 0xe8) = v8;
    return (u32)v8;
}
