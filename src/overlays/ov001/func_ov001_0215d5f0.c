#include "ctx.h"

extern u8 data_ov001_0215e260[];
extern u8 data_ov001_0215dfc4[];

void func_ov001_0215d5f0(void)
{
    s32 i = 0;
    s32 j;
    u8 *pb;
    do {
        j = 0;
        pb = data_ov001_0215dfc4 + (u32)i * 2;
        do {
            if (*(s16 *)(*(u8 **)data_ov001_0215e260) == i) {
                *(u32 *)(*(u8 **)data_ov001_0215e260 + *pb * 16 + 0xc034) = 1;
                if (*(s16 *)(*(u8 **)data_ov001_0215e260 + 2) == 3) {
                    if (j == 0) {
                        *(s16 *)(*(u8 **)data_ov001_0215e260 + *pb * 16 + 0xc03e) = (s16)(*(s32 *)(*(u8 **)data_ov001_0215e260 + 0x1c) >> 12);
                    } else if (*(s32 *)(*(u8 **)data_ov001_0215e260 + 0x18) == 0) {
                        *(s16 *)(*(u8 **)data_ov001_0215e260 + *pb * 16 + 0xc03e) = (s16)((*(s32 *)(*(u8 **)data_ov001_0215e260 + 0x1c) >> 12) - 0x100);
                    } else {
                        *(s16 *)(*(u8 **)data_ov001_0215e260 + *pb * 16 + 0xc03e) = (s16)((*(s32 *)(*(u8 **)data_ov001_0215e260 + 0x1c) >> 12) + 0x100);
                    }
                } else {
                    *(s16 *)(*(u8 **)data_ov001_0215e260 + *pb * 16 + 0xc03e) = (s16)(*(s32 *)(*(u8 **)data_ov001_0215e260 + 0x1c) >> 12);
                }
            } else {
                *(u32 *)(*(u8 **)data_ov001_0215e260 + *pb * 16 + 0xc034) = 0;
            }
            j = j + 1;
            pb = pb + 1;
        } while (j < 2);
        i = i + 1;
    } while (i < 6);
}
