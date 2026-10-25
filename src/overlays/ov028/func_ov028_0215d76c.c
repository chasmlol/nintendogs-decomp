#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern void func_020d5cc8(void);
extern u32 func_020d6ca4(void);

void func_ov028_0215d76c(void)
{
    u32 uVar2;

    if (*(s32 *)(data_ov028_0215df90 + 0x28) != 0) {
        *(s32 *)(data_ov028_0215df90 + 0x28) = 0;
        *(u16 *)(data_ov028_0215df90 + 0x24) = 0;
        *(u16 *)(data_ov028_0215df90 + 0x26) = 0;
    }
    switch (*(s32 *)(data_ov028_0215df90 + 0x1c)) {
    default:
        goto fin;
    case 0:
    case 1:
        goto fin;
    case 3:
        func_020d5cc8();
        uVar2 = func_020d6ca4();
        switch (uVar2) {
        case 0:
        case 1:
        case 2:
        case 3:
            goto fin;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            break;
        default:
            goto fin;
        }
        *(s32 *)(data_ov028_0215df90 + 0x1c) = 3;
        *(s32 *)(data_ov028_0215df90 + 0x20) = 1;
        if (*(s16 *)(data_ov028_0215df90 + 0x2c) == 0) {
            *(s16 *)(data_ov028_0215df90 + 0x2c) = 1;
        }
        return;
    case 2:
        func_020d5cc8();
        uVar2 = func_020d6ca4();
        switch (uVar2) {
        case 0:
        case 1:
        case 2:
        case 3:
            goto fin;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            break;
        default:
            goto fin;
        }
        *(s32 *)(data_ov028_0215df90 + 0x1c) = 3;
        *(s32 *)(data_ov028_0215df90 + 0x20) = 1;
        if (*(s16 *)(data_ov028_0215df90 + 0x2c) == 0) {
            *(s16 *)(data_ov028_0215df90 + 0x2c) = 1;
        }
        break;
    }
fin:
    ;
}
