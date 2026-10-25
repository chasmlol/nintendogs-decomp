#include "ctx.h"

extern int data_021592ac;
extern int data_021592e4;
extern int data_021592b4;
extern int data_021592b0;
extern int data_021592a8;
extern void func_02070b48(u32 a);

void func_020a26d0(void)
{
    int iVar1;
    u16 *puVar2;
    int iVar3;
    int iVar5;
    u32 *puVar4;

    iVar1 = (int)&data_021592e4;
    puVar2 = (u16 *)&data_021592b4;
    func_02070b48((u32)&data_021592ac);
    func_02070b48((u32)&data_021592b0);
    *(u16 *)&data_021592a8 = 100;
    puVar4 = (u32 *)(iVar1 + 0x28);
    iVar5 = 0;
    do {
        *(u16 *)(iVar1 + iVar5 * 2) = 0;
        iVar3 = iVar1 + iVar5 * 2;
        *(u16 *)(iVar3 + 8) = 0;
        *(u16 *)(iVar3 + 0x10) = 0x7f;
        func_02070b48((u32)puVar4);
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
        puVar4 = puVar4 + 1;
    } while (iVar5 < 4);
    *(u16 *)(iVar1 + 0x18) = 0;
    *(u16 *)(iVar1 + 0x1a) = 0;
    *(u16 *)(iVar1 + 0x1c) = 0;
    *(u16 *)(iVar1 + 0x1e) = 0;
    *(u32 *)(iVar1 + 0x20) = 0;
    *(u32 *)(iVar1 + 0x24) = 0;
    func_02070b48((u32)(iVar1 + 0x38));
    func_02070b48((u32)(puVar2 + 4));
    *puVar2 = 1;
    *(u32 *)(puVar2 + 10) = 0xffffffff;
    iVar5 = 0;
    *(u32 *)(puVar2 + 12) = 0;
    *(u32 *)(puVar2 + 14) = 0;
    puVar2[16] = 0;
    *(u32 *)(puVar2 + 18) = 0;
    *(u32 *)(puVar2 + 20) = 0;
    *(u32 *)(puVar2 + 22) = 0;
    puVar4 = (u32 *)(puVar2 + 6);
    do {
        func_02070b48((u32)puVar4);
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
        puVar4 = puVar4 + 1;
    } while (iVar5 < 2);
    ((s16 *)puVar2)[1] = -1;
}
