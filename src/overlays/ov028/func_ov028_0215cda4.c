#include "ctx.h"
extern u32 *data_ov028_0215df14[];
extern u32 data_ov028_0215df14_v;
extern void func_0206f2bc(void);
extern void func_ov028_0215dbe4(void);
void func_ov028_0215cda4(void)
{
    if (*(u32 *)data_ov028_0215df14 != 0) {
        func_0206f2bc();
        func_ov028_0215dbe4();
        *(u32 *)data_ov028_0215df14 = 0;
        return;
    }
    return;
}
