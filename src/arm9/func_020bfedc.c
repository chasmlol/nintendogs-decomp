#include "ctx.h"

extern u8 *data_02159468;

extern void func_020c0b34(u8 *p, s32 *a, s32 *b);
extern void func_020c0948(u8 *p);
extern s32 func_020c0778(u8 *p);
extern s32 func_02044ca0(s32 a);
extern void func_020be4b4(u8 *p, s32 *a, u32 b);
extern BOOL func_020c5fbc(u8 *p);
extern void func_020d345c(s32 a, s32 b, s32 *c);
extern BOOL func_020aaec4(s32 a, s32 *b, u32 c);
extern void func_020c5fec(u8 *p);
extern s32 func_0209d4b0(u8 *p, s32 b);
extern s32 func_020c0610(u8 *p);
extern s32 func_020c0558(u8 *p);
extern s32 func_020c0424(u8 *p);
extern s32 func_020c0194(u8 *p);
extern s32 func_020c0318(u8 *p);
extern s32 func_020c5f4c(u8 *p, s32 b);
extern s32 func_020c5ef8(u8 *p);
extern s32 func_01ffdb08(s32 a);

s32 func_020bfedc(u8 *param_1)
{
    s32 bVar1;
    s32 uVar2;
    s32 iVar3;
    s32 iVar4;
    s32 aiStack_38[3];
    s32 aiStack_2c[3];
    s32 aiStack_20[4];

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 1:
        func_020c0b34(param_1, 0, 0);
        func_020c0948(param_1);
        uVar2 = func_020c0778(param_1);
        return uVar2;
    case 2:
        func_02044ca0(*(s16 *)(param_1 + 0x9c));
        iVar3 = *(s32 *)(param_1 + 0x214);
        func_020be4b4(param_1, aiStack_38, 0x8000);
        if (*(s32 *)(iVar3 + 0x1c) == 0) {
            func_020c0b34(param_1, aiStack_38, 0);
        } else {
            func_020c0b34(param_1, 0, aiStack_38);
        }
        func_020c0778(param_1);
        if (*(s32 *)(data_02159468 + 0x24) != 0) {
            bVar1 = func_020c5fbc(param_1);
            return bVar1;
        }
        iVar4 = *(s32 *)(param_1 + 0x214);
        iVar3 = func_02044ca0(*(s16 *)(param_1 + 0x9c));
        func_020d345c(iVar4, 1, aiStack_2c);
        func_020d345c(iVar4, 2, aiStack_20);
        iVar4 = func_020aaec4(iVar3, aiStack_2c, 0xe66);
        if (iVar4 != 0) {
            bVar1 = 1;
            goto J;
        }
        iVar3 = func_020aaec4(iVar3, aiStack_20, 0xe66);
        if (iVar3 != 0) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
J:
        if (!bVar1) {
            return bVar1;
        }
        func_020c5fec(param_1);
        uVar2 = func_0209d4b0(param_1 + 400, 5);
        return uVar2;
    case 3:
        uVar2 = func_020c0610(param_1);
        return uVar2;
    case 4:
        uVar2 = func_020c0558(param_1);
        return uVar2;
    case 5:
        uVar2 = func_020c0424(param_1);
        return uVar2;
    case 6:
        func_02044ca0(*(s16 *)(param_1 + 0x9c));
        func_01ffdb08(*(s16 *)(param_1 + 0x98));
        uVar2 = func_020c0318(param_1);
        if (uVar2 == 0) {
            return uVar2;
        }
        switch (uVar2) {
        case 1:
            uVar2 = func_020c5f4c(param_1, *(s16 *)(param_1 + 0x98));
            return uVar2;
        case 2:
            func_020c5fec(param_1);
            uVar2 = func_0209d4b0(param_1 + 400, 6);
            return uVar2;
        }
        return uVar2;
    case 7:
        uVar2 = func_020c0194(param_1);
        return uVar2;
    case 8:
        func_02044ca0(*(s16 *)(param_1 + 0x9c));
        func_01ffdb08(*(s16 *)(param_1 + 0x98));
        uVar2 = func_020c0318(param_1);
        if (uVar2 == 0) {
            return uVar2;
        }
        switch (uVar2) {
        case 1:
            uVar2 = func_020c5ef8(param_1);
            return uVar2;
        case 2:
            func_020c5fec(param_1);
            uVar2 = func_0209d4b0(param_1 + 400, 6);
            return uVar2;
        }
        return uVar2;
    }

}
