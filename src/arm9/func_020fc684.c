#include "ctx.h"

extern u32 data_0215be48;

extern u32 func_0210e968(u8 *p, u8 *q);
extern u32 *func_02006bac(u32 a);
extern u32 *func_02006b78(u32 a);
extern s32 func_02073828(u32 a, u32 *b);

void func_020fc684(u8 *param_1, u8 *param_2, u8 *param_3, u8 *param_4, u8 *param_5)
{
  s32 i;
  u32 *puVar4;
  u32 *piVar3;
  u32 iVar1;
  u32 iVar2;
  u32 local_28[3];
  puVar4 = (u32 *)(*(u8 **)&data_0215be48 + 0x1e10);
  iVar1 = func_0210e968(param_1, param_2);
  iVar2 = func_0210e968(param_1, param_3);
  local_28[0] = func_0210e968(param_1, param_4);
  local_28[1] = func_0210e968(param_1, param_5);
  piVar3 = func_02006bac(iVar2);
  puVar4[2] = piVar3[5];
  puVar4[1] = piVar3[4];
  piVar3 = func_02006b78(iVar1);
  puVar4[3] = piVar3[3];
  puVar4[6] = 0;
  puVar4[7] = 0;
  for (i = 0; i < 2; i++) {
    if (func_02073828(local_28[i], &local_28[2]) != 0) {
      local_28[i] = local_28[2] + 12;
    }
    {
        u32 *q = puVar4 + i;
        q[4] = local_28[i];
    }
  }
  *puVar4 = 1;
}
