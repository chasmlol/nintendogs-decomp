#include "ctx.h"

extern u8 *data_02159028;
extern u8 data_021408ec[];
extern s32 func_0207ceb0(s32 *a, s32 b);
extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_0200658c(u8 *p);
extern s32 func_02078214(s32 a);
extern void func_0207d018(s32 *a, s32 b);

u8 *func_0208f43c(s32 *param_1, s32 param_2)
{
    u8 *puVar1;
    u8 *puVar3;
    s32 *piVar4;
    s32 iVar2;

    piVar4 = *(s32 **)data_02159028;
    puVar3 = (u8 *)piVar4[0];
    puVar1 = NULL;
    while (puVar3 != NULL) {
        if (*(s32 *)(puVar3 + 8) == param_2) {
            puVar1 = puVar3;
            break;
        }
        puVar3 = (u8 *)func_0207ceb0(piVar4, (s32)puVar3);
    }
    if (puVar1 == NULL) {
        puVar1 = func_020038b8(param_1, 0x18);
        *(u32 *)puVar1 = (u32)data_021408ec;
        *(u16 *)(puVar1 + 4) = 0;
        *(u16 *)(puVar1 + 6) = 0;
        *(u32 *)(puVar1 + 8) = 0;
        *(u32 *)(puVar1 + 12) = 0;
        func_0200658c(puVar1 + 16);
        *(s32 *)(puVar1 + 8) = param_2;
        *(u32 *)(puVar1 + 12) = 0;
        if (param_2 != 0) {
            iVar2 = func_02078214(param_2);
            *(s32 *)(puVar1 + 12) = iVar2 + *(s32 *)(iVar2 + *(u16 *)(iVar2 + 14) + 12);
        }
        func_0207d018(piVar4, (s32)puVar1);
    }
    return puVar1;
}
