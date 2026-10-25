#include "ctx.h"

typedef struct {
    s16 f00;
    u8 pad02[0x0a];
    u32 f0c;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u8 pad38[0x54 - 0x38];
    s32 timer[4];
    u8 pad64[0x70 - 0x64];
    u16 flags;
} Work;

extern Work *data_ov005_02167f00;
extern void func_01ffdb08(s32 a);
extern void func_ov005_02163490(u32 a, s32 b);
extern void func_020a0d58(s32 a);

void func_ov005_021632f4(void)
{
    s16 i;
    BOOL flag;

    func_01ffdb08(data_ov005_02167f00->f00);
    for (i = 0; i < 6; i++) {
        if (data_ov005_02167f00->flags & (1 << i)) {
            switch (i) {
            case 0:
                func_ov005_02163490(data_ov005_02167f00->f0c, i);
                func_ov005_02163490(data_ov005_02167f00->f18, i);
                func_ov005_02163490(data_ov005_02167f00->f24, i);
                break;
            case 1:
                func_ov005_02163490(data_ov005_02167f00->f10, i);
                break;
            case 2:
                func_ov005_02163490(data_ov005_02167f00->f14, i);
                break;
            case 3:
                func_ov005_02163490(data_ov005_02167f00->f28, i);
                func_ov005_02163490(data_ov005_02167f00->f2c, i);
                break;
            case 4:
                func_ov005_02163490(data_ov005_02167f00->f30, i);
                func_ov005_02163490(data_ov005_02167f00->f34, i);
                break;
            case 5:
                func_ov005_02163490(data_ov005_02167f00->f1c, i);
                func_ov005_02163490(data_ov005_02167f00->f20, i);
                break;
            }
        }
    }
    flag = FALSE;
    for (i = 0; i < 4; i++) {
        s32 *p = &data_ov005_02167f00->timer[i];
        s32 v = *p - 14;

        if (v < 0) {
            v = 0;
        }
        *p = v;
        if (*p > 0) {
            flag = TRUE;
        }
    }
    if (flag) {
        func_020a0d58(0);
    }
    data_ov005_02167f00->flags = 0;
}
