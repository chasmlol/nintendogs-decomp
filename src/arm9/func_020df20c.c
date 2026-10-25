#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_0215ae60;
extern u32 data_0215ae84;
extern u32 data_0215ae4c;
extern u32 data_0215ae2c;
extern u32 data_0215ae5c;
extern u8 data_0215ae10[];
extern u16 data_0215ae28[];
extern u8 data_0215ae0c[];
extern u16 data_0215ae18[];
extern u32 data_02144a48;
extern u32 data_02144a4c;
extern u32 func_020e2028(void);
extern void func_020dfc94(void);

void func_020df20c(u32 param_1)
{
    u32 v;
    s32 iVar8;
    s16 sVar1;
    s16 t;
    u32 one;
    u32 zero;

    if (data_0215ae60 != 0) {
        v = func_020e2028();
        if (v == 0x20000000 || v == 0x10000000) {
            data_0215ae60 = 0;
        }
    }
    data_0215ae2c = data_0215ae84;
    iVar8 = data_0215ae4c;
    data_0215ae5c = iVar8;
    data_0215ae10[0] = 5;
    if (iVar8 == 0) {
        func_020dfc94();
        data_0215ae28[0] = 3000;
    } else if ((s16)data_0215ae28[0] < 3000) {
        data_0215ae28[0] = 3000;
    }
    sVar1 = (s16)data_0215ae28[0];
    t = (s16)((sVar1 / 2) * 3);
    zero = 0;
    data_0215ae0c[0] = zero;
    one = 1;
    data_0215ae18[0] = t;
    data_0215ae28[0] = zero;
    data_02144a4c = 0xffffffff;
    data_02144a48 = one << param_1;
}
