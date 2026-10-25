#include "ctx.h"

extern u32 data_0215be4c;
void func_0206c7bc(u16 a, void *b, u32 c);

void func_02101cf4(void)
{
    s32 iVar2;
    vu16 zero;
    u8 *iVar3;

    iVar2 = 0;
    *(u16 *)(u8 *)data_0215be4c = 0;
    *(u16 *)(u8 *)data_0215be4c = 0;
    iVar3 = (u8 *)data_0215be4c + 4;
    do {
        *(u32 *)(iVar3 + 4) = 0;
        *(u32 *)(iVar3 + 8) = 0;
        *(u16 *)(iVar3 + 0xc) = 0;
        *(u16 *)(iVar3 + 0xe) = 0;
        *(u32 *)(iVar3 + 0x14) = 0;
        zero = 0;
        func_0206c7bc(zero, iVar3 + 0x18, 0x1a0);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1b8;
    } while (iVar2 < 0x18);
    *(u32 *)((u8 *)data_0215be4c + 0x7348) = (u32)((u8 *)data_0215be4c + 0x2948);
}
