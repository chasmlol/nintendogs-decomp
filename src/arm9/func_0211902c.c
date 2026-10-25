#include "ctx.h"

extern u8 *data_0215be48;
extern u32 data_0214a50c[];
extern u32 data_0214a520[];
extern u32 data_0214a534[];
extern u32 data_0214a54c[];
extern u32 data_0214a564[];
extern u32 data_0214a578[];
extern u32 data_0214a58c[];
extern u32 data_0214a5a4[];
extern u32 data_0214a5bc[];
extern u32 data_0214a5d0[];
extern u32 data_0214a5e4[];
extern u32 data_0214a5fc[];
extern u32 data_0214a614[];
extern u32 data_0214a628[];
extern u32 data_0214a63c[];
extern u32 data_0214a654[];

extern void func_020fc594(u32 a, u32 b, u32 c);
extern void func_020fc684(u8 *p, u32 *a, u32 *b, u32 *c, u32 *d);
extern void func_02104370(void);
extern void func_02104324(void);
extern void func_021042d8(void);

void func_0211902c(u8 *p1, u8 *p2)
{
    if (*(s32 *)(p2 + 0x14) > 0) {
        *(s32 *)(p2 + 0x14) = *(s32 *)(p2 + 0x14) - 1;
        if (*(s32 *)(p2 + 0x14) == 0) {
            func_020fc594(0, 4, 1);
        }
    }
    switch (*(s32 *)(p2 + 0xc)) {
    case 0:
        break;
    case 1:
        if (*(s32 *)(data_0215be48 + 0xa8) == 7) {
            func_020fc684(p1, data_0214a50c, data_0214a520, data_0214a534, data_0214a54c);
        } else {
            func_020fc684(p1, data_0214a564, data_0214a578, data_0214a58c, data_0214a5a4);
        }
        func_02104370();
        *(s32 *)(p2 + 0x10) = 30;
        *(s32 *)(p2 + 0x14) = 2;
        break;
    case 2:
        func_020fc684(p1, data_0214a5bc, data_0214a5d0, data_0214a5e4, data_0214a5fc);
        func_02104324();
        *(s32 *)(p2 + 0x10) = 30;
        *(s32 *)(p2 + 0x14) = 2;
        break;
    case 3:
        func_020fc684(p1, data_0214a614, data_0214a628, data_0214a63c, data_0214a654);
        func_021042d8();
        *(s32 *)(p2 + 0x10) = 30;
        *(s32 *)(p2 + 0x14) = 2;
        break;
    }
    *(s32 *)(p2 + 0xc) = 0;
}
