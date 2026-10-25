#include "ctx.h"

extern s32 func_ov019_0215cca8(s32 a);
extern void func_ov019_0215caf8(s32 a, s32 *b);
extern void func_ov019_0215cb10(s32 a, s32 *b);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_ov019_0215c9b4(s32 a, s32 *b, s32 c);

void func_ov019_02160834(u8 *param_1)
{
    s32 iVar1;
    s32 aiStack_28[3];
    s32 aiStack_1c[4];

    iVar1 = func_ov019_0215cca8(*(s16 *)(param_1 + 0x2c));
    if (iVar1 != 0) {
        func_ov019_0215caf8(iVar1, aiStack_28);
        func_ov019_0215cb10(iVar1, aiStack_1c);
        func_01ff832c(0x5000, aiStack_28, aiStack_1c, (s32 *)(param_1 + 0x3c));
        iVar1 = func_ov019_0215c9b4(iVar1, (s32 *)(param_1 + 0x3c), 0x99c);
        if (iVar1 != 0) {
            *(u16 *)(param_1 + 0x1e) = 3;
        }
    }
}
