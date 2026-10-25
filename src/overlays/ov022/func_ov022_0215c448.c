#include "ctx.h"

u32 func_02005e18(u16 *a);
void func_020995b8(u16 *a);
u16 *func_0200563c(u32 *p, u16 *a);
void func_0200560c(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02099554(u16 *p);

u16 *func_ov022_0215c448(u32 *param_1)
{
    u16 arr[20];
    u16 *puVar1;

    func_02005e18(arr);
    arr[1] = 1;
    func_020995b8(arr);
    arr[4] = 0;
    arr[7] = 32;
    arr[11] = 3;
    arr[12] = 16;
    arr[8] = 64;
    arr[3] = 1;
    arr[5] = 1;
    arr[14] = 4;
    puVar1 = func_0200563c(param_1, arr);
    func_0200560c(puVar1 + 22, 1, 0, 0, 1, 5, 1, 0);
    func_02099554(puVar1);
    return puVar1;
}
