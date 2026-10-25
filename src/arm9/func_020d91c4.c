#include "ctx.h"

void func_020d9340(s32 *a, s32 b);
s32 func_020be21c(void);
s32 func_020be20c(void);
void func_020cb4c8(s32 *a, s32 *b, s32 c);
void func_020cac38(s32 *a, s32 *b, s32 c);
void func_020cb2a4(s32 *a, s32 *b, s32 c);
void func_020cb080(s32 *a, s32 *b, s32 c);
void func_020cae5c(s32 *a, s32 *b, s32 c);
void func_020d0564(s32 *a, s32 *b, s32 *c, s32 d, s32 e, s32 f);
void func_020c9124(s32 *a, s32 b, u16 c, s32 d);
void func_020d075c(s32 *a, s32 b);

extern s32 *data_02159428;
extern s32 data_021449e8;
extern s32 data_021449c4;

void func_020d91c4(s32 *param_1, s32 param_2)
{
    s32 iVar1;
    s32 iVar2;
    struct { s32 a; s32 b; s32 c; s32 arr[11]; } loc;

    s32 kind = param_1[0];
    switch (kind) {
    case 0:
        func_020d9340(param_1, param_2);
        break;
    case 1:
        iVar1 = func_020be21c();
        loc.b = func_020be20c();
        loc.a = 0;
        loc.c = iVar1;
        switch (param_1[0x11]) {
        case 0:
            func_020cb4c8(loc.arr, &loc.a, *(s16 *)((u8 *)param_1 + 0x42));
            break;
        case 1:
            func_020cac38(loc.arr, &loc.a, *(s16 *)((u8 *)param_1 + 0x42));
            break;
        case 2:
            func_020cb2a4(loc.arr, &loc.a, *(s16 *)((u8 *)param_1 + 0x42));
            break;
        case 3:
            func_020cb080(loc.arr, &loc.a, *(s16 *)((u8 *)param_1 + 0x42));
            break;
        case 4:
            func_020cae5c(loc.arr, &loc.a, *(s16 *)((u8 *)param_1 + 0x42));
            break;
        }
        func_020d0564(param_1 + 1, param_1 + 1, loc.arr, 0x200, 0x200, 0x100);
        break;
    case 2:
        if (*(u16 *)((u8 *)data_02159428 + 6) != 0x12) {
            iVar2 = data_021449e8;
            iVar1 = 0x19a;
        } else {
            iVar1 = 0xcd;
            iVar2 = data_021449c4;
        }
        if (param_1[0xd] < iVar2) {
            param_1[0xd] = param_1[0xd] + iVar1;
        }
        func_020c9124(param_1 + 1, param_1[0xd], *(u16 *)(param_1 + 0xe), param_1[0xf]);
        param_1[6] = param_1[6] + 0x14000;
        break;
    }
    func_020d075c(param_1 + 1, param_2);
    return;
}
