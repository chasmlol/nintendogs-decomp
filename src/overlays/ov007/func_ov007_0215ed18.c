#include "ctx.h"

extern u8 *data_ov007_02160d9c;
extern s32 func_ov007_0215da48(void);
extern s32 func_0206f9e0(u32 a, void *b);
extern void func_ov007_0215e654(void);

BOOL func_ov007_0215ed18(void)
{
    s32 iVar1;

    iVar1 = func_ov007_0215da48();
    if (iVar1 == 0) {
        return FALSE;
    }
    if (*(u32 *)(data_ov007_02160d9c + 4) != 0) {
        return FALSE;
    }
    iVar1 = func_0206f9e0(*(u16 *)(data_ov007_02160d9c + 0x10a), (void *)func_ov007_0215e654);
    if (iVar1 != 0) {
        *(u32 *)(data_ov007_02160d9c + 4) = 1;
        return TRUE;
    }
    return FALSE;
}
