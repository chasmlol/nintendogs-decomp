#include "ctx.h"

typedef struct { u8 pad[0x954]; s16 a[3]; s16 b[3]; } P1;

extern u8 *data_0215be48;
extern s32 func_02101280(int a, int b);
extern u32 func_020fc938(int a, int b, int c, int d);
extern void func_02101118(int a, int b, int c, int d, u32 e);
extern void func_02100fac(int a, int b, int c, int d, u16 *e, int f);

void func_02110dbc(P1 *param_1, u8 *param_2, u8 *param_3)
{
    int iVar1;
    int iVar2;
    u16 *puVar3;
    int iVar5;
    int iVar4 = 0;
    int nn = *(u16 *)(param_3 + 0xc);
    u16 local_28[4] = {0, 0, 0, 0};
    s32 xx;

    xx = *(s16 *)(param_3 + 2);
    iVar5 = 0;
    do {
        iVar4 = iVar4 + (xx == param_1->a[iVar5]);
        iVar4 = iVar4 + (xx == param_1->b[iVar5]);
        iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    iVar4 = nn - iVar4;
    func_02101280(0, *(u16 *)(param_2 + 4));
    puVar3 = (u16 *)func_020fc938(2, 0, *(u16 *)(param_3 + 6), 0);
    func_02101118(0, *(int *)(data_0215be48 + 0x232c), *(u16 *)(param_2 + 4), *(u16 *)(param_2 + 0x1c), (u32)puVar3);
    local_28[0] = 0x78;
    local_28[1] = (u16)((iVar4 / 10) % 10 + 0x30);
    local_28[2] = (u16)(iVar4 % 10 + 0x30);
    local_28[3] = 0;
    func_02100fac(0, *(int *)(data_0215be48 + 0x232c), *(u16 *)(param_2 + 4), *(u16 *)(param_2 + 0x1a), local_28, 7);
}
