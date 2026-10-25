#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

static inline u32 SwapR(u32 v, vu8 *p) { u32 old; *(u8 *)(p) = (u8)(v); return old; }

extern u32 *data_0215be34;
extern u8 *data_0215be44;

extern void func_02081104(u32 a, u32 b);
extern u32 func_0208122c(u32 a, u32 b, u32 *c);
extern void func_ov004_0215c258(void);

void func_020f394c(u32 *p1, s32 p2)
{
    u32 r4;

    r4 = (data_0215be34 != 0) ? *data_0215be34 : 0;
    if (*(u32 *)(data_0215be44 + 0x2c) != 0) {
        func_02081104(r4, *(u32 *)(data_0215be44 + 0x2c));
        *(u32 *)(data_0215be44 + 0x2c) = 0;
    }
    if (*(u32 *)(data_0215be44 + 0x30) != 0) {
        func_02081104(r4, *(u32 *)(data_0215be44 + 0x30));
        *(u32 *)(data_0215be44 + 0x30) = 0;
    }
    if (*(u32 *)(data_0215be44 + 0x34) != 0) {
        func_02081104(r4, *(u32 *)(data_0215be44 + 0x34));
        *(u32 *)(data_0215be44 + 0x34) = 0;
    }
    if (*(u32 *)(data_0215be44 + 0x38) != 0) {
        func_02081104(r4, *(u32 *)(data_0215be44 + 0x38));
        *(u32 *)(data_0215be44 + 0x38) = 0;
    }
    if (*(u32 *)(data_0215be44 + 0x3c) != 0) {
        func_02081104(r4, *(u32 *)(data_0215be44 + 0x3c));
        *(u32 *)(data_0215be44 + 0x3c) = 0;
    }
    *(u32 *)(data_0215be44 + 0x2c) = func_0208122c(r4, 61, p1);
    if (*(u32 *)(data_0215be44 + 0x2c) != 0) {
        s32 sv = (s16)p2;
        *(s32 *)(*(u8 **)(data_0215be44 + 0x2c) + 0x54) = sv;
        *(u16 *)(*(u8 **)(data_0215be44 + 0x2c) + 0x58) = 0xffff;
        {
            u8 *ob = data_0215be44;
            *(T3 *)(ob + 0x1c) = *(T3 *)p1;
            *(u32 *)(ob + 0x20) = 0x19a;
        }
        *(s16 *)(data_0215be44 + 0x28) = (s16)sv;
        {
            u32 zz = 0;
            u8 *ob;
            u8 *pa;
            *(u16 *)(data_0215be44 + 0x40) = 40;
            ob = data_0215be44;
            pa = (__typeof__(pa))((u32)(ob) + (66));
            (void)SwapR(zz, (vu8 *)pa);
        }
    }
    *(u32 *)(data_0215be44 + 0x44) = 30;
    func_ov004_0215c258();
}
