#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215ae88;
extern u32 data_0215ae5c;
extern u32 data_0215ae4c;
extern u32 data_0215ae84;
extern u32 data_0215ae2c;
extern u8 data_0215ae10[];
extern u16 data_0215ae28[];
extern u32 data_0215ae74;
extern void func_020dfc38(void);
extern void func_020dfc94(void);

void func_020df32c(void)
{
    u32 t;

    if (data_0215ae88 != 1) {
        return;
    }
    if (data_0215ae5c == 0 || data_0215ae4c == 0) {
        func_020dfc38();
        data_0215ae4c = 0;
        data_0215ae5c = 0;
    } else {
        u32 two = 2;
        t = data_0215ae84;
        data_0215ae2c = t;
        data_0215ae10[0] = (u8)two;
        data_0215ae28[0] = 0;
        data_0215ae74 = 0;
        func_020dfc94();
    }
    data_0215ae88 = 0;
}
