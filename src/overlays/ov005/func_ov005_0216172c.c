#include "ctx.h"

extern u8 *data_ov005_02167f00;
extern s32 *data_0215be34;
extern void func_02081104(s32 a, s32 *b);

void func_ov005_0216172c(void)
{
    s16 i;
    s32 zA;
    s32 zB;
    s32 *p;

    i = 0;
    zA = i;
    zB = i;
    do {
        p = *(s32 **)(data_ov005_02167f00 + i * 4 + 0xc);
        if (p != 0) {
            func_02081104(data_0215be34 ? *data_0215be34 : zA, p);
            *(s32 *)(data_ov005_02167f00 + ((u32)i << 2) + 0xc) = zB;
        }
        i = (s16)(i + 1);
    } while (i < 11);
    i = 0;
    zA = i;
    zB = i;
    do {
        p = *(s32 **)(data_ov005_02167f00 + i * 4 + 0x38);
        if (p != 0) {
            func_02081104(data_0215be34 ? *data_0215be34 : zA, p);
            *(s32 *)(data_ov005_02167f00 + ((u32)i << 2) + 0x38) = zB;
        }
        i = (s16)(i + 1);
    } while (i < 4);
    p = *(s32 **)(data_ov005_02167f00 + 0x48);
    if (p != 0) {
        func_02081104(data_0215be34 ? *data_0215be34 : 0, p);
        *(s32 *)(data_ov005_02167f00 + 0x48) = 0;
    }
    p = *(s32 **)(data_ov005_02167f00 + 0x4c);
    if (p != 0) {
        func_02081104(data_0215be34 ? *data_0215be34 : 0, p);
        *(s32 *)(data_ov005_02167f00 + 0x4c) = 0;
    }
    p = *(s32 **)(data_ov005_02167f00 + 0x50);
    if (p == 0) {
        return;
    }
    func_02081104(data_0215be34 ? *data_0215be34 : 0, p);
    *(s32 *)(data_ov005_02167f00 + 0x50) = 0;
}
