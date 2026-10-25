#include "ctx.h"

extern s32 data_02142964;
extern s32 data_02142960;
extern s32 data_02142984;
extern s32 data_0214297c;
extern s32 data_02142988;

extern void func_020d33a8(u8 *p, s32 a);
extern void func_020d33b8(u8 *p, s32 a, u32 *b);
extern void func_020d3408(u8 *p, s32 a);
extern void func_020d3354(u8 *p);
extern void func_020d30d4(u8 *p, s32 a, s32 b);
extern s32 func_020d2fac(u8 *p, s32 a, s32 b);
extern void func_020d3428(u8 *p, s32 a, s32 *b);
extern s32 func_02067c30(s32 *a);
extern void func_0209d430(u8 *p, s32 a, s32 b);
extern u16 func_020c8164(u32 a, u32 b);
extern s32 func_020d2ee8(u8 *p, s32 a, s32 b);
extern void func_020d31e8(u8 *p, s32 a);
extern void func_020d2978(u8 *p);
extern void func_020d345c(u8 *p, s32 a, u32 *b);

void func_020c0b34(u8 *param_1, u32 *param_2, u32 *param_3)
{
    u8 *piVar1;
    s32 iVar2;
    s16 i;
    s32 aiStack_30[3];
    s32 aiStack_24[3];

    piVar1 = *(u8 **)(param_1 + 0x214);
    i = 0;
    do {
        func_020d33a8(piVar1, i);
        i = (s16)(i + 1);
    } while (i < 4);
    if (param_2 != 0 && param_3 != 0) {
        func_020d33b8(piVar1, 0, param_2);
        func_020d33b8(piVar1, 3, param_3);
        func_020d3408(piVar1, 2);
    } else if (param_2 != 0) {
        func_020d33b8(piVar1, 0, param_2);
        func_020d3408(piVar1, 0);
    } else {
        if (param_3 != 0) {
            func_020d33b8(piVar1, 3, param_3);
            func_020d3408(piVar1, 1);
        }
    }
    func_020d3354(piVar1);
    func_020d30d4(piVar1, data_02142964, data_02142960);
    iVar2 = func_020d2fac(piVar1, data_02142984, data_0214297c);
    if (iVar2 != 0) {
        u8 *pp = *(u8 **)(param_1 + 0x214);
        s32 fld = *(s16 *)(param_1 + 0x90);
        if (fld == 1) {
            func_020d3428(pp, 2, aiStack_30);
            iVar2 = func_02067c30(aiStack_30);
            func_0209d430(param_1 + 400, 0, iVar2);
        }
    }
    iVar2 = func_020c8164(*(u16 *)(param_1 + 0xa0), 0x1000);
    iVar2 = func_020d2ee8(piVar1, data_02142984, iVar2);
    if (iVar2 != 0) {
        u8 *pp2 = *(u8 **)(param_1 + 0x214);
        s32 fld2 = *(s16 *)(param_1 + 0x90);
        if (fld2 == 1) {
            func_020d3428(pp2, 2, aiStack_24);
            iVar2 = func_02067c30(aiStack_24);
            func_0209d430(param_1 + 400, 1, iVar2);
        }
    }
    func_020d31e8(piVar1, 0);
    func_020d3354(piVar1);
    func_020d2978(piVar1);
    func_020d31e8(piVar1, data_02142988);
    func_020d345c(piVar1, 2, (u32 *)(param_1 + 0xbc));
    func_020d3428(piVar1, 2, (s32 *)(param_1 + 0xb0));
}
