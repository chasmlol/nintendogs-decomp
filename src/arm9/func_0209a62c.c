#include "ctx.h"
extern u32 *data_02159068;
extern void func_020d7fd4(void);
void func_0209a62c(void)
{
    if (data_02159068 != NULL) {
        func_020d7fd4();
        data_02159068 = 0;
    }
}
