#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02159468;
extern u32 func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_020be4b4(u8 *p, u32 *a, u32 b);
extern void func_020ab02c(u32 a, u32 *b, u32 *c);
extern void func_020beec0(u8 *p, s32 a, u32 *b);
extern void func_020c0b34(u8 *p, u32 *a, u32 *b);
extern void func_020c0778(u8 *p);
extern s32 func_020341cc(s32 a);
extern s32 func_020341b4(s32 a);

u32 func_020c0318(u8 *param_1)
{
    u32 aiStack_38[3];
    u32 aiStack_2c[3];
    u32 aiStack_20[3];
    u8 *iVar4;
    s32 iVar1;
    s32 iVar2;
    s32 uVar3;
    iVar4 = *(u8 **)(param_1 + 0x214);
    iVar1 = func_02044ca0(*(s16 *)(param_1 + 156));
    iVar2 = func_01ffdb08(*(s16 *)(param_1 + 152));
    func_020be4b4(param_1, aiStack_20, 0x8000);
    func_020ab02c(iVar1, aiStack_38, aiStack_20);
    func_020beec0(param_1, iVar2, aiStack_2c);
    if (*(u32 *)(iVar4 + 0x1c) == 0) {
        func_020c0b34(param_1, aiStack_38, aiStack_2c);
    } else {
        func_020c0b34(param_1, aiStack_2c, aiStack_38);
    }
    func_020c0778(param_1);
    if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 1) == 0) {
        goto RET1;
    }
    if (*(u32 *)(*(u8 **)&data_02159468 + 0x24) == 0) {
        goto C8;
    }
RET1:
    return 1;
C8:
    uVar3 = func_020341cc(iVar2);
    if (uVar3 != 0) {
        goto ZERO;
    }
    uVar3 = func_020341b4(iVar2);
    if (uVar3 != 0) {
        goto ZERO;
    }
    return 2;
ZERO:
    return 0;
}
