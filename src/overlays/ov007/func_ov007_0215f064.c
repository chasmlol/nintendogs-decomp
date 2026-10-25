#include "ctx.h"

extern u32 data_ov007_02160d9c;
extern void func_0206f2bc(void);
extern void func_ov007_0215def0(void);

void func_ov007_0215f064(void)
{
    if (data_ov007_02160d9c != 0) {
        func_0206f2bc();
        func_ov007_0215def0();
        data_ov007_02160d9c = 0;
        return;
    }
    return;
}
