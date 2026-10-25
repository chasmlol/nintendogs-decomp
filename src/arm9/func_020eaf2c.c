#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_propagation off
#pragma opt_loop_invariants off

extern u32 data_02144ccc[];
extern u32 data_02144cdc[];
extern u32 data_02144cec[];
extern u32 data_02144d00[];
extern u32 data_02144d10[];
extern u32 data_02144d24[];
extern u32 data_02144d38[];

extern void func_020bdd1c(u8 *a, u32 b);
extern void *func_020038b8(u32 a, u32 b);
extern void func_0205f050(void *a, u32 b, void *c, u32 d);
extern u32 func_0207df48(void *a);
extern void func_020737d8(u32 a, u32 *b);
extern void func_02073768(u32 a, u32 *b);
extern void func_02073828(u32 a, u32 *b);
extern void func_0209c5b0(u32 a);
extern void func_020eaeec(void);
extern void func_020ea928(void);
extern void func_020eaf28(void);
extern void func_020ea8d4(void);
extern void func_020ea848(void);
extern void func_020ea834(void);


void func_020eaf2c(u8 *param_1, u32 param_2)
{

    u8 acStack_50[68];
    u32 *puVar7;
    u32 iVar3;
    u32 iVar6;
    u32 uVar5;
    s32 i;
    u32 one;
    u8 *b;

    func_020bdd1c(param_1, 0x4f);
    *(void **)(param_1 + 0x1f4) = func_020eaeec;
    *(void **)(param_1 + 0x1f8) = func_020ea928;
    *(void **)(param_1 + 0x1f0) = func_020eaf28;
    *(void **)(param_1 + 0x20c) = func_020ea8d4;
    *(void **)(param_1 + 0x208) = func_020ea848;
    *(void **)(param_1 + 0x204) = func_020ea834;
    *(void **)(param_1 + 0x214) = func_020038b8(param_2, 700);
    puVar7 = *(u32 **)(param_1 + 0x214);
    uVar5 = *(u32 *)(param_1 + 0x1ec);
    func_0205f050(acStack_50, 0x40, data_02144ccc, uVar5);
    iVar3 = func_0207df48(acStack_50);
    puVar7[3] = iVar3;
    func_0205f050(acStack_50, 0x40, data_02144cdc, *(u32 *)(param_1 + 0x1ec));
    iVar3 = func_0207df48(acStack_50);
    puVar7[4] = iVar3;
    func_0205f050(acStack_50, 0x40, data_02144cec, *(u32 *)(param_1 + 0x1ec));
    iVar3 = func_0207df48(acStack_50);
    puVar7[5] = iVar3;
    func_0205f050(acStack_50, 0x40, data_02144d00, *(u32 *)(param_1 + 0x1ec));
    iVar3 = func_0207df48(acStack_50);
    puVar7[6] = iVar3;
    func_0205f050(acStack_50, 0x40, data_02144d10, *(u32 *)(param_1 + 0x1ec));
    iVar3 = func_0207df48(acStack_50);
    puVar7[7] = iVar3;
    func_0205f050(acStack_50, 0x40, data_02144d24, *(u32 *)(param_1 + 0x1ec));
    iVar3 = func_0207df48(acStack_50);
    puVar7[8] = iVar3;
    func_0205f050(acStack_50, 0x40, data_02144d38, *(u32 *)(param_1 + 0x1ec));
    iVar3 = func_0207df48(acStack_50);
    puVar7[9] = iVar3;
    func_020737d8(puVar7[6], puVar7 + 10);
    func_02073768(puVar7[7], puVar7 + 11);
    func_020737d8(puVar7[8], puVar7 + 12);
    func_02073828(puVar7[9], puVar7 + 13);
    i = 0;
    do {
        one = 1;
        b = (u8 *)puVar7 + i * 16;
        *(u32 *)(b + 0x38) = one;
        *(u16 *)(b + 0x3e) = 0;
        *(u16 *)(b + 0x40) = 0;
        *(u16 *)(b + 0x42) = 0;
        *(u16 *)(b + 0x44) = 0;
        *(u16 *)(b + 0x3c) = 1;
        i++;
    } while (i < 40);
    puVar7[0xae] = 0;
    *puVar7 = 0;
    func_0209c5b0((s32)(s16)*puVar7);
    *(s8 *)((u8 *)puVar7 + 8) = -1;
}
