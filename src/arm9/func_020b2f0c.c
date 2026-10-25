#include "ctx.h"

extern u8 data_02159060[];
extern u8 data_0215be48[];
extern BOOL func_020ad77c(u8 *p);
extern BOOL func_020ab4c0(u8 *p);
extern u32 func_021081f4(void);
extern u32 func_020ad7c8(u8 *p, u32 a);
extern u32 func_020ad6fc(u8 *p, u32 a);
extern u32 func_02109238(void);
extern BOOL func_02093e28(void);
extern u32 func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern BOOL func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

void func_020b2f0c(u8 *p)
{
    s32 b;
    u8 *g;

    switch (*(s16 *)(p + 0x2e)) {
    case 0:
        func_020ad77c(p);
        return;
    case 1:
        b = func_020ab4c0(p);
        if (b != 0) {
            return;
        }
        b = *(s16 *)(p + 0x2a);
        if (b == 1) {
            b = *(s32 *)(*(u8 **)&data_02159060 + 0xa4);
            if (b == 0) {
                return;
            }
            *(s16 *)(p + 0x2a) = 0;
            func_021081f4();
            return;
        }
        b = *(s16 *)(p + 0x100);
        if (b != 0) {
            return;
        }
        g = *(u8 **)&data_0215be48;
        if (*(s32 *)(g + 0x4000 + 0x8bc) == 1) {
            func_020ad7c8(p, 4);
            func_020ad6fc(p, 0);
            func_02109238();
            return;
        }
        switch (*(u32 *)(g + 0x4000 + 0x8c4)) {
        case 0:
            break;
        case 1:
            if (func_02093e28() == 0) {
                *(s16 *)(p + 0x100) = 12;
                return;
            }
            func_02097b94(2, 0xc83, 0, 0, 0);
            *(s16 *)(p + 0x2a) = 1;
            return;
        case 2:
            *(s16 *)(p + 0x100) = 13;
            return;
        case 3:
            *(s16 *)(p + 0x100) = 14;
            return;
        case 5:
            *(s16 *)(p + 0x100) = 16;
            return;
        case 4:
            *(s16 *)(p + 0x100) = 17;
            return;
        }
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        b = func_020ad690(p);
        if (b == 0) {
            return;
        }
        func_020ad8f0(p);
        return;
    }
}
