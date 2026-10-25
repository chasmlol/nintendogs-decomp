#include "ctx.h"

extern s32 data_021517f8;
extern s16 data_0212ad78[];
extern u32 func_0208a668(void);
extern u8 *func_0207ceb0(s32 a, s32 b);
extern BOOL func_02089e78(s32 a);
extern void func_020735d4(u8 *p);
extern s32 func_020735ec(u8 *p);
extern void func_02089b0c(u32 a, s32 b);
extern BOOL func_020735bc(u8 *p);
extern void func_0207024c(u8 *p);
extern void func_02089b68(u32 a);
extern void func_02070140(u8 *p);

void func_020705b8(void)
{
    u32 uVar6;
    u8 *puVar7;
    u8 *puVar8;
    s32 iVar9;
    s32 iVar10;
    s32 sVar1;
    s32 sVar2;
    s32 sVar3;
    BOOL bVar5;

    uVar6 = func_0208a668();
    puVar7 = func_0207ceb0((s32)&data_021517f8, 0);
    if (puVar7 == 0) {
        return;
    }
    do {
        puVar8 = func_0207ceb0((s32)&data_021517f8, (s32)puVar7);
        if (*(u8 *)(puVar7 + 0x2d) == 0) {
            bVar5 = func_02089e78(*(s32 *)(puVar7 + 0x30));
            if (bVar5) {
                *(u8 *)(puVar7 + 0x2d) = 1;
            }
        }
        if (*(u8 *)(puVar7 + 0x2d) == 0) {
            goto body;
        }
        if ((uVar6 & (1 << *(u8 *)(puVar7 + 0x3c))) != 0) {
            goto body;
        }
        func_02070140(puVar7);
        goto next;
body:
        func_020735d4(puVar7 + 28);
        sVar1 = data_0212ad78[*(u8 *)(puVar7 + 0x41)];
        sVar2 = data_0212ad78[*(u8 *)(puVar7 + 0x40)];
        sVar3 = data_0212ad78[*(u8 *)(*(s32 *)(puVar7 + 4) + 0x20)];
        iVar9 = func_020735ec(puVar7 + 28);
        iVar10 = data_0212ad78[iVar9 >> 8] + (sVar3 + (sVar2 + sVar1));
        if (iVar10 < -723) {
            iVar10 = -723;
        } else if (iVar10 > 0) {
            iVar10 = 0;
        }
        if (iVar10 != *(s16 *)(puVar7 + 0x3e)) {
            func_02089b0c(*(u8 *)(puVar7 + 0x3c), iVar10);
            *(s16 *)(puVar7 + 0x3e) = (s16)iVar10;
        }
        if (*(u8 *)(puVar7 + 0x2c) == 2) {
            bVar5 = func_020735bc(puVar7 + 28);
            if (bVar5) {
                func_0207024c(puVar7);
            }
        }
        if (*(u8 *)(puVar7 + 0x2f) != 0) {
            func_02089b68(*(u8 *)(puVar7 + 0x3c));
            *(u8 *)(puVar7 + 0x2f) = 0;
        }
next:
        puVar7 = puVar8;
    } while (puVar8 != 0);
}
