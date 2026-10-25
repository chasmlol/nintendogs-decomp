#include "ctx.h"

extern s32 *data_0214f464;
extern s32 func_02036510(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02027668(s32 a, u8 *b);
extern void func_02027654(s32 a, u8 *b);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern void func_020397fc(u8 *p);

void func_0204527c(u8 *param_1)
{
    s32 iVar1;
    BOOL bVar3;
    s32 uVar2;

    bVar3 = FALSE;
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        uVar2 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar2;
        if ((u16)(((u32)(u16)uVar2 * 3) >> 16) == 0) {
            bVar3 = TRUE;
        }
    }
    iVar1 = func_02036510(param_1);
    if (iVar1 != 0) {
        func_02039448(param_1);
        func_02027668(iVar1, param_1 + 0x278);
        func_02027654(iVar1, param_1 + 0x3b4);
        func_02037450(param_1, 0x300);
    }
    iVar1 = func_0200f8e0(param_1);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_020289d0(param_1, 0, 1);
    if (iVar1 != 0) {
        return;
    }
    if (bVar3 != 0) {
        func_020397fc(param_1);
    }
}
