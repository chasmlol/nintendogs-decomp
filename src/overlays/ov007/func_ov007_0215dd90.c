#include "ctx.h"

extern int *data_ov007_02160d80;
extern int func_ov007_0215d258;
extern u8 data_ov007_02160888[];
extern s32 func_020d6268(int *a, short *b);
extern s16 func_020d6c84(void);
extern u32 func_02080858(void);

#define P8(p) ((u8 *)(p))

void func_ov007_0215dd90(void)
{
    short asStack_8[2];
    int *piVar2;
    s16 sVar2;

    if ((*(s16 *)(P8(data_ov007_02160d80) + 0x38) != 0) &&
        (*(s16 *)(P8(data_ov007_02160d80) + 0x38) == 1) &&
        (func_020d6268(&func_ov007_0215d258, asStack_8) != 0)) {
        *(int *)(P8(data_ov007_02160d80) + 0x28) = 4;
    }
    *(s16 *)(P8(data_ov007_02160d80) + 0x38) = 0;
    if (*(int *)(P8(data_ov007_02160d80) + 0x48) != 1) {
        return;
    }
    if (*(int *)(P8(data_ov007_02160d80) + 0x28) != 2) {
        return;
    }
    sVar2 = func_020d6c84();
    if (sVar2 != 0) {
        return;
    }
    *(s16 *)(P8(data_ov007_02160d80) + 0x58) = *(s16 *)(P8(data_ov007_02160d80) + 0x58) - 16;
    if (*(s16 *)(P8(data_ov007_02160d80) + 0x58) >= 0) {
        return;
    }
    *(s16 *)(P8(data_ov007_02160d80) + 0x54) = *(s16 *)(P8(data_ov007_02160d80) + 0x54) + 1;
    if (*(s16 *)(P8(data_ov007_02160d80) + 0x54) >= 4) {
        *(s16 *)(P8(data_ov007_02160d80) + 0x54) = 0;
        *(s16 *)(P8(data_ov007_02160d80) + 0x56) = (s16)(func_02080858() & 3);
    }
    piVar2 = data_ov007_02160d80;
    if (*((u8 *)data_ov007_02160888 + *(s16 *)(P8(piVar2) + 0x56) * 4 + *(s16 *)(P8(piVar2) + 0x54)) != 0) {
        *(s16 *)(P8(piVar2) + 0x58) = 900;
        return;
    }
    *(int *)(P8(piVar2) + 0x2c) = 3;
    if (*(s16 *)(P8(data_ov007_02160d80) + 0x38) == 0) {
        *(s16 *)(P8(data_ov007_02160d80) + 0x38) = 1;
    }
    return;
}
