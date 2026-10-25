#include "ctx.h"

extern u8 *data_0215942c;
extern void func_02106088(u8 *p);
extern void func_02109368(s32 a);
extern void func_02109390(s32 a);
extern void func_02109b50(void);
extern void func_02107230(s32 a, s32 b, s32 c, s32 d);
extern void func_02112798(s32 a, s32 b, s32 c);

#define HEAD() \
    func_02106088(param_1 + 0xc); \
    iv = -1; \
    uv1 = (u32)*(u16 *)data_0215942c; \
    if (uv1 == 1 || uv1 == 3 || uv1 == 0x8003) { \
        iv = (s32)(s16)((u16 *)data_0215942c)[7]; \
    } \
    if (iv >= 0) { \
        func_02109368(iv); \
        func_02109390(iv); \
    } \
    func_02109b50();

#define TAILS(v) \
    *(s32 *)(param_1 + 0x18) = 0; \
    *(s32 *)(param_1 + 0x2c) = (v); \
    *(s32 *)(param_1 + 0xc) = 1; \
    func_02112798(2, 3, 1); \
    func_02112798(2, 4, 1);

void func_021045fc(u8 *param_1, s32 param_2)
{
    u8 *iVar2;
    s32 iv;
    u32 uv1;

    iVar2 = param_1 + 0x1c48;
    if (*(s32 *)(iVar2 + 0xc) == param_2) {
        return;
    }
    *(s32 *)(iVar2 + 0xc) = param_2;
    switch (param_2) {
    case 15:
        HEAD();
        func_02107230(2, 2, 2, 1);
        TAILS(2);
        return;
    case 4:
        HEAD();
        func_02107230(2, 1, 0x3f3, 1);
        TAILS(1);
        return;
    case 5:
        HEAD();
        func_02107230(2, 1, 0x3f4, 1);
        TAILS(1);
        return;
    case 7:
        HEAD();
        func_02107230(2, 2, 1, 1);
        TAILS(2);
        return;
    case 8:
        HEAD();
        func_02107230(2, 2, 0x13ee, 1);
        TAILS(2);
        *(s32 *)(param_1 + 0x230) = 1;
        *(s32 *)(param_1 + 0x234) = *(s32 *)(param_1 + 0x234) + 1;
        return;
    case 9:
        HEAD();
        func_02107230(2, 2, 0x13ef, 1);
        TAILS(2);
        return;
    case 10:
        HEAD();
        func_02107230(2, 2, 0x13f1, 1);
        TAILS(2);
        return;
    case 11:
        HEAD();
        func_02107230(2, 2, 0x13f2, 1);
        TAILS(2);
        return;
    case 12:
        HEAD();
        func_02107230(2, 2, 0x13f3, 1);
        TAILS(2);
        return;
    case 14:
        HEAD();
        func_02107230(2, 2, 0x13f5, 1);
        TAILS(2);
        return;
    case 16:
        HEAD();
        func_02107230(2, 2, 1, 1);
        TAILS(2);
        return;
    case 17:
        HEAD();
        func_02107230(2, 2, 0x1b6c, 1);
        TAILS(2);
        return;
    case 18:
        HEAD();
        func_02107230(2, 2, 0x1b62, 1);
        TAILS(2);
        return;
    case 19:
        HEAD();
        func_02107230(2, 2, 1, 1);
        TAILS(2);
        return;
    case 20:
        HEAD();
        func_02107230(2, 2, 0x1770, 1);
        TAILS(2);
        return;
    case 26:
        HEAD();
        func_02107230(2, 2, 0x1772, 1);
        TAILS(2);
        return;
    case 21:
        HEAD();
        func_02107230(2, 2, 0x1771, 1);
        TAILS(2);
        return;
    case 22:
        HEAD();
        func_02107230(2, 2, 0x1771, 2);
        TAILS(2);
        return;
    case 23:
        HEAD();
        func_02107230(2, 2, 0x1771, 3);
        TAILS(2);
        return;
    case 24:
        HEAD();
        func_02107230(2, 2, 0x1771, 4);
        TAILS(2);
        return;
    case 25:
        HEAD();
        func_02107230(2, 2, 0x1771, 5);
        TAILS(2);
        return;
    case 29:
        HEAD();
        func_02107230(2, 2, 0x1773, 1);
        TAILS(2);
        return;
    case 27:
        HEAD();
        func_02107230(2, 2, 0x1784, 1);
        TAILS(2);
        return;
    case 28:
        HEAD();
        func_02107230(2, 2, 0x1785, 1);
        TAILS(2);
        return;
    case 30:
        HEAD();
        func_02107230(2, 2, 0x1774, 1);
        TAILS(2);
        return;
    case 31:
        HEAD();
        func_02107230(2, 2, 0x177a, 1);
        TAILS(2);
        return;
    case 32:
        HEAD();
        func_02107230(2, 2, 0x177b, 1);
        TAILS(2);
        return;
    case 33:
        HEAD();
        func_02107230(2, 2, 0x177b, 2);
        TAILS(2);
        return;
    case 34:
        HEAD();
        func_02107230(2, 2, 0x177b, 3);
        TAILS(2);
        return;
    case 35:
        HEAD();
        func_02107230(2, 2, 0x177c, 1);
        TAILS(2);
        return;
    case 36:
        HEAD();
        func_02107230(2, 2, 0x177d, 1);
        TAILS(2);
        return;
    case 37:
        HEAD();
        func_02107230(2, 2, 0x178e, 1);
        TAILS(2);
        return;
    case 38:
        HEAD();
        func_02107230(2, 2, 0x178f, 1);
        TAILS(2);
        return;
    case 39:
        HEAD();
        func_02107230(2, 2, 0x1798, 1);
        TAILS(2);
        return;
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
    case 13:
        break;
    }
    *(s32 *)(iVar2 + 0xc) = 0;
}
