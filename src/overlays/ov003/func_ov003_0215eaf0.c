#pragma avoid_byte strb
#include "ctx.h"

extern int data_0215be34;
extern u32 data_02139f10[];
extern u32 data_02139ea4[];
extern void func_020264f4(int p);
extern void func_020255a4(int p);
extern void func_0202da00(int p, int a);
extern void func_02081198(int a, int b, void *c);
extern void func_0209eeec(int a, int b);
extern void func_02023590(int p);

void func_ov003_0215eaf0(int param_1)
{
    int *piVar1;
    int iVar2;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x70;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 7;
    ((u8 *)param_1)[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 5);
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0xf, (void *)data_02139f10[*(s8 *)((u8 *)param_1 + 0x88)]);
    piVar1 = (int *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x10, (void *)data_02139ea4[*(s8 *)((u8 *)param_1 + 0x88)]);
    func_0209eeec(0x1e, 0x7f);
    func_02023590(param_1);
}
