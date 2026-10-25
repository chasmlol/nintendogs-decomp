#include "ctx.h"

extern u32 data_ov007_02160d80;
extern void func_020d5cc8(void);
extern s32 func_020d6ca4(void);

void func_ov007_0215dac8(void)
{
    s32 s;
    s32 r;

    if (*(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x34) != 0) {
        *(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x34) = 0;
        *(u16 *)(*(u8 **)&data_ov007_02160d80 + 48) = 0;
        *(u16 *)(*(u8 **)&data_ov007_02160d80 + 50) = 0;
    }
    s = *(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x28);
    switch (s) {
    case 0:
    case 1:
        goto fin;
    case 2:
    case 3:
        goto caseB;
    case 4:
        goto caseA;
    default:
        goto fin;
    }
caseA:
    func_020d5cc8();
    r = func_020d6ca4();
    switch (r) {
    case 0:
    case 1:
    case 2:
        goto fin;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        goto bodyA;
    default:
        goto fin;
    }
bodyA:
    *(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x28) = 4;
    *(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x2c) = 1;
    if (*(s16 *)(*(u8 **)&data_ov007_02160d80 + 0x38) == 0) {
        *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x38) = 1;
    }
    return;
caseB:
    func_020d5cc8();
    r = func_020d6ca4();
    switch (r) {
    case 0:
    case 1:
    case 2:
        goto fin;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        goto bodyB;
    default:
        goto fin;
    }
bodyB:
    *(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x28) = 4;
    *(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x2c) = 1;
    if (*(s16 *)(*(u8 **)&data_ov007_02160d80 + 0x38) == 0) {
        *(u16 *)(*(u8 **)&data_ov007_02160d80 + 0x38) = 1;
    }
fin:
    return;
}
