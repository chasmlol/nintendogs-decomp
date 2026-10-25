#include "ctx.h"

extern u8 data_02142e50[];
extern u8 data_02142e5c[];
extern void func_020d122c(u16 *a);
extern u32 func_0208c5b4(void *a);
extern void func_020d1224(u16 *a, u32 b);
extern void func_020d1214(u16 *a);
extern void func_020d0858(u16 *a);
extern void func_020d0824(u16 *a, u16 *b);

void func_020cecac(u16 *param_1, int param_2)
{
    *(u16 *)(param_2 + 0x24) = 1;
    *param_1 = 0;
    func_020d122c(param_1 + 0x16);
    *(u32 *)(param_1 + 0x32) = func_0208c5b4(data_02142e50);
    *(u32 *)(param_1 + 0x34) = func_0208c5b4(data_02142e5c);
    func_020d1224(param_1 + 0x16, *(u32 *)(param_1 + 0x32));
    func_020d1214(param_1 + 0x16);
    func_020d0858(param_1 + 0x16);
    func_020d0824(param_1 + 0x16, param_1 + 2);
    *(u32 *)(param_1 + 0x36) = 0;
}
