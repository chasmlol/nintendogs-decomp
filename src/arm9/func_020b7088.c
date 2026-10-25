#include "ctx.h"

typedef struct { u8 pad[0xd54]; s32 f; } T1;

extern s32 data_0215be48;
extern BOOL func_020ad77c(u32 p);
extern BOOL func_020ab4c0(u32 p);
extern void func_020ad7c8(u32 p, s32 v);
extern u32 func_020ad6fc(u32 p, s32 v);
extern BOOL func_020ad690(u32 p);
extern u32 func_020ad8f0(u32 p);

void func_020b7088(u32 param_1)
{
    u32 uVar2;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        func_020ad77c(param_1);
        return;
    case 1:
        if (func_020ab4c0(param_1) != 0) {
            return;
        }
        uVar2 = ((T1 *)((u8 *)data_0215be48 + 0x1000))->f + 1;
        switch (uVar2) {
        case 0:
            func_020ad7c8(param_1, 4);
            func_020ad6fc(param_1, 0);
            return;
        case 1:
            func_020ad7c8(param_1, 13);
            func_020ad6fc(param_1, 0);
            return;
        case 2:
        case 3:
        case 4:
        default:
            break;
        }
        break;
    case 2:
    case 3:
        break;
    case 4:
        if (func_020ad690(param_1) == 0) {
            return;
        }
        func_020ad8f0(param_1);
        return;
    default:
        break;
    }
}
