#include "ctx.h"

typedef struct {
  s32 w[3];
} T12;

extern u32 data_02159444;
extern u32 data_ov005_02167e7c;
extern u32 data_ov005_02167e80;

extern void func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_020c8b40(u8 *p, s32 a);
extern void func_020be3d4(u8 *p, s32 *b);
extern void func_020d9080(s32 *a, s32 *b, s32 c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov005_02165c94(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  u8 *psVar4;
  s32 local_38[3];
  s32 aiStack_2c[3];
  s32 local_20[3];
  psVar4 = *(u8 **)(param_1 + 0x214);
  func_02044ca0(*(s16 *)(param_1 + 156));
  iVar2 = func_01ffdb08(*(s16 *)psVar4);
  func_02027668(iVar2, aiStack_2c);
  *(T12 *)local_38 = *(T12 *)(*(u8 **)(*(u8 **)&data_02159444 + 0x1c) + 48);
  iVar3 = func_020678b4(local_38, aiStack_2c);
  iVar2 = func_02028130(iVar2);
  iVar2 = FX_Mul(*(s32 *)&data_ov005_02167e7c, iVar2);
  func_020c8b40(param_1, iVar3 - iVar2);
  *(T12 *)local_20 = *(T12 *)&data_ov005_02167e80;
  func_020be3d4(param_1, (s32 *)(param_1 + 200));
  func_020d9080((s32 *)(param_1 + 200), local_20, 0x2aab);
  if (*(s32 *)(psVar4 + 8) != 0) {
    local_20[0] = 0;
    local_20[1] = 0x1000;
    local_20[2] = 0;
    func_020d9080((s32 *)(param_1 + 200), local_20, 0xeaab);
    return;
  }
  local_20[0] = 0;
  local_20[1] = 0x1000;
  local_20[2] = 0;
  func_020d9080((s32 *)(param_1 + 200), local_20, 0x1555);
}
