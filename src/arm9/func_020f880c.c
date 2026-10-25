#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02003c10(s32 a);
extern s32 func_02003a44(void);
extern void func_020fddc0(s32 a);

void func_020f880c(s32 *param_1)
{
    u8 *r5;

    param_1[0] = param_1[1];
    r5 = (u8 *)param_1 + 0x1d08;
    switch (param_1[0]) {
    case 0:
        if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
            param_1[0x12] = -1;
            param_1[1] = 1;
            func_02003c10(0x14);
            return;
        }
        return;
    case 1:
        if (func_02003a44()) {
            *(s32 *)r5 = param_1[0x12];
            func_020fddc0(0x1e);
            return;
        }
        return;
    }
}
