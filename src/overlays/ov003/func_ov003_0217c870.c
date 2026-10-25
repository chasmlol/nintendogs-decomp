#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern u8 *data_02159444;
extern void func_0201bdac(u8 *p, u32 a);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern s32 func_0202d108(u8 *p, u32 a, u8 *b, u32 c);
extern void func_ov003_0218c3e0(u8 *p, u32 a, u32 b);
extern void func_ov003_02198420(u8 *p, u8 *b, u32 c);

void func_ov003_0217c870(u8 *p)
{
    u8 *iv1;
    u8 *r4;

    func_0201bdac(p, 1);
    iv1 = *(u8 **)(data_02159444 + 0x1c);
    *(V3 *)(p + 948) = *(V3 *)(iv1 + 48);
    if (func_0200f8e0(p) != 0) {
        return;
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    r4 = func_0203541c(p);
    if (func_0202d108(p, 0, r4, 1) != 0) {
        return;
    }
    if (r4 != 0) {
        func_ov003_02198420(p, r4, 0);
        return;
    }
    func_ov003_0218c3e0(p, 0, 0);
}
