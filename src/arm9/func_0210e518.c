#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_0214f004;

s32 func_02112320(s32 a, s32 b, s32 c);
void func_02112798(s32 a, s32 b, s32 c);
void func_0210447c(void);
void func_02108e24(s32 a);
void func_02108138(s32 a, s32 b);

void func_0210e518(s32 *param_1)
{
    u8 *base;
    s32 iVar3;
    u8 bVar2;
    u8 bVar1;

    switch (param_1[2]) {
    case 0:
        base = (u8 *)data_0215be48;
        base += 0x4000;
        if (*(s32 *)(base + 0x8b8) == 1) {
            param_1[2] = 2;
            return;
        }
        if (*(s32 *)(base + 0x860) == 0) {
            return;
        }
        bVar1 = *((u8 *)&data_0214f004 + 1);
        bVar2 = *((u8 *)&data_0214f004);
        iVar3 = func_02112320(2, bVar2, bVar1);
        if ((*(u16 *)((u8 *)&data_0214f004 + 2) & 2) == 0) {
            return;
        }
        switch (iVar3) {
        case 1:
            param_1[3] = 0;
            break;
        case 3:
            param_1[3] = 1;
            break;
        case 4:
            param_1[3] = 2;
            break;
        case 0:
            param_1[3] = 3;
            break;
        case 2:
            param_1[3] = 4;
            break;
        case 5:
            param_1[3] = 5;
            break;
        case 6:
            param_1[3] = 6;
            break;
        }
        if (param_1[3] == -1) {
            return;
        }
        *(u16 *)((u8 *)param_1 + 0x1c18) = bVar2;
        *(u16 *)((u8 *)param_1 + 0x1c1a) = bVar1;
        func_02112798(2, (u16)(iVar3 + 14), 1);
        func_0210447c();
        func_02108e24(0);
        param_1[2] = 1;
        return;
    case 1:
        param_1[0] = param_1[0] + 1;
        if (param_1[0] <= 10) {
            return;
        }
        param_1[0] = 0;
        param_1[2] = -1;
        func_02108138(param_1[3], -1);
        return;
    case 2:
        base = (u8 *)data_0215be48;
        base += 0x4000;
        if (*(s32 *)(base + 0x8bc) == 1) {
            *(s32 *)(base + 0x86c) = 1;
            param_1[2] = -1;
        }
        return;
    }
}
