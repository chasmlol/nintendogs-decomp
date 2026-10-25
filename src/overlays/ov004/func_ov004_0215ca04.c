#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov004_02170320;
extern u8 data_ov004_0216fd54[];

void func_ov004_0215ca04(u8 *param_1, s32 *param_2)
{
    u8 *tbl = data_ov004_0216fd54;
    u32 *gp = &data_ov004_02170320;
    u8 *A;
    u8 *B;
    u8 *C;
    u32 idx;
    s32 sv;
    s8 val;
    u8 old;
    A = *(u8 **)(*gp + 0x36c4);
    B = A + 0x2000;
    C = A + 0x2200;
    idx = B[0x305];
    sv = *(s8 *)(C + 0xa2);
    val = *(s8 *)(tbl + idx * 4 + sv);
    *(u8 *)(param_1) = (u8)(val);
    *param_2 = *(s8 *)(*(u8 **)(*gp + 0x36c4) + 0x2200 + 0xa3);
}
