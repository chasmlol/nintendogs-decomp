#include "ctx.h"

extern u32 data_0215ad40;
extern s32 func_020d52ac(void);
extern void func_020d74c0(void);
extern s32 func_0206f9e0(u16 a, void (*cb)(void));

BOOL func_020d7c40(void)
{
    s32 r;
    u8 *P;

    if (func_020d52ac() == 0) {
        return FALSE;
    }
    P = *(u8 **)&data_0215ad40;
    if (*(u32 *)(P + 4) != 0) {
        return FALSE;
    }
    r = func_0206f9e0(*(u16 *)(P + 0x100 + 10), func_020d74c0);
    if (r != 0) {
        *(u32 *)(*(u8 **)&data_0215ad40 + 4) = 1;
        return TRUE;
    }
    return FALSE;
}
