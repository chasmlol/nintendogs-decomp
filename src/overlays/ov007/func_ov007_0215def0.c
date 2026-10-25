#include "ctx.h"

extern int *data_ov007_02160d80;
extern int func_ov007_0215d828;
extern void func_020d5cc8(void);
extern u32 func_020d6ca4(void);
extern s32 func_020d6978(int *a, int *b);

void func_ov007_0215def0(void)
{
    int local;
    u32 uVar2;

    if (data_ov007_02160d80[0xd] != 0) {
        data_ov007_02160d80[0xd] = 0;
        *(u16 *)((u8 *)data_ov007_02160d80 + 0x30) = 0;
        *(u16 *)((u8 *)data_ov007_02160d80 + 0x32) = 0;
    }
    switch (data_ov007_02160d80[0xa]) {
    case 0:
    case 1:
        goto dflt;
    case 2:
    case 3:
        break;
    case 4:
        func_020d5cc8();
        uVar2 = func_020d6ca4();
        switch (uVar2) {
        case 0:
        case 1:
        case 2:
            goto dflt;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
            break;
        default:
            goto dflt;
        }
        data_ov007_02160d80[0xa] = 4;
        data_ov007_02160d80[0xb] = 1;
        if (*(s16 *)((u8 *)data_ov007_02160d80 + 0x38) == 0) {
            *(s16 *)((u8 *)data_ov007_02160d80 + 0x38) = 1;
        }
        goto dflt;
    default:
        goto dflt;
    }
    func_020d5cc8();
    uVar2 = func_020d6ca4();
    switch (uVar2) {
    case 0:
    case 1:
    case 2:
        goto dflt;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
        break;
    default:
        goto dflt;
    }
    data_ov007_02160d80[0xa] = 4;
    data_ov007_02160d80[0xb] = 1;
    if (*(s16 *)((u8 *)data_ov007_02160d80 + 0x38) == 0) {
        *(s16 *)((u8 *)data_ov007_02160d80 + 0x38) = 1;
    }
dflt:
    if (data_ov007_02160d80[0xa] != 1) {
        return;
    }
    data_ov007_02160d80[0xa] = 4;
    if (func_020d6978((int *)&func_ov007_0215d828, &local) != 0) {
        data_ov007_02160d80[0xb] = 0;
    }
    return;
}
