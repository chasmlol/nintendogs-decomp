#include "ctx.h"

extern u8 *data_02159428;
extern u32 func_0208c230(u8 *a, u32 b, u32 c, u32 d);
extern void func_0208f104(u32 a, u8 *b);
extern u32 func_0208f43c(u8 *a, u32 b);
extern u32 func_0208c13c(u8 *a, u32 b);
extern u32 func_0208c03c(u8 *a, u32 b);
extern u32 func_0208bf38(u8 *a, u32 b);

void func_020a73cc(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 puVar1;
    u32 r;
    u8 *base;

    puVar1 = func_0208c230(param_1, *(u16 *)(data_02159428 + 6), param_3, param_4);
    if (puVar1 != 0) {
        func_0208f104(puVar1, param_1);
        base = data_02159428;
        r = func_0208f43c(param_1, puVar1);
        *(u32 *)(base + 0x18) = r;
        *(u16 *)(*(u8 **)(data_02159428 + 0x18) + 4) |= 2;
    } else {
        *(u32 *)(data_02159428 + 0x18) = 0;
    }
    puVar1 = func_0208c13c(param_1, *(u16 *)(data_02159428 + 6));
    if (puVar1 != 0) {
        func_0208f104(puVar1, param_1);
        base = data_02159428;
        r = func_0208f43c(param_1, puVar1);
        *(u32 *)(base + 0x1c) = r;
        *(u16 *)(*(u8 **)(data_02159428 + 0x1c) + 4) |= 2;
    } else {
        *(u32 *)(data_02159428 + 0x1c) = 0;
    }
    base = data_02159428;
    r = func_0208c03c(param_1, *(u16 *)(base + 6));
    *(u32 *)(base + 0x20) = r;
    base = data_02159428;
    r = func_0208bf38(param_1, *(u16 *)(base + 6));
    *(u32 *)(base + 0x24) = r;
    *(u32 *)(data_02159428 + 0x28) = 0;
}
