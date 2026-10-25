#pragma avoid_byte strb
#include "ctx.h"

extern int data_0215be34;
extern u8 data_0213b7d0[];
extern u32 data_02139f10[];
extern u32 data_02139ea4[];
extern void func_02026c24(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, void *c);
extern void func_0209eeec(s32 a, s32 b);
extern void func_02023590(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

void func_ov003_02163d28(u8 *p)
{
    int *piVar1;
    int iVar2;
    ((Obj *)p)->s0 = 0x29;
    ((Obj *)p)->s1 = 7;
    *(u8 *)(p + 151) = 4;
    func_02026c24(p);
    func_02025a84(p);
    func_0202da00(p, *(s32 *)(data_0213b7d0 + 0xc));
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0xf, (void *)data_02139f10[*(s8 *)(p + 0x88)]);
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x10, (void *)data_02139ea4[*(s8 *)(p + 0x88)]);
    func_0209eeec(0x1e, 0x7f);
    func_02023590(p);
}
