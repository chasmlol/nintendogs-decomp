#include "ctx.h"
extern u32 *data_0215b234;
extern u32 *data_0215b238;
extern void func_02001f14(void);
void func_020dfc38(void)
{
    if (data_0215b234 == NULL) {
        return;
    }
    if (data_0215b238 != NULL) {
        func_02001f14();
        data_0215b238 = 0;
    }
}
