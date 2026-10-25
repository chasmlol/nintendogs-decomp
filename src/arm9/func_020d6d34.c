#include "ctx.h"

extern s32 data_0215ad2c;
extern s32 data_0215ad38;
extern s32 data_0215ad3c;
extern s16 data_0215ad28;
extern s32 data_0215ad34;
extern u16 data_0215ad20;
extern s32 data_0215ad30;

void func_020d7274(void);
void func_020d7248(void);
void func_020d71a0(void);
s32 func_020d6bb8(u32 a, u8 *b);
void func_020d6a3c(u32 a, u8 *b);
void func_020d69d8(u32 a, u8 *b);
s32 func_020d6978(u32 a, u8 *b);
void func_020d6b10(u8 *b);

void func_020d6d34(void)
{
    u8 buf[12];
    s32 ret;

    switch (data_0215ad2c) {
    case 0:
        if (data_0215ad38 == 0) {
            if (data_0215ad3c == 1) {
                if (data_0215ad38 == 0) {
                    ret = func_020d6bb8(2, buf + 2);
                    if (ret != 0) {
                        func_020d6a3c((u32)func_020d7274, buf + 2);
                    }
                }
                data_0215ad2c = 1;
            }
        }
        break;
    case 1:
        if (data_0215ad38 == 1) {
            if (data_0215ad3c == 0) {
                if (data_0215ad38 == 1) {
                    func_020d69d8((u32)func_020d7248, buf + 4);
                }
                data_0215ad2c = 0;
            } else {
                data_0215ad28 = data_0215ad28 - 1;
                if ((s16)data_0215ad28 <= 0) {
                    data_0215ad28 = 60;
                    if (data_0215ad38 == 1) {
                        data_0215ad34 = 0;
                        ret = func_020d6978((u32)func_020d71a0, buf + 6);
                        if (ret != 0) {
                            data_0215ad38 = 2;
                        }
                    }
                    data_0215ad2c = 2;
                }
            }
        }
        break;
    case 2:
        if (data_0215ad38 == 2) {
            if (data_0215ad3c == 0) {
                data_0215ad34 = 1;
                data_0215ad2c = 1;
            } else {
                data_0215ad28 = data_0215ad28 - 1;
                if ((s16)data_0215ad28 <= 0 || data_0215ad20 != 0) {
                    data_0215ad28 = 600;
                    data_0215ad34 = 1;
                    data_0215ad2c = 1;
                }
            }
        }
        break;
    }
    if (data_0215ad30 == 1) {
        func_020d6b10(buf);
        data_0215ad30 = 0;
        data_0215ad38 = 0;
    }
    if (data_0215ad20 != 0) {
        data_0215ad20 = data_0215ad20 - 1;
    }
}
