#include "ctx.h"

typedef struct { u8 pad[4]; s32 f1; s32 f2; } T2;
extern s32 func_ov019_0215cca8(s32 a);
extern void func_ov019_0215ca28(s32 a, s32 *b);
extern s32 func_ov019_0215caa0(s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_01ff89d0(s32 *a);
extern void func_01ff8058(s32 *a, s32 *b, s32 *c);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);

void func_ov019_0215e7ec(u8 *param_1)
{
    s32 blk[12];
    s32 iVar1;
    s32 *piVar2;
    s32 t6;

    iVar1 = func_ov019_0215cca8(*(s16 *)(param_1 + 0x2c));
    if (iVar1 == 0) {
        return;
    }
    func_ov019_0215ca28(iVar1, blk);
    t6 = blk[2] - *(s32 *)(param_1 + 0x44);
    blk[9] = blk[0] - *(s32 *)(param_1 + 0x3c);
    blk[10] = 0;
    blk[11] = t6;
    blk[6] = 0;
    blk[7] = 0x1000;
    blk[8] = 0;
    func_02067d04(&blk[6], &blk[9], &blk[3]);
    func_01ff89d0(&blk[3]);
    func_01ff89d0(&blk[9]);
    *(s32 *)(param_1 + 0x48) = blk[3];
    *(s32 *)(param_1 + 0x4c) = blk[4];
    *(s32 *)(param_1 + 0x50) = blk[5];
    *(s32 *)(param_1 + 0x54) = blk[6];
    *(s32 *)(param_1 + 0x58) = blk[7];
    *(s32 *)(param_1 + 0x5c) = blk[8];
    *(s32 *)(param_1 + 0x60) = blk[9];
    *(s32 *)(param_1 + 0x64) = blk[10];
    *(s32 *)(param_1 + 0x68) = blk[11];
    iVar1 = func_ov019_0215caa0(iVar1);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = *(s32 *)(param_1 + 0xac);
    *(s32 *)(iVar1 + 0x18) = 0;
    ((T2 *)(iVar1 + 0x18))->f1 = 0x1800;
    ((T2 *)(iVar1 + 0x18))->f2 = 0;
    iVar1 = *(s32 *)(param_1 + 0xac);
    *(s32 *)(iVar1 + 0x24) = 0xfffffa00;
    ((T2 *)(iVar1 + 0x24))->f1 = 0x1800;
    ((T2 *)(iVar1 + 0x24))->f2 = 0;
    iVar1 = *(s32 *)(param_1 + 0xac);
    *(s32 *)(iVar1 + 0x30) = 0x600;
    ((T2 *)(iVar1 + 0x30))->f1 = 0x1800;
    ((T2 *)(iVar1 + 0x30))->f2 = 0;
    piVar2 = (s32 *)(*(s32 *)(param_1 + 0xac) + 0x18);
    func_01ff8058(piVar2, (s32 *)(param_1 + 0x48), piVar2);
    piVar2 = (s32 *)(*(s32 *)(param_1 + 0xac) + 0x24);
    func_01ff8058(piVar2, (s32 *)(param_1 + 0x48), piVar2);
    piVar2 = (s32 *)(*(s32 *)(param_1 + 0xac) + 0x30);
    func_01ff8058(piVar2, (s32 *)(param_1 + 0x48), piVar2);
    piVar2 = (s32 *)(*(s32 *)(param_1 + 0xac) + 0x18);
    func_02067e68((s32 *)(param_1 + 0x3c), piVar2, piVar2);
    piVar2 = (s32 *)(*(s32 *)(param_1 + 0xac) + 0x24);
    func_02067e68((s32 *)(param_1 + 0x3c), piVar2, piVar2);
    piVar2 = (s32 *)(*(s32 *)(param_1 + 0xac) + 0x30);
    func_02067e68((s32 *)(param_1 + 0x3c), piVar2, piVar2);
    *(u16 *)(param_1 + 0x1e) = 1;
}
