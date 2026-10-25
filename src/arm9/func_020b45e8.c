#include "ctx.h"

extern u32 data_02159458;
extern u8 *func_020038b8(s32 *p, u32 n);
extern s32 func_02002e60(void);
extern s32 func_02002e58(s32 v);
extern void func_020a87a8(s32 *p);
extern void func_0211aa80(void);
extern void func_020a880c(void);
extern void func_020a7d14(s32 v);
extern void func_020a4e94(void);
extern void func_02002fd0(u32 *a, u32 b);
extern u32 func_02002e70(u32 a, u32 b);
extern void func_020a817c(u32 a, s32 b, s32 c);
extern void func_020a839c(s32 v);
extern void func_020a7c5c(s32 v);
extern void func_02097a58(s32 a, s32 b);
extern void func_020a8794(void);

u32 func_020b45e8(u8 *param_1)
{
    s32 k21;
    s32 bVar2;
    u32 *pa;
    u32 uVar4;
    u32 zero;
    s32 one;

    s16 uVar1;
    s32 iVar5;
    s32 *piVar6;
    u8 *puVar7;
    u32 uVar8;
    u32 local_48;
    u32 auStack_44[8];

    uVar1 = *(s16 *)(param_1 + 6);
    local_48 = 0;
    bVar2 = 1;
    iVar5 = func_02002e60();
    piVar6 = (s32 *)func_02002e58(iVar5);
    puVar7 = func_020038b8(piVar6, 0x2324);
    *(u16 *)puVar7 = 1;
    *(s16 *)(puVar7 + 2) = uVar1;
    *(u16 *)(puVar7 + 4) = 0;
    *(u8 **)&data_02159458 = puVar7;
    func_020a87a8(piVar6);
    func_0211aa80();
    uVar4 = (u32)func_020a4e94;

    pa = auStack_44;
    k21 = 21;
    zero = 0;
    one = 1;
    do {
        func_020a880c();
        func_020a7d14(*(s16 *)(param_1 + 6));
        func_02002fd0(pa, uVar4);
        uVar8 = func_02002e70((u32)pa, zero);
        *(u16 *)(*(vu32 *)&data_02159458) = 0;
        *(u16 *)((u8 *)(*(vu32 *)&data_02159458) + 4) = 0;
        if (uVar8 > 14) goto big;
        if (uVar8 >= 14) goto c14;
        if (uVar8 > 1) goto small2;
        if (uVar8 == 1) {
            bVar2 = zero;
        }
        goto endcase;
small2:
        if (uVar8 > 9) goto endcase;
        if (uVar8 < 6) goto endcase;
        if (uVar8 == 6) goto c6;
        if (uVar8 == 9) {
            bVar2 = zero;
            local_48 = one;
        }
        goto endcase;
big:
        if (uVar8 > 18) goto big2;
        if (uVar8 != 18) goto endcase;
        goto c18;
        goto endcase;
big2:
        if (uVar8 != 21) goto endcase;
        goto c21;
        goto endcase;
c6:
        func_020a817c(zero, *(s16 *)(param_1 + 6), *(s16 *)(param_1 + 8));
        func_02002fd0(pa, uVar4);
        func_02002e70((u32)pa, zero);
        goto endcase;
c14:
        func_020a839c(*(s16 *)(param_1 + 6));
        func_02002fd0(pa, uVar4);
        func_02002e70((u32)pa, zero);
        goto endcase;
c21:
        func_020a7c5c(*(s16 *)(param_1 + 6));
        func_02002fd0(pa, uVar4);
        func_02002e70((u32)pa, zero);
        *(u16 *)((u8 *)(*(vu32 *)&data_02159458) + 4) = one;
        goto endcase;
c18:
        func_02097a58(k21, 1);
endcase:
        ;
    } while (bVar2);
    func_020a8794();
    data_02159458 = 0;
    return local_48;
}
