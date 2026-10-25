#include "ctx.h"

extern s32 func_020ab5dc(void);
extern void func_02097b94(int a, int b, int c, int d, int e);
extern s32 func_020bcf08(int a);
extern s32 func_020af770(int a);
extern s32 func_020af820(int a, int b);
extern s32 func_020aef1c(int a, int b);
extern void func_02093dd4(int a);
extern void func_020ad7c8(int a, int b);
extern void func_020af7f4(int a);
extern void func_020af62c(void);
extern void func_020ad6fc(int a, int b);

#define SET_STATE(p, v, code) \
    do { \
        *(s16 *)((p) + 0x7c) = (v); \
        *(s16 *)((p) + 0x2e) = 2; \
        *(s16 *)((p) + 0x30) = 0; \
        *(s16 *)((p) + 0x100) = (code); \
    } while (0)

#define IDLE(p) \
    do { \
        *(s16 *)((p) + 0x2a) = 1; \
        func_02097b94(0, 0x44e, 0, 0, 0); \
    } while (0)

void func_020aebbc(int param_1, u32 param_2)
{
    s32 iVar3;
    int flag;

    switch ((s32)param_2) {
    case -1:
        return;
    case 60:
    case 61:
        if (func_020ab5dc() != 0) {
            SET_STATE(param_1, (s16)param_2, 8);
            return;
        }
        IDLE(param_1);
        return;
    case 62:
    case 63:
        if (func_020ab5dc() != 0) {
            SET_STATE(param_1, (s16)param_2, 9);
            return;
        }
        IDLE(param_1);
        return;
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
        SET_STATE(param_1, (s16)param_2, 0x14);
        return;
    }

    if (*(s16 *)(param_1 + 0x7c) != -1) {
        iVar3 = func_020bcf08(*(s16 *)(param_1 + 0x7c));
        switch (iVar3) {
        case 2:
        case 7:
        case 15:
            func_020af820(*(s16 *)(param_1 + 0x7c), 1);
            break;
        case 0:
        case 1:
            func_020af770(param_1);
            break;
        }
    }
    iVar3 = func_020bcf08(param_2);
    switch (iVar3) {
    case 5:
        func_02093dd4(param_2);
        break;
    case 2:
    case 7:
    case 15:
        func_020af820(param_2, -1);
        break;
    case 0:
    case 1:
        iVar3 = func_020aef1c(param_1, param_2);
        func_020af820(param_2, (s16)(-iVar3));
        break;
    }
    func_020ad7c8(param_1, 6);
    func_020af7f4(param_1);
    *(s16 *)(param_1 + 0x7c) = (s16)param_2;
    *(s16 *)(param_1 + 0x7e) = -1;
    func_020af62c();
    switch (*(s16 *)(param_1 + 0x7c)) {
    case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86:
    case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94:
    case 95: case 96: case 97: case 98: case 99: case 100:
        flag = 0;
        break;
    default:
        flag = 1;
        break;
    }
    if (flag) {
        func_020ad6fc(param_1, 1);
        return;
    }
    func_020ad6fc(param_1, 2);
}
