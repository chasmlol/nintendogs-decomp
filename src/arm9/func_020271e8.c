#include "ctx.h"

extern u32 *func_0206c8d4(u32 *a, u32 *b);
extern u32 *func_02066b80(u32 *a);

u32 *func_020271e8(u8 *param_1, u32 *param_2, u32 param_3)
{
    u32 *puVar1;

    switch (param_3) {
    case 17:
        return func_0206c8d4((u32 *)(param_1 + 0x52c), param_2);
    case 12:
        return func_0206c8d4((u32 *)(param_1 + 0x4fc), param_2);
    case 11:
        return func_0206c8d4((u32 *)(param_1 + 0x4cc), param_2);
    case 10:
        return func_0206c8d4((u32 *)(param_1 + 0x49c), param_2);
    case 18:
        return func_0206c8d4((u32 *)(param_1 + 0x55c), param_2);
    case 2:
        return func_0206c8d4((u32 *)(param_1 + 0x64c), param_2);
    case 3:
        return func_0206c8d4((u32 *)(param_1 + 0x6ac), param_2);
    case 4:
        return func_0206c8d4((u32 *)(param_1 + 0x70c), param_2);
    case 6:
        return func_0206c8d4((u32 *)(param_1 + 0x67c), param_2);
    case 7:
        return func_0206c8d4((u32 *)(param_1 + 0x6dc), param_2);
    case 8:
        return func_0206c8d4((u32 *)(param_1 + 0x73c), param_2);
    case 27:
        return func_0206c8d4((u32 *)(param_1 + 0x76c), param_2);
    case 28:
        return func_0206c8d4((u32 *)(param_1 + 0x79c), param_2);
    default:
        break;
    }
    puVar1 = func_02066b80(param_2);
    return puVar1;
}
