#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_0213b424;
extern s32 func_02028124(u8 *p);
extern s32 func_02024e40(u8 *p, u32 a, s32 c);
extern s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_0201850c(u8 *p)
{
    u8 *iv;
    s32 r;

    r = func_02024e40(p, 20, FX_Mul(func_02028124(p), -20));
    if (r == 0) {
        func_02024d40(p, 30, 65, FX_Mul(func_02028124(p), 11));
    }
    if (func_02026fe0(p) != 0) {
        ((void (*)(u8 *))(*(u32 *)((u8 *)&data_0213b424 + 8)))(p);
    }
    func_0201d1f0(p);
    func_02035c98(p, 1);
    iv = func_0203541c(p);
    if (iv != 0) {
        func_0203e8cc(p, 2, 1);
        switch (*(s16 *)(iv + 0x90)) {
        case 4:
            if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
                *(s32 *)(p + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
                *(s32 *)(p + 0x948) = 8;
            }
            break;
        }
        r = func_ov003_02198298(p);
    } else {
        r = 0;
    }
    if (r != 0) {
        return;
    }
    if (func_0203567c(p) != 0) {
        func_0203e908(p, 11);
    }
}
