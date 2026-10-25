#include "ctx.h"

typedef struct { s32 x; s32 y; s32 z; } V3;
typedef struct { V3 a; V3 b; V3 c; s32 pad[4]; } SS;

extern u8 *data_027c0360;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_02027178(s32 a, s32 *b, s32 c);
extern void func_020beec0(u8 *a, s32 b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02066c08(s32 *a, s32 b, s32 c, s32 d);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern void func_020d345c(u8 *a, s32 b, s32 *c);
extern void func_0206c8d4(s32 *a, s32 *b);

void func_020c12e0(s32 param_1, s32 *param_2)
{
    u8 *iVar6;
    u32 iVar5;
    s32 iVar2;
    s32 uVar3;
    V3 f8;
    V3 ec;
    V3 e0;
    V3 d4;
    V3 c0;
    s32 aiStack_bc[12];
    V3 l8c;
    s32 aiStack_80[12];
    SS big;
    s32 iVar1;
    s32 t0, t1, t2;
    s32 w0;
    s32 w1;
    s32 w2;

    iVar5 = (u32)data_027c0360;
    iVar6 = *(u8 **)(iVar5 + 0x214);
    iVar1 = func_01ffdb08((s32)*(s16 *)(iVar5 + 0x98));
    iVar2 = 0;
    if (*(s32 *)(iVar6 + 0x1c) != 0) goto L3c;
    if (iVar1 != 0) {
        iVar2 = iVar1;
        goto L64;
    }
L3c:
    if (*(s32 *)(iVar6 + 0x1c) != 1) goto L64;
    if (*(s16 *)(iVar5 + 0x90) != 7) goto L64;
    if (iVar1 == 0) goto L64;
    iVar2 = func_01ffdb08((s32)*(s16 *)(iVar5 + 0x9a));
L64:

    if (iVar2 != 0) {
        uVar3 = func_02067898(0x0b33, 0x1000);
        func_02027178(iVar2, (s32 *)&big, 12);
        e0.x = big.c.x;
        e0.y = big.c.y;
        ec.x = big.a.x;
        ec.y = big.a.y;
        w2 = big.b.z;
        e0.z = big.c.z;
        ec.z = big.a.z;
        e0.x = -e0.x;
        e0.z = -e0.z;
        w1 = big.b.y;
        e0.y = -e0.y;
        w0 = big.b.x;
        func_020beec0((u8 *)iVar5, iVar2, (s32 *)&f8);
        func_01ff832c(0xfffff666, (s32 *)&ec, (s32 *)&f8, (s32 *)&f8);
        d4 = ec;
        d4.x = -d4.x;
        d4.y = -d4.y;
        d4.z = -d4.z;
        c0 = e0;
        c0.x = -c0.x;
        c0.y = -c0.y;
        c0.z = -c0.z;
        param_2[0] = c0.x;
        param_2[1] = c0.y;
        param_2[2] = c0.z;
        param_2[3] = w0;
        param_2[4] = w1;
        param_2[5] = w2;
        param_2[6] = d4.x;
        param_2[7] = d4.y;
        param_2[8] = d4.z;
        func_02066c08(aiStack_bc, uVar3, uVar3, uVar3);
        func_01ff810c(aiStack_bc, param_2, param_2);
        t2 = f8.z;
        t1 = f8.y;
        t0 = f8.x;
        param_2[9] = t0;
        param_2[10] = t1;
        param_2[11] = t2;
        return;
    }
    uVar3 = func_02067898(0x0b33, 0x1000);
    func_020d345c(iVar6, 3, (s32 *)&l8c);
    func_0206c8d4((s32 *)(iVar6 + 0x80), param_2);
    func_02066c08(aiStack_80, uVar3, uVar3, uVar3);
    func_01ff810c(aiStack_80, param_2, param_2);
    t2 = l8c.z;
    t1 = l8c.y;
    t0 = l8c.x;
    param_2[9] = t0;
    param_2[10] = t1;
    param_2[11] = t2;
}
