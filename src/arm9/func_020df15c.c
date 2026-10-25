#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_0215ae60;
extern u32 data_0215ae5c;
extern u32 data_0215ae4c;
extern u32 data_0215ae84;
extern u32 data_0215ae10;
extern u32 data_0215ae2c;
extern u32 data_0215ae28;
extern u32 data_0215ae74;
extern s32 data_02144a4c;

extern void func_020dfc38(void);

void func_020df15c(void)
{
    u32 v;
    if (data_0215ae60 == 0) {
        if (data_0215ae5c == 0) {
            func_020dfc38();
            data_0215ae4c = 0;
            data_0215ae5c = 0;
        } else {
            v = data_0215ae84;
            *(u8 *)&data_0215ae10 = 2;
            data_0215ae2c = v;
            *(u16 *)&data_0215ae28 = 0;
            data_0215ae74 = 0;
        }
    }
    data_02144a4c = -7;
}
