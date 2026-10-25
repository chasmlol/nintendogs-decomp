#include "ctx.h"

extern void func_020cfb04(u8 *a, u8 *b);
extern void func_020cead0(u8 *a, u8 *b);
extern void func_020d0450(u8 *a, u8 *b);
extern void func_020cecac(u8 *a, u8 *b);
extern void func_020d279c(u8 *a, u8 *b);
extern void func_020d296c(u8 *a, u8 *b);
extern void func_020d38cc(u8 *a, u8 *b);
extern void func_020d9924(u8 *a, u8 *b);
extern void func_020d8278(u8 *a, u8 *b);
extern void func_020d91a8(u8 *a, u8 *b);
extern void func_020d8334(u8 *a, u8 *b);
extern void func_020cedf4(u8 *a, u8 *b);
extern void func_020ce7e4(u8 *a, u8 *b);
extern void func_020cfd34(u8 *a, u8 *b);
extern void func_020ceb6c(u8 *a, u8 *b);
extern void func_020d275c(u8 *a, u8 *b);
extern void func_020d2854(u8 *a, u8 *b);
extern void func_020d35f8(u8 *a, u8 *b);
extern void func_020d91c4(u8 *a, u8 *b);
extern void func_020d819c(u8 *a, u8 *b);
extern void func_020d917c(u8 *a, u8 *b);
extern void func_020d82d4(u8 *a, u8 *b);
extern void func_0208ece0(u8 *a);

void func_020bba14(u8 *param_1)
{
    if (*(s16 *)(param_1 + 0x84) != *(s16 *)(param_1 + 0x82)) {
        *(s16 *)(param_1 + 0x86) = *(s16 *)(param_1 + 0x84);
        *(s16 *)(param_1 + 0x84) = *(s16 *)(param_1 + 0x82);
        switch (*(s16 *)(param_1 + 0x84)) {
        case 0:
            break;
        case 1:
            func_020cfb04(param_1 + 0x88, param_1);
            break;
        case 2:
            func_020cead0(param_1 + 0x100, param_1);
            break;
        case 3:
            func_020d0450(param_1 + 0x108, param_1);
            break;
        case 4:
            func_020cecac(param_1 + 0x144, param_1);
            break;
        case 5:
            func_020d279c(param_1 + 0x1b4, param_1);
            break;
        case 6:
            func_020d296c(param_1 + 0x1f0, param_1);
            break;
        case 7:
            func_020d38cc(param_1 + 0x21c, param_1);
            break;
        case 8:
            func_020d9924(param_1 + 0x27c, param_1);
            break;
        case 9:
            func_020d8278(param_1 + 0x2c4, param_1);
            break;
        case 10:
            func_020d91a8(param_1 + 0x2f0, param_1);
            break;
        case 11:
            func_020d8334(param_1 + 0x318, param_1);
            break;
        }
    }
    switch (*(s16 *)(param_1 + 0x84)) {
    case 0:
        break;
    case 1:
        func_020cedf4(param_1 + 0x88, param_1);
        break;
    case 2:
        func_020ce7e4(param_1 + 0x100, param_1);
        break;
    case 3:
        func_020cfd34(param_1 + 0x108, param_1);
        break;
    case 4:
        func_020ceb6c(param_1 + 0x144, param_1);
        break;
    case 5:
        func_020d275c(param_1 + 0x1b4, param_1);
        break;
    case 6:
        func_020d2854(param_1 + 0x1f0, param_1);
        break;
    case 7:
        func_020d35f8(param_1 + 0x21c, param_1);
        break;
    case 8:
        func_020d91c4(param_1 + 0x27c, param_1);
        break;
    case 9:
        func_020d819c(param_1 + 0x2c4, param_1);
        break;
    case 10:
        func_020d917c(param_1 + 0x2f0, param_1);
        break;
    case 11:
        func_020d82d4(param_1 + 0x318, param_1);
        break;
    }
    func_0208ece0(param_1);
}
