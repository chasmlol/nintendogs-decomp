#include "ctx.h"

extern int *data_ov004_02170324;
extern int func_ov004_0216f9d0(void);

int func_ov004_0216e568(void)
{
    if (data_ov004_02170324 != NULL && *data_ov004_02170324 != 0) {
        return func_ov004_0216f9d0();
    }
    return 0;
}
