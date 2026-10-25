#include "ctx.h"

extern s16 data_ov025_0215c744;
extern s16 data_ov025_0215c740;
extern s32 data_ov025_0215c754;
extern u32 data_ov025_0215c720;
extern u32 data_ov025_0215c738;
extern u32 data_ov025_0215c748;

void func_020d5540(void);
void func_020d55bc(void);
void func_020d7e8c(void);
void func_020d7fc0(u32 a);
void func_020d7fa4(s32 a, u32 b);
void func_0205f01c(s32 a, void *b, s32 c, s32 d);

void func_ov025_0215c32c(u32 param_1)
{
    data_ov025_0215c744 = (s16)param_1;
    switch (param_1) {
    case 0:
        func_020d5540();
        return;
    case 1:
        func_020d55bc();
        return;
    case 2:
        func_020d7e8c();
        return;
    case 3:
    {
        s16 old;
        old = data_ov025_0215c740;
        data_ov025_0215c740 = old + 1;
        func_0205f01c(data_ov025_0215c754, &data_ov025_0215c720, data_ov025_0215c740, old + 1);
        func_0205f01c(data_ov025_0215c754 + 0x74f5, &data_ov025_0215c738, data_ov025_0215c740, data_ov025_0215c754);
        func_020d7fc0(0);
        func_020d7fa4(data_ov025_0215c754, 0x74f8);
        data_ov025_0215c748 = 0;
        return;
    }
    case 4:
        func_020d7e8c();
    }
    return;
}
