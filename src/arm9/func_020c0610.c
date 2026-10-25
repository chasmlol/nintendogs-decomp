#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern s32 data_02142970;
extern s32 data_02142978;
extern s32 data_02142974;
extern s32 func_02044ca0(s32 a);
extern void func_020be4b4(s32 a, s32 *b, s32 c);
extern void func_020ab02c(s32 a, s32 *b, s32 *c);
extern void func_020c0b34(s32 a, s32 *b, s32 *c);
extern void func_020c0948(s32 a);
extern void func_020c0778(s32 a);
extern void func_020bfb2c(s32 a, s32 *b, s32 c, s32 d, s32 e, s32 *f);
extern void func_020d3410(u8 *a, s32 b, s32 *c);
extern void func_020d3408(u8 *a, s32 b);
extern s32 func_02067c30(s32 *a);
extern void func_0209d430(s32 *a, s32 b, s32 c);
extern void func_020c5fbc(s32 a);
extern void func_02044b58(void);

void func_020c0610(s32 param_1)
{
    s32 iVar1;
    u8 *iVar2;
    s32 aiStack_38[3];
    s32 aiStack_2c[3];
    s32 aiStack_20[4];

    iVar1 = func_02044ca0((s32)*(s16 *)(param_1 + 156));
    iVar2 = *(u8 **)(param_1 + 0x214);
    func_020be4b4(param_1, aiStack_2c, 0x8000);
    func_020ab02c(iVar1, aiStack_38, aiStack_2c);
    if (*(s32 *)(iVar2 + 0x1c) == 0) {
        func_020c0b34(param_1, aiStack_38, (s32 *)0);
    } else {
        func_020c0b34(param_1, (s32 *)0, aiStack_38);
    }
    func_020c0948(param_1);
    func_020c0778(param_1);
    if (((*(u16 *)(data_02159444 + 0x84) & 1) != 0) && (*(s32 *)(data_02159468 + 0x24) == 0)) {
        return;
    }
    func_020bfb2c(iVar1, aiStack_38, data_02142978, data_02142974, data_02142970, aiStack_20);
    if (*(s32 *)(iVar2 + 0x1c) == 0) {
        func_020d3410(iVar2, 0, aiStack_20);
        func_020d3408(iVar2, 0);
    } else {
        func_020d3410(iVar2, 3, aiStack_20);
        func_020d3408(iVar2, 1);
    }
    iVar1 = func_02067c30(aiStack_20);
    func_0209d430((s32 *)(param_1 + 400), 4, iVar1);
    func_020c5fbc(param_1);
    func_02044b58();
}
