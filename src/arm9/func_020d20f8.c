#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_020bcf08(s32 a);
extern void func_020be1d8(s32 a);
extern void func_020cf9c8(u32 p, s32 a, s32 b, s32 c);

void func_020d20f8(u32 param_1)
{
    s32 iVar1;

    iVar1 = func_020bcf08((s32)*(s16 *)(data_02159444 + 0x7c));
    switch (iVar1) {
    case 11:
        func_020be1d8(1);
        func_020cf9c8(param_1, 0x15, -1, 0);
        return;
    case 12:
        func_020be1d8(1);
        func_020cf9c8(param_1, 3, -1, 0);
        return;
    }
}
