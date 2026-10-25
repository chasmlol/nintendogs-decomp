#include "ctx.h"

typedef struct { s32 a; s32 b; } Pair2;

typedef struct {
    s32 a6c;
    s32 a68;
    s32 arr[8];
    s32 a44;
    s32 a40;
    u32 pad[8];
} Frame;

extern void func_02088364(s32 *a);
extern s32 func_020880e0(s32 *a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_02087e90(s32 *a, s32 b, s32 c);
extern void func_02087fcc(s32 *a);
extern void func_02088d90(s32 *a, u8 *p);
extern s32 func_02088064(s32 *a, Pair2 b);

u32 func_02088c80(u8 *param_1, s32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    Frame f;
    s32 iVar1;
    u32 k;
    u32 s5;
    u32 s6;

    if (param_2 == 0) {
        s6 = param_6;
        s5 = param_5;
    } else {
        s6 = param_8;
        s5 = param_7;
    }
    k = (u32)(param_3 * 0x20);
    if (k >= s6) {
        return 0;
    }
    func_02088364(f.arr);
    iVar1 = func_020880e0(f.arr, param_4, s5 + k, s5 + s6, -1);
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02087e90(f.arr, (s32)param_1, 0x20);
    if (iVar1 != 0x20) {
        func_02087fcc(f.arr);
        return 0;
    }
    func_02087fcc(f.arr);
    *(s32 *)(param_1 + 0x20) = param_2;
    func_02088d90(&f.a6c, param_1);
    iVar1 = func_02088064(f.arr, *(Pair2 *)&f.a6c);
    if (iVar1 == 0) {
        return 0;
    }
    *(s32 *)(param_1 + 0x24) = f.a44;
    *(s32 *)(param_1 + 0x28) = f.a40 - f.a44;
    func_02087fcc(f.arr);
    return 1;
}
