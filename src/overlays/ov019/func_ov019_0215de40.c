#include "ctx.h"

typedef struct {
    u32 w[3];
} Vec3;

extern int func_ov019_0215cca8(int a);
extern int func_ov019_0215caa0(int a);
extern void func_ov019_0215ca88(int a, int *b);
extern void func_ov019_0215cb10(int a, int *b);
extern void func_02067e34(int *a, int *b, int *c);
extern int func_02067c30(int *a);
extern void func_01ff832c(u32 a, int *b, int *c, u32 *d);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_01ff89d0(u32 *a);
extern void func_ov019_0215dfec(u32 *a, u32 *b, u32 *c, int d);

void func_ov019_0215de40(u8 *param_1)
{
    int iVar1;
    int iVar2;
    int *piVar3;
    Vec3 *puVar4;
    int iStack_48[3];
    u32 uStack[9];
    int aiStack_18[3];

    iVar1 = func_ov019_0215cca8(*(s16 *)(param_1 + 0x2c));
    if (iVar1 == 0) {
        return;
    }
    iVar2 = func_ov019_0215caa0(iVar1);
    if (iVar2 == 0) {
        return;
    }
    piVar3 = *(int **)(param_1 + 0xac);
    *(Vec3 *)iStack_48 = *(Vec3 *)piVar3;
    func_ov019_0215ca88(iVar1, *(int **)(param_1 + 0xac));
    {
        u32 t2 = *(u32 *)(param_1 + 0x50);
        u32 t1 = *(u32 *)(param_1 + 0x4c);
        u32 t0 = *(u32 *)(param_1 + 0x48);
        uStack[0] = t0;
        uStack[1] = t1;
        uStack[2] = t2;
    }
    {
        u32 t5 = *(u32 *)(param_1 + 0x5c);
        u32 t4 = *(u32 *)(param_1 + 0x58);
        u32 t3 = *(u32 *)(param_1 + 0x54);
        uStack[3] = t3;
        uStack[4] = t4;
        uStack[5] = t5;
    }
    {
        u32 t8 = *(u32 *)(param_1 + 0x68);
        u32 t7 = *(u32 *)(param_1 + 0x64);
        u32 t6 = *(u32 *)(param_1 + 0x60);
        uStack[6] = t6;
        uStack[7] = t7;
        uStack[8] = t8;
    }
    func_ov019_0215cb10(iVar1, aiStack_18);
    func_02067e34(*(int **)(param_1 + 0xac), aiStack_18, aiStack_18);
    func_02067e34(iStack_48, *(int **)(param_1 + 0xac), iStack_48);
    iVar1 = func_02067c30(iStack_48);
    if (iVar1 > 0x148) {
        func_01ff832c(0xfffcdf38, iStack_48, aiStack_18, &uStack[3]);
        func_02067d04(&uStack[3], &uStack[6], &uStack[0]);
        func_02067d04(&uStack[0], &uStack[3], &uStack[6]);
        func_01ff89d0(&uStack[0]);
        func_01ff89d0(&uStack[3]);
        func_01ff89d0(&uStack[6]);
        piVar3 = *(int **)(param_1 + 0xac);
        {
            u32 *pq = (u32 *)((u8 *)piVar3 + 0xc);
            pq[0] = uStack[0];
            pq[1] = uStack[1];
            pq[2] = uStack[2];
            pq[3] = uStack[3];
            pq[4] = uStack[4];
            pq[5] = uStack[5];
            pq[6] = uStack[6];
            pq[7] = uStack[7];
            pq[8] = uStack[8];
        }
    }
    func_ov019_0215dfec((u32 *)(param_1 + 0x48), (u32 *)(*(u8 **)(param_1 + 0xac) + 0xc), (u32 *)(param_1 + 0x48), 0x100);
    puVar4 = *(Vec3 **)(param_1 + 0xac);
    *(Vec3 *)(param_1 + 0x3c) = *puVar4;
}
