#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern s32 func_020c8c6c();
extern s32 func_020bc1c4(s32 a);
extern void func_020be118(u32 *a);
extern u32 func_02062164(void);
extern void func_020be1a4(s32 v);

void func_020cfb04(u8 *p)
{
    u32 ld[18];
    u32 uVar3;
    s32 iv;
    u32 a;
    s32 t;

    *(u32 *)(p + 0x2c) = 1;
    *(u32 *)(p + 0x28) = 0;
    *(u32 *)(p + 0x30) = 2;
    *(u32 *)(p + 0x34) = 0;
    *(u32 *)(p + 0x38) = 0;
    *(s16 *)(p + 60) = -1;
    *(s16 *)(p + 62) = -1;
    *(s16 *)(p + 64) = -1;
    *(u32 *)(p + 0x44) = 0;
    *(u32 *)(p + 0x48) = 0;
    *(u32 *)(p + 0x4c) = 1;
    *(u16 *)(p + 80) = 0;
    *(V3 *)(p + 84) = *(V3 *)(p + 12);
    if (func_020c8c6c() != 0) {
        *(u32 *)(p + 0x70) = 1;
    } else {
        *(u32 *)(p + 0x70) = 0;
    }
    *(s16 *)(p + 118) = -1;
    switch (func_020bc1c4(-1)) {
    case 0:
        ld[0] = 0;
        ld[1] = 0;
        ld[2] = 0x1000;
        *(u32 *)(p + 0x2c) = 1;
        func_020be118(ld);
        func_020be1a4((u16)(((s32)func_02062164() % 8) * 0x1fff));
        return;
    case 1:
        ld[3] = 0;
        ld[4] = 0;
        ld[5] = 0x1000;
        *(u32 *)(p + 0x2c) = 4;
        func_020be118(ld + 3);
        return;
    case 2:
        ld[6] = 0x1000;
        ld[7] = 0;
        ld[8] = 0x1000;
        *(u32 *)(p + 0x2c) = 5;
        func_020be118(ld + 6);
        return;
    case 3:
        ld[9] = 0;
        ld[11] = 0x1000;
        ld[10] = 0;
        *(u32 *)(p + 0x2c) = 6;
        func_020be118(ld + 9);
        return;
    case 4:
        ld[12] = 0;
        ld[14] = 0x1000;
        ld[13] = 0;
        *(u32 *)(p + 0x2c) = 7;
        func_020be118(ld + 12);
        return;
    case 5:
    case 6:
        break;
    case 7:
        ld[15] = 0;
        ld[17] = 0x1000;
        ld[16] = 0;
        *(u32 *)(p + 0x2c) = 8;
        func_020be118(ld + 15);
        break;
    }
}
