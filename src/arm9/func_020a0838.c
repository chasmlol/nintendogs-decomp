#include "ctx.h"

extern u32 data_021592b4;
extern u32 data_02141fb8;
extern u32 data_02159074;
extern u32 data_021592bc;
extern u8 func_020a36c0(int a);
extern u32 func_020708d0(int *a);
extern void func_02070c18(int *a, u32 b);
extern void func_0207307c(int *a, u32 b);
extern void func_02070ac8(int *a, int b, int c);

void func_020a0838(int param_1, u32 param_2)
{
    u32 uVar3;
    u32 uVar4;
    u8 *puVar1;
    u8 bVar2;
    int iVar5;
    int *piVar6;

    puVar1 = (u8 *)&data_021592b4;
    iVar5 = *(int *)(puVar1 + 0x14);
    *(u16 *)puVar1 = (u16)param_1;
    *(u32 *)(puVar1 + 0x18) = param_2;
    if (iVar5 != -1) {
        bVar2 = func_020a36c0(param_1);
        uVar3 = (u32)bVar2;
        piVar6 = (int *)(puVar1 + 8);
        if ((*(int *)(puVar1 + 8) != 0) && (uVar4 = func_020708d0(piVar6), uVar3 != uVar4)) {
            func_02070c18(piVar6, data_02141fb8);
            func_0207307c(piVar6, uVar3);
        } else {
            if ((*piVar6 == 0) && (uVar3 != 0xff)) {
                func_0207307c(piVar6, uVar3);
            }
        }
    }
    if (*(int *)((u8 *)&data_02159074 + 0x1c) != 0) {
        if (data_021592bc != 0) {
            func_02070ac8((int *)&data_021592bc, 0, 0);
        }
    }
}
