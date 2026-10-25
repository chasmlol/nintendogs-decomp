#include "ctx.h"
extern u8 data_ov028_0215df00[];
extern u8 data_ov028_0215df10[];
extern u8 data_ov028_0215df04[];
extern void func_ov028_0215dabc(void);
extern void func_ov028_0215db0c(void);
extern void func_ov028_0215ccec(void);
extern void func_ov028_0215cd88(u32 a, u32 b);
void func_ov028_0215c2e0(u32 param_1)
{
    *(s16 *)data_ov028_0215df00 = (s16)param_1;
    switch (param_1) {
    case 0:
        func_ov028_0215dabc();
        return;
    case 1:
        func_ov028_0215db0c();
        return;
    case 2:
        func_ov028_0215ccec();
        return;
    case 3:
        func_ov028_0215cd88(*(u32 *)data_ov028_0215df10, 0x74f8);
        *(u32 *)data_ov028_0215df04 = 0;
        return;
    case 4:
        func_ov028_0215ccec();
    }
    return;
}
