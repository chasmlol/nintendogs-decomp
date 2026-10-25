#include "ctx.h"

extern s32 data_0213e4ec;
extern u8 *func_0206fd10(void);
extern s32 func_0206de58(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206df24(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206dc64(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206debc(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206da60(u8 *p, u16 *a, u32 b);
extern s32 func_0206d7f8(u8 *p, u16 *a, u32 b);
extern s32 func_0206dd08(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206dbc4(u8 *p, s32 x, u16 *a, u32 b);
extern void func_0206f134(u16 *a, u32 v, s32 z);

s32 func_0206f6a4(u16 *param_1, u32 param_2)
{
    u8 *p5;
    s32 x;
    s32 i;

    p5 = func_0206fd10();
    x = data_0213e4ec;
    for (;;) {
        x = x + 1;
        if (x > 15) {
            x = 1;
        }
        if (func_0206de58(p5, x, param_1, param_2)) {
            data_0213e4ec = x;
            return;
        }
        if (func_0206df24(p5, x, param_1, param_2)) {
            data_0213e4ec = x;
            return;
        }
        if (func_0206dc64(p5, x, param_1, param_2)) {
            data_0213e4ec = x;
            return;
        }
        if (func_0206debc(p5, x, param_1, param_2)) {
            data_0213e4ec = x;
            return;
        }
        if (x == data_0213e4ec) {
            break;
        }
    }
    if (func_0206da60(p5, param_1, param_2)) {
        return;
    }
    if (func_0206d7f8(p5, param_1, param_2)) {
        return;
    }
    x = data_0213e4ec;
    for (;;) {
        x = x + 1;
        if (x > 15) {
            x = 1;
        }
        if (func_0206dd08(p5, x, param_1, param_2)) {
            data_0213e4ec = x;
            return;
        }
        if (x == data_0213e4ec) {
            break;
        }
    }
    for (i = 1; i < 16; i++) {
        if (func_0206dbc4(p5, i, param_1, param_2)) {
            return;
        }
    }
    func_0206f134(param_1, 0xfffe, 0);
}
