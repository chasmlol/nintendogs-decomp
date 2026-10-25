#include "ctx.h"



extern s32 func_01ffdb08(s32 v);
extern u32 *func_0202817c(s32 v);
extern s32 func_020953bc(u32 v);
extern void func_021128a8(s32 a, s32 b, s32 c);
extern void func_02117a58(u32 *p, s32 a, u16 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
extern void func_02116c2c(void);
extern void func_02116c0c(void);
extern void func_02116c08(void);
extern void func_02116bec(void);
extern void func_02116bd0(void);
extern void func_02116b9c(void);
extern void func_02116b68(void);
extern void func_02116b64(void);
extern void func_02116b30(void);
extern void func_02116afc(void);

void func_02116800(u8 *param_1)
{
    s32 bVar1;
    s32 uInit7;
    s32 uInit6;
    s32 zC;
    s32 three;
    s32 iVar8;
    s32 uVar7;
    s32 uVar6;
    u32 *puVar5;
    u32 *puVar4;
    s32 iVar3;
    s32 t0;

    func_02117a58((u32 *)(param_1 + 0x18), 2, 0xffff, 0, 0, 0, 1, 2, 2, 10, 10);
    *(void **)(param_1 + 0x40) = (void *)func_02116c2c;
    *(void **)(param_1 + 0x44) = (void *)func_02116c0c;
    *(void **)(param_1 + 0x48) = (void *)func_02116c08;
    *(void **)(param_1 + 0x4c) = (void *)func_02116bec;
    *(void **)(param_1 + 0x50) = (void *)func_02116bd0;
    func_02117a58((u32 *)(param_1 + 0x54), 2, 0xffff, 0, 9, 10, 0, 0, 0, 10, 10);
    *(void **)(param_1 + 0x7c) = (void *)func_02116b9c;
    *(void **)(param_1 + 0x80) = (void *)func_02116b68;
    *(void **)(param_1 + 0x84) = (void *)func_02116b64;
    *(void **)(param_1 + 0x88) = (void *)func_02116b30;
    *(void **)(param_1 + 0x8c) = (void *)func_02116afc;
    func_02117a58((u32 *)(param_1 + 0x90), 2, 0x13, 1, 9, 10, 1, 2, 2, 3, 0);
    iVar8 = 0;
    zC = 0;
    three = 3;
    uInit7 = 4;
    puVar5 = (u32 *)(param_1 + 0xcc);
    puVar4 = (u32 *)(param_1 + 0x180);
    uInit6 = 5;
    do {
        uVar7 = uInit7;
        uVar6 = uInit6;
        bVar1 = zC;
        iVar3 = func_01ffdb08((s16)iVar8);
        if (iVar3 != 0) {
            iVar3 = (s32)func_0202817c(iVar3);
            if ((*(u32 *)(iVar3 + 0x640) == 0xffff && *(u32 *)(iVar3 + 0x644) == 0xffff) || func_020953bc(iVar3) == 0) {
                bVar1 = 1;
            }
        }
        if (bVar1) {
            uVar7 = 2;
            uVar6 = three;
            func_021128a8(2, (u16)(iVar8 + 3), 2);
            func_021128a8(2, (u16)(iVar8 + 0x14), 2);
        }
        t0 = 0;
        func_02117a58(puVar5, 2, (u16)(iVar8 + 3), 1, uVar7, uVar6, t0, t0, t0, 10, 10);
        t0 = 0;
        func_02117a58(puVar4, 2, (u16)(iVar8 + 0x14), 1, uVar7, uVar6, t0, t0, t0, 10, 10);
        puVar5 = puVar5 + 0xf;
        puVar4 = puVar4 + 0xf;
        iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
}
