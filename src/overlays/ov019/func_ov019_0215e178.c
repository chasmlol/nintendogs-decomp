#include "ctx.h"

extern s32 func_ov019_0215cca8(s32 a);
extern void func_ov019_0215caf8(s32 r, s32 *a);
extern void func_ov019_0215cb10(s32 r, s32 *a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_ov019_0215c9b4(s32 r, s32 *d, s32 e);

void func_ov019_0215e178(u8 *p)
{
    s32 r;
    s32 aA[3];
    s32 aB[4];

    r = func_ov019_0215cca8((s16)*(u16 *)(p + 44));
    if (r == 0) {
        return;
    }
    func_ov019_0215caf8(r, aA);
    func_ov019_0215cb10(r, aB);
    func_01ff832c(0x5000, aA, aB, (s32 *)(p + 60));
    r = func_ov019_0215c9b4(r, (s32 *)(p + 60), 0x1000);
    if (r != 0) {
        *(u16 *)(p + 30) = 3;
    }
}
