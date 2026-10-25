#include "ctx.h"

extern s32 data_0215be48;
extern void func_021127b8(s32 a, s32 b, s32 c);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_020fcf48(void);
extern void func_02111b3c(void);
extern s32 func_02111b58(void);

void func_0211c3c0(s32 *param_1)
{
    if (param_1[2] != 0) {
        param_1[3] = 6;
        func_021127b8(2, 0, 0);
        func_021127b8(2, 2, 0);
        func_02112798(2, 0, 1);
        func_02112798(2, 2, 1);
        func_020fcf48();
        return;
    }
    if (*(s32 *)((u8 *)data_0215be48 + 0xbc) == 0x17 && func_02111b58() == 0) {
        return;
    }
    func_02111b3c();
    func_02112798(2, 2, 1);
    if (param_1[3] == 0) {
        goto blockA;
    }
    if (param_1[3] == 1) {
        goto blockB;
    }
    return;
blockA:
    param_1[0] = param_1[0] + 1;
    if (param_1[0] > 16) {
        func_021127b8(2, 2, 0);
        func_021127b8(2, 0, 1);
        func_02112798(2, 0, 1);
        param_1[0] = 0;
        param_1[3] = 1;
    }
    return;
blockB:
    param_1[0] = param_1[0] + 1;
    if (param_1[0] > 16) {
        func_021127b8(2, 0, 0);
        param_1[0] = 0;
        param_1[3] = 2;
        func_020fcf48();
    }
    return;
}
