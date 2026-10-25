#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_0202a5c4(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 n);

void func_ov003_021694ec(u8 *p)
{
    s32 iVar1;
    u32 uVar2;
    iVar1 = func_0202a5c4(p);
    switch (iVar1) {
    case 1:
        uVar2 = 0x1e3;
        break;
    case 2:
        uVar2 = 0x1e4;
        break;
    default:
        uVar2 = 0x1e3;
        break;
    }
    *(u16 *)(p + 256 + 82) = (u16)uVar2;
    *(u8 *)(p + 151) = 1;
    func_020264f4(p);
    func_020255a4(p);
    func_02023654(p, 0x1b, 1);
    func_0202db24(p, 0);
}
