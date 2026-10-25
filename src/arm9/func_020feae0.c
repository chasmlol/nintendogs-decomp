#include "ctx.h"
extern u8 data_0215be48[];
extern u16 data_021478b8[];
extern u16 data_021478bc[];
extern u16 data_021478c0[];
extern u16 data_021478c4[];
extern u16 data_021478c8[];
extern int func_021178a8(void *p);
extern void func_02112744(int a, void *b, int c);

void func_020feae0(int param_1)
{
    int iVar2;

    iVar2 = func_021178a8((void *)(param_1 + 4));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c4) = 1;
        func_02112744(2, data_021478bc, 0);
    }
    iVar2 = func_021178a8((void *)(param_1 + 0x40));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c4) = 2;
        func_02112744(2, data_021478c4, 0);
    }
    iVar2 = func_021178a8((void *)(param_1 + 0x7c));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c4) = 3;
        func_02112744(2, data_021478c8, 0);
    }
    iVar2 = func_021178a8((void *)(param_1 + 0xb8));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c4) = 4;
        func_02112744(2, data_021478c0, 0);
    }
    iVar2 = func_021178a8((void *)(param_1 + 0xf4));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c4) = 5;
        func_02112744(2, data_021478b8, 0);
    }
}
