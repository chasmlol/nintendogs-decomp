#include "ctx.h"

extern u32 data_021594ec;
extern u32 data_021594e8;
extern u16 data_021594d8;
extern u16 func_020647d0(void);

u32 func_020d6740(u8 *param_1)
{
    u32 ok;

    if (*(u16 *)(param_1 + 2) == 0) {
        data_021594ec = 0;
        data_021594e8 = 3;
        ok = 1;
    } else {
        ok = 0;
        data_021594ec = ok;
    }
    if (ok != 0) {
        if (data_021594d8 == 0) {
            data_021594d8 = func_020647d0();
        }
        return 1;
    }
    return 0;
}
