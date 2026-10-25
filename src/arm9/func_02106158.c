#include "ctx.h"

typedef void (*Fn)(s32, s32, s32, s32);

extern void func_02112978(s32 a, s32 b, s32 c, s32 d);

void func_02106158(s32 *param_1)
{
    s32 iVar1;
    Fn fp;
    iVar1 = param_1[4];
    switch (iVar1) {
    case 0:
        param_1[0] = param_1[0] + 1;
        if (param_1[0] == 0x4b) {
            param_1[3] = -0x1000;
            param_1[0] = 0;
            param_1[4] = 1;
        }
        break;
    case 1:
        param_1[3] = param_1[3] + 0x80;
        param_1[2] = param_1[2] + param_1[3];
        if (param_1[3] > 0) {
            param_1[4] = 2;
            param_1[3] = 0;
        }
        break;
    case 2:
        param_1[3] = param_1[3] + 0x800;
        param_1[2] = param_1[2] + param_1[3];
        if (param_1[2] > 0) {
            if (param_1[1] != 0) {
                param_1[3] = 0;
                param_1[2] = 0;
                param_1[1] = 0;
                param_1[4] = 0;
            } else {
                param_1[3] = -0x3000;
                param_1[2] = 0;
                param_1[1] = param_1[1] + 1;
            }
        }
        break;
    }
    fp = (Fn)func_02112978;
    fp(0, 0, 0, (param_1[2] << 4) >> 16);
}
