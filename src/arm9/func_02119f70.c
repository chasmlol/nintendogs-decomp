#include "ctx.h"

extern u32 data_0215be48;
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc084(u32 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void func_02119f70(u32 *param_1)
{
  u8 *iVar1;

  iVar1 = (u8 *)(*(u32 *)&data_0215be48 + 0x1113c);
  func_02113090(0, 0);
  func_021130c4(0, *(s32 *)(iVar1 + 4));
  func_02112ed0(0, *(s32 *)(iVar1 + 8));
  func_02112e74(0, *(s32 *)(iVar1 + 0xc));
  iVar1 = (u8 *)(*(u32 *)&data_0215be48 + 0x53f4);
  func_020fc084(param_1 + 2, 0, 2, 14, 2, *(u32 *)(iVar1 + 4), 0, 0);
  func_020fc084(param_1 + 12, 0, 2, 17, 2, *(u32 *)(iVar1 + 8), 0, 0);
  func_020fc084(param_1 + 22, 0, 2, 19, 2, *(u32 *)(iVar1 + 0xc), 0, 0);
  func_020fc084(param_1 + 32, 0, 2, 22, 2, *(u32 *)(iVar1 + 0x10), 0, 0);
  *param_1 = 0;
  param_1[1] = 1;
}
