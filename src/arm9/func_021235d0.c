#include "ctx.h"

extern void func_02111be4(int a, int b, int c);
extern void func_02097b94(int a, int b, int c, int d, int e);

void func_021235d0(int param_1)
{
    func_02111be4(0x14, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    switch (*(u32 *)(param_1 + 0x1cf4)) {
    case 0:
        *(u32 *)(param_1 + 0x14) = 0x2526;
        break;
    case 1:
        *(u32 *)(param_1 + 0x14) = 0x2526;
        break;
    case 2:
        *(u32 *)(param_1 + 0x14) = 0x2530;
        break;
    case 3:
        *(u32 *)(param_1 + 0x14) = 0x2544;
    }
    func_02097b94(8, *(u32 *)(param_1 + 0x14), 0, 0, 1);
}
