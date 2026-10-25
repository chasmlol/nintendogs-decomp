#include "ctx.h"
extern u8 data_02152f3c[];
extern void func_0206c7f0(u32 a, u32 *b, u32 c);
extern void func_02077264(u32 *p, u32 n);
extern void func_020772dc(u32 *a, u32 *b);
void func_02077168(u32 *param_1)
{
    vu32 z0;
    vu32 z1;
    vu32 z2;
    u32 auStack_194[99];
    if ((param_1[0] & 0x10) == 0x10) {
        z0 = 0;
        func_0206c7f0(z0, param_1 + 15, 8);
        z1 = 0;
        func_0206c7f0(z1, param_1 + 17, 8);
        z2 = 0;
        func_0206c7f0(z2, param_1 + 19, 8);
        if (param_1[2] != 0) {
            func_02077264(param_1 + 15, param_1[2]);
        }
        if (param_1[4] != 0) {
            func_02077264(param_1 + 17, param_1[4]);
        }
        if (param_1[6] != 0) {
            func_02077264(param_1 + 19, param_1[6]);
        }
        param_1[0] = param_1[0] & 0xffffffef;
    }
    if (*(u32 **)data_02152f3c != NULL) {
        func_020772dc(*(u32 **)data_02152f3c, param_1);
        return;
    }
    *(u32 **)data_02152f3c = auStack_194;
    func_020772dc(auStack_194, param_1);
    *(u32 **)data_02152f3c = NULL;
}
