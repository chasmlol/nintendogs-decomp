#include "ctx.h"

extern int data_ov021_0215c660;
extern int data_ov021_0215c66c;
extern int data_ov021_0215c678;
extern u32 *func_020038b8(int *a, u32 b);
extern u32 *func_02006cc4(int *a, u32 b);
extern int func_0208c5b4(int *a);
extern u32 *func_02006be0(int a);
extern u32 *func_02006bac(int a);
extern u32 *func_02006b78(int a);
extern u32 func_02073708(u32 *a, u32 b);

typedef struct { u32 a; u32 b; } P2;

u32 *func_ov021_0215c584(int *param_1)
{
    u32 *puVar1;
    u32 *puVar2;
    int iVar3;
    u32 uVar5;
    u32 uVar7;

    puVar1 = func_020038b8(param_1, 0x4c);
    puVar1[0] = 1;
    puVar1[1] = 0;
    puVar1[2] = (u32)func_02006cc4(param_1, 0x80);
    iVar3 = func_0208c5b4(&data_ov021_0215c660);
    puVar1[3] = (u32)func_02006be0(iVar3);
    iVar3 = func_0208c5b4(&data_ov021_0215c66c);
    puVar1[4] = (u32)func_02006bac(iVar3);
    iVar3 = func_0208c5b4(&data_ov021_0215c678);
    puVar1[5] = (u32)func_02006b78(iVar3);
    puVar1[6] = func_02073708((u32 *)puVar1[3], 3);
    puVar1[7] = 0x80000;
    puVar1[8] = 0x60000;
    iVar3 = 0;
    do {
        *(P2 *)(puVar1 + (u32)iVar3 * 2 + 9) = *(P2 *)(puVar1 + 7);
        iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    return puVar1;
}
