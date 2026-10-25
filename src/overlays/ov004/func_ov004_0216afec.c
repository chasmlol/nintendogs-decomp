#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern u32 *data_0214f464;
extern void func_02039448(int);
extern void func_02027654(int, int);
extern int func_02035744(int, int);
extern int func_02035770(int, int);
extern void func_02037450(int, int);
extern int func_0203567c(int);
extern void func_ov004_0216b280(int);
extern s32 func_02028124(int);
extern void func_02024f18(int, int, u32);

int func_ov004_0216afec(int param_1, int param_2)
{
    s32 uVar2;
    u32 counter;
    s64 prod;

    if (param_2 != 0) {
        switch (*(u32 *)(param_1 + 0x46c)) {
        case 1:
        case 2:
            goto LAB_B;
        case 6:
            goto LAB_C;
        case 7:
        case 8:
            goto LAB_D;
        }

        func_02039448(param_1);
        func_02027654(param_2, param_1 + 0x278);
        *(Triple *)(param_1 + 0x3b4) = *(Triple *)(param_1 + 0x278);
        if (func_02035744(param_1, 13) != 0) {
            func_02037450(param_1, 0x300);
        }
        if (func_0203567c(param_1) != 0) {
            func_ov004_0216b280(param_1);
        }
        return 0;

    LAB_B:
        func_02027654(param_2, param_1 + 0x3b4);
        counter = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = counter;
        if ((u16)((u32)(u16)counter * 80 >> 16) == 0) {
            func_ov004_0216b280(param_1);
        }
        return 1;

    LAB_C:
        func_02039448(param_1);
        func_02027654(param_2, param_1 + 0x278);
        *(Triple *)(param_1 + 0x3b4) = *(Triple *)(param_1 + 0x278);
        if (func_02035770(param_1, 3) != 0) {
            func_02037450(param_1, 0x300);
        }
        if (func_0203567c(param_1) != 0) {
            func_ov004_0216b280(param_1);
        }
        return 0;

    LAB_D:
        func_02039448(param_1);
        func_02027654(param_2, param_1 + 0x278);
        *(Triple *)(param_1 + 0x3b4) = *(Triple *)(param_1 + 0x278);
        if (func_02035770(param_1, 3) != 0) {
            func_02037450(param_1, 0x300);
        }
        if (*(u32 *)(param_1 + 0x46c) == 7) {
            uVar2 = func_02028124(param_1);
            prod = (s64)uVar2 * 0x1eb;
            func_02024f18(param_1, 1, (u32)((prod + 0x800) >> 12));
        } else {
            uVar2 = func_02028124(param_1);
            prod = (s64)uVar2 * 0x1eb;
            func_02024f18(param_1, 1, -(u32)((prod + 0x800) >> 12));
        }
        if (func_0203567c(param_1) != 0) {
            func_ov004_0216b280(param_1);
        }
        return 0;
    }
    return 0;
}
