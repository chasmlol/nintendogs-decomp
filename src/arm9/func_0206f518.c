#include "ctx.h"

extern u8 *func_0206fd10(void);
extern s32 func_0206de58(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0206df24(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0206dc64(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0206debc(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0206dd08(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0206dbc4(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0206da60(u8 *a, u8 *b, s32 c);
extern s32 func_0206d7f8(u8 *a, u8 *b, s32 c);
extern void func_0206f134(u8 *a, u32 b, s32 c);

void func_0206f518(u8 *param_1, s32 param_2)
{
    u8 *piVar1;

    piVar1 = func_0206fd10();
    if (func_0206de58(piVar1, 0, param_1, param_2) != 0) {
        return;
    }
    if (func_0206df24(piVar1, 0, param_1, param_2) != 0) {
        return;
    }
    if (func_0206dc64(piVar1, 0, param_1, param_2) != 0) {
        return;
    }
    if (func_0206debc(piVar1, 0, param_1, param_2) != 0) {
        return;
    }
    if (func_0206dd08(piVar1, 0, param_1, param_2) != 0) {
        return;
    }
    if (func_0206dbc4(piVar1, 0, param_1, param_2) != 0) {
        return;
    }
    if (func_0206da60(piVar1, param_1, param_2) != 0) {
        return;
    }
    if (func_0206d7f8(piVar1, param_1, param_2) != 0) {
        return;
    }
    func_0206f134(param_1, 0xffff, 0);
}
