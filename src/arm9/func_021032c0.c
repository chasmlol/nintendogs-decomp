#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_02147d24[];
extern u8 data_02147d2c[];

extern void func_021039c8(int *a);
extern void func_021036b4(u32 a);
extern void func_02107dd8(void);
extern void func_02117f14(int *a, u32 b, u8 *c, u32 d, u32 e, u32 f, u32 g);
extern void func_02117f98(int *a, u32 b, u8 *c, u32 d, u32 e, u32 f, u32 g);
extern void func_02117c54(int *a);
extern void func_0210297c(u32 a);
extern void func_021122d4(u32 a, u32 b);

void func_021032c0(int *param_1)
{
    if (*param_1 != 0) {
        param_1[0x19] = 1;
        param_1[1] = 1;
        param_1[0x16] = 0;
        func_021039c8(param_1);
        func_021036b4(*(u32 *)(data_0215be48 + 0x11158));
        func_02107dd8();
        *(u32 *)(0x5034 + data_0215be48) = 1;
        func_02117f14(param_1 + 0x66, 3, data_02147d24, 0x18, -0x40, 0, 0x10);
        func_02117f14(param_1 + 0x6e, 1, data_02147d24, 0x18, -0x40, 0, 0x10);
        func_02117f98(param_1 + 0x76, 3, data_02147d2c, 0x1d, -97, 0x36, 0x10);
        func_02117f98(param_1 + 0x7e, 1, data_02147d2c, 0x1d, -97, 0x36, 0x10);
        func_02117c54(param_1 + 0x66);
        func_02117c54(param_1 + 0x6e);
        func_02117c54(param_1 + 0x76);
        func_02117c54(param_1 + 0x7e);
        func_0210297c(0);
        return;
    }
    func_021122d4(1, 0);
    func_021122d4(3, 0);
}
