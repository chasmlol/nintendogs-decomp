#include "ctx.h"

extern u32 data_0213b424;
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_02016004(u8 *p)
{
    u8 *iv;
    s32 r;

    if (func_02026fe0(p) != 0) {
        ((void (*)(u8 *))(*(u32 *)((u8 *)&data_0213b424 + 4)))(p);
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
        func_0203e908(p, 117);
    }
}
