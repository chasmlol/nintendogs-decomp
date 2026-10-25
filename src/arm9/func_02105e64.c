#include "ctx.h"

void func_02107220(void);
void func_02109b50(void);
void func_02109ac0(s32 a);
void func_020a17bc(u32 a);
void func_0209f8d8(u32 a);
void func_02105f94(u8 *p);
s32 func_021093b8(void);
void func_021093e4(u32 a);

void func_02105e64(u8 *param_1, u8 *param_2)
{
    s32 bVar2;
    u16 sVar1;

    switch (*(u16 *)(param_2 + 2)) {
    case 0:
    case 5:
    case 7:
        break;
    case 2:
    case 3:
        func_02109b50();
        break;
    case 4:
        sVar1 = *(s16 *)(param_2 + 18);
        switch (sVar1) {
        case 1:
            *(s32 *)(param_1 + 0x1c) = 1;
            break;
        case 3:
            *(s32 *)(param_1 + 0x1c) = 2;
            break;
        case 4:
            *(s32 *)(param_1 + 0x1c) = 1;
            break;
        default:
            *(s32 *)(param_1 + 0x1c) = 0;
            break;
        }
        func_02109ac0(*(s32 *)(param_1 + 0x1c));
        break;
    case 6:
        *(s32 *)(param_1 + 0x10) = 1;
        break;
    case 8:
        *(s32 *)(param_1 + 0x14) = 1;
        break;
    case 9:
        func_020a17bc(*(u16 *)(param_2 + 28));
        break;
    case 10:
        func_0209f8d8(*(u16 *)(param_2 + 28));
        break;
    case 11:
        *(s32 *)(param_1 + 0x18) = 1;
        break;
    case 1:
        func_02107220();
        break;
    case 12:
        func_02105f94(param_2);
        break;
    }
    if (*(s16 *)param_2 != 3) {
        return;
    }
    bVar2 = func_021093b8();
    if (bVar2 == 0) {
        return;
    }
    *(u16 *)(param_2 + 68) = 1;
    func_021093e4(0);
}
