#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02152cd8;
typedef struct { u32 w[3]; } T3;

void func_02067e34(u8 *a, void *b, u32 *c);
void func_02006a30(u32 *a, u32 *b);

void func_020bfdb8(u32 param_1, u8 *param_2, u32 *param_3, u32 *param_4, u32 *param_5)
{
    T3 local;
    u8 *iVar1;
    u32 v0;
    u32 v1;
    u32 v2;

    iVar1 = *(u8 **)(*(u8 **)&data_02159444 + 0x1c);
    local = *(T3 *)(iVar1 + 0x30);
    func_02067e34(param_2, &local, param_5);
    param_5[1] = 0;
    func_02006a30(param_5, param_5);
    param_4[0] = 0;
    param_4[1] = 0x1000;
    param_4[2] = 0;
    v2 = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    v1 = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    v0 = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    param_3[0] = v0;
    param_3[1] = v1;
    param_3[2] = v2;
    param_3[0] = -param_3[0];
    param_3[1] = -param_3[1];
    param_3[2] = -param_3[2];
}
