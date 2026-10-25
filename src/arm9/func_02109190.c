#include "ctx.h"
extern u8 data_0215be48[];
extern u8 data_0215bf9c[];
extern s32 func_0210bda8(void);
extern void func_0210a854(u32 a);
void func_02109190(void)
{
    s32 iVar1;
    iVar1 = *(s32 *)(*(u8 **)data_0215be48 + 0xa8);
    if (iVar1 != 0 && iVar1 != 4 && iVar1 != 0xe) {
        return;
    }
    iVar1 = func_0210bda8();
    if (iVar1 != 0) {
        if (*(s32 *)(*(u8 **)data_0215bf9c) != 6) {
            func_0210a854(6);
            return;
        }
        return;
    }
    if (*(s32 *)(*(u8 **)data_0215bf9c) != 7) {
        func_0210a854(7);
        return;
    }
    return;
}
