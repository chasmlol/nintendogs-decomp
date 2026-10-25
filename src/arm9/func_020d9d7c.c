#include "ctx.h"

extern u32 data_02159444;
extern void func_020d9e90(int p);
extern void func_020c8bd4(int p);
extern void func_020c8ae8(int p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(int p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_0209d2c8(void *p, s32 a, s32 b);
extern u32 func_020da39c(void);
extern u32 func_020da014(void);
extern u32 func_020d9ff8(void);
extern u32 func_020d9fec(void);

void func_020d9d7c(int param_1)
{
  s32 *piVar2;
  s32 iVar1;
  s32 iVar3;

  switch (*(s16 *)(param_1 + 0x90)) {
  case 0:
    break;
  case 1:
    func_020d9e90(param_1);
    return;
  case 2:
    func_020c8bd4(param_1);
    return;
  case 3:
    piVar2 = *(s32 **)(param_1 + 0x214);
    iVar1 = *piVar2;
    func_020c8ae8(param_1, *(u32 *)(iVar1 + 0x48), *(u32 *)(iVar1 + 0x4c), *(u32 *)(iVar1 + 0x50),
                  *(u32 *)(iVar1 + 0x54), *(u32 *)(iVar1 + 0x58), 4);
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), (void *)(param_1 + 0xfc), (void *)(param_1 + 0x108),
                  iVar1, (u32)func_020da39c, 0, (u32)func_020da014, (u32)func_020d9ff8, (u32)func_020d9fec);
    iVar1 = *(s32 *)(*(u32 *)&data_02159444 + 0x98);
    iVar3 = *(s32 *)(*(u32 *)&data_02159444 + 0x94);
    func_0209d2c8((void *)(param_1 + 400), (s16)piVar2[2], iVar3 * iVar3 + iVar1 * iVar1);
    break;
  }
}
