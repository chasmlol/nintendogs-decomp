#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02149444;
extern u32 data_02149450;
extern void func_02112744(u32 a, u32 b, u32 c);
extern void func_02112670(u32 a, u32 b, u32 c);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_021146ec(void)
{
    s32 iVar1;
    u32 z;

    if (((s32)(*(u16 *)0x04000304 & 0x8000) >> 15) == 0) {
        z = 0;
        func_02112744(z, (u32)&data_02149444, z);
        z = 0;
        func_02112744(z, (u32)&data_02149450, z);
        func_02112670(0, (u32)(vu8 *)&data_02149444, 1);
        z = 0;
        func_02112670(z, (u32)(vu8 *)&data_02149450, z);
        iVar1 = 0;
        do {
            func_02112798(0, (u16)(iVar1 + 4), 0);
            iVar1 = iVar1 + 1;
        } while (iVar1 < 10);
        func_02112798(0, 0xe, 0);
        return;
    }
    func_02112744(0, (u32)&data_02149444, 1);
    func_02112744(0, (u32)&data_02149450, 1);
    func_02112670(0, (u32)(vu8 *)&data_02149444, 1);
    z = 0;
    func_02112670(z, (u32)(vu8 *)&data_02149450, z);
    iVar1 = 0;
    do {
        func_02112798(0, (u16)(iVar1 + 4), 0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    func_02112798(0, 0xe, 0);
}
