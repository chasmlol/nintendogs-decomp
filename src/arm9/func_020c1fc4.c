#include "ctx.h"

extern u32 data_02159470;
extern void func_0208d564(u16 *p);
extern void func_0208d3a0(u16 *p, u32 a, u32 b, u32 c);
extern void func_0208d388(u16 *p);

void func_020c1fc4(u16 *param_1)
{
    func_0208d564(param_1);
    switch (*(s16 *)&data_02159470) {
    case 0x35:
        func_0208d3a0(param_1, 0x2c, 1, 0x218);
        func_0208d3a0(param_1, 0x2f, 1, 0x88);
        break;
    case 0x36:
        func_0208d3a0(param_1, 0x2d, 1, 0x218);
        func_0208d3a0(param_1, 0x30, 1, 0x88);
        break;
    case 0x37:
        func_0208d3a0(param_1, 0x2e, 1, 0x218);
        func_0208d3a0(param_1, 0x31, 1, 0x88);
        break;
    case 0x38:
        func_0208d3a0(param_1, 0x2c, 1, 0x218);
        func_0208d3a0(param_1, 0x32, 1, 0x88);
        break;
    case 0x39:
        func_0208d3a0(param_1, 0x2c, 1, 0x218);
        func_0208d3a0(param_1, 0x33, 1, 0x88);
    }
    func_0208d388(param_1);
}
