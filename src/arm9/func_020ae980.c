#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159060;

s32 func_020ad77c(u8 *p);
s32 func_020ab4c0(u8 *p);
s32 func_020aea7c(u8 *p);
s32 func_020ff718(void);
s32 func_020ad690(u8 *p);
void func_020ad8f0(u8 *p);
s32 func_020ae374(u8 *p);

u32 func_020ae980(u8 *param_1)
{
    u32 uVar3;
    u32 uVar4;
    u8 *g;
    s32 t;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        g = data_0215be48;
        uVar4 = 0;
        if (*(s32 *)(g + 0xb8) != 12) {
            uVar3 = func_020ab4c0(param_1);
            uVar4 = uVar3;
        }
        if (uVar4 != 0) {
            return uVar3;
        }
        if (*(s16 *)(param_1 + 0x2a) != 1) {
            goto other;
        }
        t = *(s32 *)(data_02159060 + 0xa4);
        if (t == 0) {
            return t;
        }
        *(u16 *)(param_1 + 0x2a) = 0;
        *(u32 *)(data_0215be48 + 0x486c) = 0;
        return func_020ff718();
    other:
        return func_020aea7c(param_1);
    case 2:
    case 3:
        break;
    case 4:
        t = func_020ad690(param_1);
        if (t == 0) {
            return t;
        }
        func_020ad8f0(param_1);
        if (*(s16 *)(param_1 + 0x26) != 6) {
            return *(s16 *)(param_1 + 0x26);
        }
        return func_020ae374(param_1);
    }
}
