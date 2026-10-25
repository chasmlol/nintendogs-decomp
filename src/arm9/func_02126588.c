#include "ctx.h"

extern u8 *data_0215be48;
extern s32 func_02092af0(s32 a);
extern void func_02101280(int a, void *b);
extern void func_02100ca8(int a, int b, void *c, void *d, int e, int f, void *g);
extern void func_02100b14(int a, int b, void *c, void *d, int e, int f, int g, void *h);
extern void func_0211aedc(void *a, void *b);

void func_02126588(u8 *param_1, int param_2)
{
    s32 iVar6;
    s32 iVar3;
    u16 uVar1;

    iVar6 = *(s32 *)(data_0215be48 + 0x232c);
    iVar3 = func_02092af0(*(s16 *)(data_0215be48 + param_2 * 2 + 0x150));
    uVar1 = *(u16 *)(iVar3 + 0x5c);
  {
    u16 auStack_40[19] = {0};
    u16 local_48[4] = {0, 0, 0, 0};
    func_02101280(0, param_1 + 0xc);
    func_02100ca8(0, iVar6, param_1 + 0xc, param_1, 0, 2, (void *)(iVar3 + 0xc));
    local_48[0] = 0x78;
    local_48[1] = (u16)(((s32)uVar1 / 10) % 10 + 0x30);
    local_48[2] = (u16)((s32)uVar1 % 10 + 0x30);
    local_48[3] = 0;
    func_02100b14(0, iVar6, param_1 + 0xc, param_1 + 0xc, 7, -8, 2, local_48);
    func_0211aedc((void *)(iVar3 + 0x60), auStack_40);
    func_02100ca8(0, iVar6, param_1 + 0xc, param_1 + 6, 0, -2, auStack_40);
  }
}
