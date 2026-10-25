#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov004_02170320;
extern void func_020f3b54(void);
extern void func_ov004_0215ca8c(void);

void func_ov004_0215c57c(void)
{
    u32 iVar2 = 0x2a2;
    u8 *y;
    u32 c1 = 0x29e;
    u32 iVar3 = 0x315;

    y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
    *(u8 *)(y + (*(s8 *)(y + 0x22a2)) + 0x2000 + c1) = 0;
    y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
    *(s8 *)(y + 0x2000 + iVar2) = -1;
    y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
    *(u8 *)(y + 0x2000 + iVar3) = 0;
    func_020f3b54();
    func_ov004_0215ca8c();
}
