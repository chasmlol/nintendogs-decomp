#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0215be34;
extern u8 data_02139f10[];
extern u8 data_02139ea4[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern void func_02081198(s32 a, s32 b, u8 *c);
extern void func_0209eeec(s32 a, s32 b);
extern void func_02023590(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

void func_ov003_0215edd0(u8 *p)
{
    s32 *piVar1;
    s32 iVar2;

    ((Obj *)p)->s0 = 25;
    ((Obj *)p)->s1 = 7;
    *(u8 *)(p + 151) = 4;
    func_020264f4(p);
    func_020255a4(p);
    func_0202da00(p, 1);
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0xf, *(u8 **)(data_02139f10 + *(s8 *)(p + 0x88) * 4));
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x10, *(u8 **)(data_02139ea4 + *(s8 *)(p + 0x88) * 4));
    func_0209eeec(0x1e, 0x7f);
    func_02023590(p);
}
