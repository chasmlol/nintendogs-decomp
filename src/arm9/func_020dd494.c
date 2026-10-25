#include "ctx.h"

extern u32 data_0215ae4c;
extern s32 data_0215ae44;
extern s16 data_0215ae1c;
extern s32 data_0215ae84;
extern s32 data_0215ae2c;
extern s32 data_0215ae80;
extern u32 data_0215ae8c;

extern void func_020dfc38(void);
extern s32 func_020dce54(void *a, u8 *p, s32 b, s32 c, s16 d);

s32 func_020dd494(u8 *param_1)
{
    s32 a;
    s32 uVar1;
    if (data_0215ae4c == 1) {
        data_0215ae4c = 0;
        func_020dfc38();
        a = data_0215ae44;
        data_0215ae2c = a;
        uVar1 = (a - data_0215ae84) / 2;
        data_0215ae80 = uVar1;
        return func_020dce54(&data_0215ae8c, param_1, data_0215ae84, uVar1, data_0215ae1c);
    }
    return 0;
}
