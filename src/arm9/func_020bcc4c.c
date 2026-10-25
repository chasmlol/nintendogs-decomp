#include "ctx.h"

extern u32 data_02159468;
extern s32 func_020038b8(s32 *p, s32 a);
extern u32 func_02080858(void);
extern void *func_0208dbc8(s32 *p);
extern void func_0208db10(u32 a);
extern void func_020bcd18(void);
extern void func_020bc3d4(void);
extern void func_02006700(s32 a, u32 b);

#define DP (*(u8 **)&data_02159468)

s32 func_020bcc4c(s32 *param_1)
{
  s32 iVar1;
  s32 iVar4;
  u32 uVar6;
  void *puVar5;

  iVar4 = func_020038b8(param_1, 0x38);
  *(s32 *)&data_02159468 = iVar4;
  uVar6 = func_02080858();
  iVar4 = 0;
  *(s32 *)DP = (s32)uVar6;
  do {
    *(s32 *)(DP + iVar4 * 4 + 4) = 0;
    iVar4 = (s16)(iVar4 + 1);
  } while (iVar4 < 7);
  *(u16 *)(DP + 0x20) = 0;
  *(s16 *)(DP + 0x22) = -1;
  *(u16 *)(DP + 0x2c) = 0;
  *(u32 *)(DP + 0x24) = 0;
  puVar5 = func_0208dbc8(param_1);
  *(void **)(DP + 0x28) = puVar5;
  *(u32 *)(*(u8 **)(DP + 0x28) + 0x2c) = (u32)func_020bcd18;
  func_0208db10(*(u32 *)(DP + 0x28));
  func_02006700(8, (u32)func_020bc3d4);
  return *(s32 *)&data_02159468;
}
